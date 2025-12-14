/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_18 = (var_16 + var_7);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_0;
                    var_20 &= (arr_0 [i_0]);
                }
            }
        }

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_21 = ((((((((var_8 ? var_12 : (arr_1 [i_0])))) ? 17592181850112 : var_17))) ? (arr_4 [i_0 - 2] [i_3 + 1]) : (arr_3 [i_3] [i_3] [i_0])));
            var_22 = var_9;
            var_23 = (min(var_23, ((((((((((arr_7 [i_0] [i_3]) ? (arr_0 [i_0 - 2]) : var_10))) ^ (17592181850112 & 11054)))) ? (((arr_6 [i_0 - 1] [i_0] [i_3 - 1]) ? (arr_7 [i_0] [i_3 + 1]) : (var_14 ^ var_15))) : (((var_9 ^ var_15) | (arr_6 [i_0] [i_0] [i_0]))))))));
        }

        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_24 = (min(var_24, (((((((var_9 == (arr_5 [i_0] [i_0] [i_0] [i_0]))) || var_12)) ? (((arr_6 [i_0] [i_0] [i_4]) ^ (((arr_9 [i_4 + 1]) ? (arr_2 [i_4 + 2]) : var_10)))) : var_12)))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_25 = var_4;

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_7] = (arr_5 [i_0] [i_4 + 2] [i_5 - 1] [i_6]);
                            var_26 = (((((arr_16 [i_0 - 2] [i_4 + 1]) < ((((var_6 == (arr_2 [i_0 - 1]))))))) ? (arr_8 [i_5] [i_5] [i_7]) : (((((((var_8 == (arr_2 [i_0 - 2]))))) <= (((arr_10 [i_0 + 2] [i_4 + 1] [i_5 + 1]) * (arr_5 [3] [i_6] [i_4] [i_0]))))))));
                        }
                        var_27 = var_0;
                    }
                }
            }
            var_28 = var_8;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_29 = ((((arr_9 [i_0 - 1]) ? ((var_11 * (arr_5 [16] [16] [i_0 + 2] [i_0 - 2]))) : (arr_11 [i_8] [i_8] [i_8]))));
            var_30 += (((arr_8 [i_0 + 1] [i_8] [i_0 + 1]) * (((((var_0 / (arr_6 [i_0] [i_0] [i_8])))) ? ((var_1 * (arr_12 [i_0] [i_8] [i_8]))) : (var_4 * var_8)))));
        }
        arr_25 [i_0] [i_0] = (arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_28 [i_9] = ((((arr_9 [i_9]) - (arr_9 [i_9]))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    var_31 = (min(var_31, ((((((var_15 <= (arr_17 [i_11] [8] [i_9])))) / ((var_6 >> (((arr_10 [i_11] [i_10] [i_9]) - 5458620333963777000)))))))));
                    arr_35 [i_9] = var_5;

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        var_32 -= (arr_13 [i_12] [i_9] [i_11] [12]);
                        arr_40 [i_9] = (arr_34 [i_11] [i_11] [i_9] [i_12]);
                    }
                }
            }
        }
    }
    var_33 = var_4;
    var_34 = (((((var_1 ? ((var_8 ? var_12 : var_6)) : var_5))) ? var_12 : var_15));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 8;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {
                    var_35 = arr_48 [i_14 - 1] [i_14 + 2] [i_13];
                    arr_49 [i_13] [i_13] [i_13] = (((((((((arr_6 [i_14] [i_13] [i_15]) ? var_1 : (arr_13 [i_13] [i_14] [i_15] [i_15])))) ? (arr_13 [i_13] [i_13] [i_14 + 1] [i_13]) : var_0))) || var_5));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 7;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_36 |= (arr_9 [i_13]);
                                var_37 = (((0 % 32002) ? (arr_10 [i_14 + 1] [i_16 + 1] [i_17 - 2]) : ((((((arr_50 [i_13] [3] [i_15] [7]) | var_12))) ? (arr_46 [i_16 + 3] [i_13] [4]) : (arr_48 [i_17 - 3] [i_14 - 1] [i_14 - 1])))));
                                var_38 = ((0 < ((18446726481527701504 ? var_13 : 16206919473841361171))));
                                var_39 = (arr_18 [i_13] [16] [6] [i_13] [i_14 + 2]);
                                var_40 = (((arr_41 [i_14 + 2] [i_16 + 1]) - (((arr_41 [i_14 + 2] [i_16 + 1]) ? (arr_41 [i_14 - 1] [i_16 + 2]) : (arr_41 [i_14 - 1] [i_16 + 2])))));
                            }
                        }
                    }
                    arr_55 [i_13] [i_14 - 1] [i_13] [i_14 - 1] = (((arr_15 [18] [i_13] [i_14 + 2] [i_13]) ? (((1 ^ -9045694934705019608) | (arr_53 [i_14] [i_14] [i_15] [i_14 + 1] [i_14 + 2]))) : var_4));
                }
            }
        }
    }
    #pragma endscop
}
