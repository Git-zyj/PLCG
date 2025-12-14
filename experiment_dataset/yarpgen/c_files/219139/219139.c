/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 += (69 >= 6968707655599994548);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_4] [i_1] = var_7;
                            arr_18 [i_0] [i_0] [i_4] = (((((((((arr_16 [i_4] [i_1] [i_1] [i_4] [i_4]) ? 9398 : (arr_2 [i_3])))) ^ (~139637976727552)))) ? 17718 : (max(18310, ((-(arr_16 [i_4] [8] [i_4] [i_4] [i_4])))))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_22 = var_6;
                            var_23 = (max(var_23, -1));
                            var_24 |= (max(((max((arr_14 [i_0 + 1] [14] [i_2] [14] [i_0 + 1]), 101))), var_14));
                            var_25 = (max(var_25, ((((((arr_0 [i_5]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 1]) : (arr_20 [i_1] [i_1] [i_2] [i_1] [14]))) < (arr_6 [10] [3] [i_3] [2]))))));
                        }
                        var_26 = (65 / var_4);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_27 = (max(2554079305, (127 | -65)));
                            arr_32 [i_8] [i_6] [i_7] [i_6] [i_7] [i_7] [i_9] = (max(((~(245 != var_3))), ((-(max(200, -107261561))))));
                            var_28 = (max(var_28, (((((arr_13 [i_0 + 1] [i_6] [i_7] [8] [i_6] [i_8]) ? 6968707655599994548 : -833918921))))));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_29 = (arr_23 [i_0] [i_0] [6]);
                            var_30 += 19696;
                            arr_36 [i_0 - 1] [i_0 - 1] [i_8] [i_8] [i_10] [0] = (~179);
                            arr_37 [i_7] [i_6] [i_7] [i_7] [i_7] [i_8] [i_8] &= (max((arr_31 [i_0] [i_6] [i_7] [i_7] [1]), (((!((((((arr_27 [i_0] [i_6] [i_0] [i_8] [i_10] [11]) + 9223372036854775807)) >> (arr_25 [i_7])))))))));
                        }
                        arr_38 [i_8] [i_8] [i_8] [1] = (((arr_33 [i_0] [i_6] [i_6] [i_7] [i_0] [i_8] [i_8]) > (((-(((var_8 || (arr_11 [13] [i_6] [i_7] [i_6])))))))));
                    }
                }
            }
        }
        var_31 = var_19;
        var_32 = (max(var_9, 255));
        arr_39 [i_0] [i_0] |= var_19;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_33 ^= (max(((var_8 ? (arr_42 [i_11] [i_11]) : (arr_41 [i_11]))), (arr_40 [i_11])));
        arr_43 [i_11] |= (arr_41 [i_11]);
        var_34 = (((--12) * ((((18446744073709551615 ? (arr_40 [i_11]) : 1)) * -38706))));
    }
    var_35 = (max(var_35, (~38700)));
    var_36 = ((((3849846171 * (!2097151))) < (192 * -32)));
    var_37 ^= var_9;
    #pragma endscop
}
