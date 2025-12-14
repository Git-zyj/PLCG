/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_2] = (((((~((-(arr_8 [i_0] [i_0] [i_0] [i_2])))))) ? ((4259247435316983150 / (arr_6 [i_0]))) : ((~(4259247435316983150 ^ var_0)))));
                    arr_12 [22] [i_1] [i_2] [i_1] = -93;
                }
            }
        }
    }
    var_16 += (min((min(((var_15 ? var_6 : 89)), var_11)), ((((min(var_7, 43))) ? var_9 : var_13))));
    #pragma endscop
}
