/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 % (((max(var_8, 2147483136)) * (var_10 != var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (arr_5 [i_0] [i_1] [1] [i_3]);
                                var_21 = (~9223372036854775807);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [1] [i_1] = (((arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1]) ? (arr_14 [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2]) : (arr_14 [i_1 + 3] [16] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 + 3])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_19 [i_0] [9] [17] [i_5] = (2147484161 || 2147484160);
                    var_22 = ((2147483136 % (arr_4 [i_5])));
                }
                arr_20 [8] [i_0] = 5711489403521404290;
            }
        }
    }
    var_23 = var_1;
    var_24 = ((((-(var_0 & var_15))) / (var_0 < var_16)));
    #pragma endscop
}
