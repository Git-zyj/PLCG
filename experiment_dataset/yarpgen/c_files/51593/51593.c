/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = (-7 - var_0);
                    var_10 = (max(var_10, 7));
                    var_11 += (min(((126 - ((((arr_3 [i_2] [13] [13]) > var_0))))), ((min(var_3, 268419072)))));
                }
            }
        }
    }
    var_12 *= var_8;
    #pragma endscop
}
