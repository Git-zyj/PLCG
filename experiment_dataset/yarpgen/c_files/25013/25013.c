/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!4294967295);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            arr_13 [i_1] &= 18446744073709551607;
                            arr_14 [i_0] [i_1] [i_0] [i_1] [6] [i_0] = (~-33612);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_18 [i_5] [i_0] [i_0] [i_0] = 33602;
                            arr_19 [i_5] [i_0] [3] [i_0] [i_0] = (((arr_1 [i_5]) >= (((arr_16 [i_0] [i_0] [0] [i_3] [i_3] [i_5]) | (arr_8 [i_0] [i_1] [i_0] [i_3])))));
                            arr_20 [i_0] [i_1] [i_0] [i_3] [i_0] = var_12;
                            arr_21 [i_0] [i_3] [i_2] [i_3] [1] = ((33603 ? (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_3 [i_5])));
                        }
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            arr_25 [i_0] [0] [i_6] [i_6] &= (arr_23 [i_0] [i_6 - 2] [i_6 + 2] [i_6 - 1] [i_6 - 2] [i_1]);
                            arr_26 [i_6] [2] [i_3] [i_2] [1] [i_6] = ((-(arr_4 [i_0] [i_3])));
                        }
                        arr_27 [i_0] = ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
            arr_28 [i_0] [i_1] [10] = (~33603);
            arr_29 [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_1]);
            arr_30 [i_0] [i_0] = (((arr_8 [i_1] [i_1] [i_0] [i_1]) ? (arr_9 [i_0] [i_0] [i_0] [i_1]) : 33602));
        }
        arr_31 [i_0] = ((!(arr_9 [i_0] [i_0] [i_0] [i_0])));
        arr_32 [1] |= ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        arr_37 [4] = (((~(arr_11 [10] [10] [i_7 + 4] [i_7 - 1] [10] [i_7]))));
        arr_38 [i_7 + 2] = ((-(max(((-(arr_22 [i_7] [i_7] [i_7 + 1]))), -31927))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_41 [i_8] = ((((((((~(arr_40 [i_8]))) + 2147483647)) >> (arr_40 [i_8])))) ? (((~33612) ? 33602 : ((min(33618, var_13))))) : (~33604));
        arr_42 [i_8] = (((arr_39 [i_8]) ? ((min((arr_39 [i_8]), (arr_39 [i_8])))) : (arr_39 [i_8])));
        arr_43 [i_8] [i_8] = (arr_39 [i_8]);
        arr_44 [4] [i_8] = (-((((arr_40 [i_8]) <= (arr_40 [i_8])))));
        arr_45 [11] [11] = ((~(~var_16)));
    }
    var_18 = 31925;
    #pragma endscop
}
