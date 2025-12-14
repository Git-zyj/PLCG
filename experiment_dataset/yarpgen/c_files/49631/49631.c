/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min((((((min(-1591557488, var_13))) ? ((min(var_11, var_10))) : 0))), var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_18 = (((arr_2 [i_0 + 2] [i_1] [i_2]) + ((-(arr_6 [i_0 + 3] [2] [i_0 + 3])))));
                            arr_14 [i_2 + 1] [i_3 + 3] [i_4 + 2] |= 1;
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0 + 2] [i_3] = ((3 ? var_11 : (arr_2 [i_0] [i_1 + 2] [3])));
                        }
                        arr_16 [i_3] [i_1 + 1] [i_3] [i_1 + 1] [i_1 - 1] = var_12;
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_19 = arr_17 [i_0 + 2] [i_1] [i_2 + 1] [i_5 + 1] [i_5] [i_5];
                        var_20 += (!1);
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        var_21 = var_9;
                        arr_21 [i_0 + 2] [i_1] [11] [i_6] = var_10;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [11] [11] = (!(arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 + 1]));
                                arr_30 [i_1] [i_7] [i_8] = 358606515;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    arr_37 [10] [i_9 - 1] [i_9] = 6;
                    var_22 = (max(var_22, 3936360806));
                }
            }
        }
        var_23 *= (!var_6);
    }
    for (int i_11 = 1; i_11 < 23;i_11 += 1)
    {
        var_24 = (arr_39 [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                {
                    var_25 += ((((((83 ? 578735551 : (arr_44 [i_11 + 1] [i_12])))) ? ((((arr_39 [i_11]) ? 578735537 : (arr_43 [i_11] [i_11])))) : (arr_40 [i_11] [6]))));
                    var_26 = (arr_45 [i_13] [i_13] [i_13]);
                    arr_46 [i_11 - 1] [0] [i_12 - 2] [i_13] = (max((min((arr_43 [i_13] [i_12]), 101)), (arr_43 [i_12] [i_12])));
                    var_27 = (((max(((~(arr_44 [i_13] [i_11]))), 1213427851)) == ((((((65184 ? (arr_43 [i_13 + 1] [i_11]) : (arr_42 [i_13 - 2] [i_11])))) ? -1032230866 : 358606533)))));
                    var_28 -= (!1);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 18;i_16 += 1)
            {
                {
                    var_29 -= (min((max((((3502417357 ? (arr_50 [i_15 - 2]) : 1032230866))), (((arr_47 [i_14 + 3] [i_14 + 3]) ? (arr_53 [i_14 + 3] [i_15 - 3] [i_15] [i_16 - 2]) : -7049050645733779715)))), ((max(136, -7049050645733779715)))));
                    var_30 += ((+(((((arr_53 [i_14] [i_14] [i_16] [i_15]) ? 1 : var_12))))));
                    var_31 += (~1);
                }
            }
        }
    }
    var_32 = (65528 ? var_12 : var_6);
    #pragma endscop
}
