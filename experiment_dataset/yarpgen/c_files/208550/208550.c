/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(((var_2 ? ((2 ? var_1 : 1069537399)) : (((max(22646, var_12)))))), ((min(63537, ((min(1, var_7)))))))))));
    var_16 = 6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [20] [20] [i_0] = ((-(min(((11550 ? -15419 : (arr_2 [i_0] [i_1]))), var_9))));
                    var_17 = var_6;
                    var_18 = (min(var_18, ((!((min((arr_6 [i_0] [i_0 - 1] [i_1 + 1]), var_8)))))));
                }
            }
        }
    }
    #pragma endscop
}
