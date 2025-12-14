/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((var_10 != var_8) > var_1))), 115));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_14 = ((var_1 >> (((arr_0 [i_1 - 1] [i_1 - 1]) - 64))));
                        var_15 = var_9;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 = 1;
                        arr_15 [i_1] = (arr_13 [i_0] [i_1 + 1]);
                        var_17 -= (arr_0 [i_2] [i_2]);
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_20 [i_5] [7] [i_5] [i_5 + 1] = ((max(0, (arr_12 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_1]))));
                        var_18 = var_10;
                        var_19 |= (max(1, ((((arr_14 [i_5] [i_1 - 2]) == (arr_14 [i_1 + 1] [i_1 + 1]))))));
                    }
                    var_20 = 0;
                    var_21 |= ((((((((max((arr_16 [i_0] [i_1] [i_1] [i_2]), var_6)))) | var_5))) || ((min(((~(arr_6 [i_2] [i_1 + 1] [i_0]))), (arr_7 [i_0] [i_1] [i_2] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
