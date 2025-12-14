/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));
    var_15 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= ((!((((arr_1 [i_0]) ? var_12 : var_7)))));
        var_17 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (((arr_8 [i_2] [i_2 + 3] [i_2]) ^ (arr_8 [i_2] [i_0] [i_0])));
                    arr_10 [i_2] = (((((-(arr_6 [i_2])))) ? (arr_6 [i_1]) : ((((arr_8 [i_2] [i_2] [i_2]) | (arr_2 [i_0]))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] = 14496310435755285091;
                        arr_14 [i_0] [i_0] [i_0] [1] [i_2] = var_0;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 = (arr_12 [i_1] [i_2 + 1] [i_2] [i_2] [i_2 + 3]);
                            arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] = -22;
                            var_20 = ((-5400217727872067695 < (~var_6)));
                            arr_23 [i_0] [i_1] [i_2 - 2] [i_2] [i_4] [i_2] = (arr_9 [i_5] [i_4] [i_2 + 2]);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = (~var_6);
                            var_22 *= ((arr_16 [i_0] [9] [i_2 - 2] [i_2 + 3]) && (arr_20 [4] [i_0] [i_2 + 1] [i_2 - 1] [4]));
                            arr_26 [8] [i_2 - 2] [i_2] [i_4] [i_2] = (177 | var_6);
                            var_23 = (!158);
                            var_24 ^= (+-57432);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_30 [i_2] [i_0] [i_0] [i_0] [i_0] [4] = (((arr_29 [i_1] [i_2] [i_2] [2] [i_2 - 1] [i_2 - 1]) ? (arr_29 [i_0] [i_0] [i_2] [i_1] [i_2 - 2] [i_2 + 1]) : (arr_4 [i_2] [i_2] [i_2 - 2])));
                            var_25 = (max(var_25, 1984));
                            arr_31 [i_2] [i_4] [i_1] [i_1] [i_2] = ((arr_20 [i_2] [i_1] [i_2 + 3] [i_4] [i_7]) <= ((((!(arr_18 [i_0] [9] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        var_26 -= (arr_5 [i_0] [i_0]);
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = (((((-16746 ? (arr_33 [i_8] [i_8]) : (((arr_33 [i_8] [i_8]) ? var_8 : (arr_33 [i_8] [i_8])))))) ? ((~(arr_33 [i_8] [i_8]))) : (((((((-78 ? 4294967295 : 62))) && (((arr_32 [i_8]) || (arr_32 [i_8])))))))));
        var_27 = var_3;
        var_28 = (((arr_33 [i_8] [i_8]) - (((((arr_32 [i_8]) < (arr_32 [i_8])))))));
        arr_35 [i_8] = (!((min((((~(arr_33 [15] [i_8])))), (((arr_32 [9]) & (arr_32 [i_8])))))));
    }
    #pragma endscop
}
