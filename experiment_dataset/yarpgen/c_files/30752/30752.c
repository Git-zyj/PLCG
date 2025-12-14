/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [10] [i_4] = (((arr_11 [i_0] [i_1] [i_2]) * (arr_11 [i_0] [i_3] [i_4])));
                                arr_14 [i_0] [i_1] [i_4] [i_0] [i_4] = (arr_3 [0] [i_1 - 4]);
                            }
                        }
                    }
                    var_19 = (((arr_9 [i_0] [i_0] [i_0] [i_0]) <= (arr_9 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_5] = ((-(arr_4 [i_0] [i_5])));
            arr_20 [i_5] = (((arr_1 [i_0]) * ((((arr_8 [i_0] [i_5] [i_5]) <= (arr_12 [i_0]))))));
            arr_21 [i_0] [i_5] = (~(arr_0 [i_5]));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_24 [i_0] [6] = (((3 / 8084485713573645760) - (arr_23 [i_0] [i_0])));
            var_20 += ((((127 <= (arr_5 [i_0] [i_6]))) ? (arr_6 [i_6] [i_6] [i_0] [i_0]) : (arr_0 [i_6])));
        }
        var_21 += (arr_9 [i_0] [i_0] [i_0] [i_0]);
        arr_25 [i_0] = (((arr_17 [i_0] [6] [i_0]) || (arr_22 [i_0] [i_0])));
    }
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        arr_28 [i_7] &= (((arr_26 [i_7 - 2]) ? ((((max(2825399441, (arr_26 [i_7])))) ? (max(4294967295, (arr_27 [i_7]))) : (arr_27 [i_7 - 1]))) : (((~((max((arr_26 [1]), var_16))))))));
        arr_29 [i_7] [i_7] &= max((((arr_26 [i_7 + 2]) ? 15987828200909568661 : (arr_26 [i_7 + 2]))), ((((arr_26 [i_7 - 2]) ? (arr_27 [i_7 - 1]) : (arr_26 [i_7 + 2])))));
        var_22 -= (arr_26 [i_7 + 2]);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_23 += ((-(max((arr_26 [i_8]), (min((arr_31 [i_8]), var_18))))));
        var_24 += (min((min((arr_31 [i_8]), (min(var_14, 38596)))), (arr_31 [i_8])));
    }
    var_25 = ((~((-(26039 - 255)))));
    #pragma endscop
}
