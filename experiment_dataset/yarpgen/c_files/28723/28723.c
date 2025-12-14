/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(var_7, var_1));
    var_13 *= var_9;
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2 + 3] [5] [i_2] = ((((((max(var_5, var_8))) << ((((min(57002, 57002))) - 56997)))) << (63576 - 63564)));
                        var_15 = (((!56998) || (arr_1 [i_1])));
                    }
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_4 + 2] [i_5] = 56998;
                            var_16 = (max((((var_7 >= var_6) ? (-9223372036854775807 - 1) : (((-(arr_7 [i_0] [i_0] [i_2 + 4] [i_4 - 1])))))), (((536870911 <= ((((!(arr_12 [i_0] [i_2] [i_0]))))))))));
                            arr_18 [i_2] [i_1] [3] = (max((((arr_8 [i_0] [i_2 + 3] [i_0] [7]) ? (arr_8 [8] [i_2 + 3] [i_4] [i_4 - 4]) : 0)), (arr_4 [i_2 + 1] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_21 [i_2] [0] [i_2] [i_4] [i_2] = (i_2 % 2 == zero) ? ((((8513 % var_5) && (((1959 >> (((arr_16 [i_2] [i_2]) - 23787)))))))) : ((((8513 % var_5) && (((1959 >> (((((arr_16 [i_2] [i_2]) - 23787)) - 4114))))))));
                            var_17 ^= (arr_8 [4] [i_0] [i_2 - 1] [i_2]);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [0] = ((var_4 > (arr_23 [i_2 + 4] [i_4 - 2] [i_2 - 1] [i_2 + 4] [i_7])));
                            var_18 *= (arr_14 [i_0] [i_0] [i_0]);
                        }
                        arr_25 [0] [i_2] = (((151 | (arr_4 [i_4] [i_4 - 4]))));
                        var_19 = -8538;
                        var_20 = ((((((arr_12 [i_1] [i_2] [i_4 + 1]) ? (arr_16 [i_2] [i_1]) : ((min((arr_23 [i_1] [i_1] [7] [1] [9]), 8505)))))) * ((6866 * (arr_12 [i_4 - 4] [i_2] [i_1])))));
                    }
                    var_21 = ((((((arr_16 [i_2] [i_2]) ? (arr_16 [i_2] [i_2]) : (arr_0 [i_0] [i_0])))) - (((arr_16 [i_2] [i_2 - 1]) ? var_6 : (arr_14 [i_0] [i_2] [i_2 + 1])))));
                    var_22 = ((((!(arr_23 [i_2] [i_2] [i_2] [i_0] [i_1]))) ? 1 : 205));
                    var_23 = ((var_5 ? (((((min(1, 134))) && ((((arr_20 [i_0] [i_0] [i_0] [i_0]) ? var_8 : (arr_1 [i_2]))))))) : (15115 - 56999)));
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_24 = (arr_9 [i_0] [i_0] [3] [i_1] [3]);
                    arr_29 [i_0] [i_0] [i_0] = (~11343);
                }
                var_25 = (arr_9 [i_1] [1] [i_0] [i_0] [i_0]);
                var_26 ^= (arr_8 [i_0] [5] [i_1] [i_1]);
                arr_30 [i_0] [i_1] [6] = (max(((-var_5 ? (!var_0) : (~1))), ((min((!var_2), (min(36, var_1)))))));
            }
        }
    }
    #pragma endscop
}
