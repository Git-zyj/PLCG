/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((((max(31094, 31094))) ? (~var_4) : ((max(var_19, var_3)))))), ((var_7 | (~var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = 2047;
                    var_21 = min(var_6, ((min((var_6 >= var_17), ((var_7 == (arr_1 [i_1])))))));
                }
            }
        }
    }
    var_22 *= var_18;
    var_23 = (min(var_23, (+-31105)));
    #pragma endscop
}
