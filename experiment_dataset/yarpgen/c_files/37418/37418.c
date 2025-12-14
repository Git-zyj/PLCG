/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((830414129 > var_10) + var_1))) ? (((~65535) ? var_11 : var_5)) : var_2));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((~(min(var_5, var_7)))))));
        arr_3 [0] = (((arr_0 [i_0] [i_0]) * ((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = (max(var_7, ((((arr_0 [i_0] [i_0]) >= (~-105))))));
        arr_5 [i_0] = (((4294967295 ^ var_8) | var_4));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((-1333554828274408173 && (((((var_1 ? var_1 : -20405)) ^ (((var_11 != (arr_8 [i_0])))))))));
                    arr_11 [i_2] [i_1] [i_1] [12] = ((-576460752303423487 * (!122)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_17 [i_3] = (min(((var_1 << (((arr_15 [i_3] [i_3] [i_4]) - 19439)))), (max(var_11, ((var_2 ? var_9 : (arr_7 [i_3] [i_4])))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_15 = (((((var_9 % (arr_13 [i_7] [i_3])))) && ((((((arr_13 [i_3] [i_3]) + 2147483647)) >> (((arr_13 [i_3] [i_4]) + 320006082)))))));
                            arr_26 [i_3] [i_3] [i_5] [i_6] [i_6] [i_6] [i_7] = ((((min(-576460752303423488, -9166218821289902761))) ? ((min(var_9, (var_9 | 23425)))) : (arr_25 [i_3] [i_4] [i_5] [0] [i_3])));
                            var_16 &= ((((~((var_1 ? var_1 : 17287142065551947073)))) * ((min(var_8, (min(var_0, 4689892510204093750)))))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            var_17 = (min(var_17, (arr_14 [i_8])));

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_31 [i_3] [i_8] [i_3] = 18446744073709551615;

                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {

                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        var_18 += (((((6 ? 0 : (arr_7 [i_10 - 2] [i_11 - 3])))) | (max(((min(var_9, -114))), var_11))));
                        arr_37 [i_3] [i_10] = (((((7119085699545664374 ? (~var_13) : var_3))) <= var_12));
                        arr_38 [i_3] [i_8 - 1] [i_3] [i_9] [i_10] [4] = ((~((-(arr_30 [i_8 - 1] [i_10 - 1])))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_19 = 9166218821289902778;
                        var_20 += (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    var_21 = (max(var_21, ((((~var_13) ? ((((var_10 != (arr_35 [12] [i_3] [i_8 + 1] [i_8] [i_9] [i_10 - 2]))))) : (~var_6))))));
                    arr_41 [i_3] [i_3] [i_8] [5] [i_10] [i_3] = ((((!((((arr_35 [i_3] [i_3] [i_8] [14] [i_10] [i_10]) ? 4 : var_8))))) ? var_10 : (((!(arr_7 [i_8 + 1] [i_10 + 3]))))));
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_22 = (min(var_22, var_8));
                    var_23 = (min(var_23, (((min(((((arr_43 [i_13] [i_9] [i_13] [i_13]) >= -25154))), (arr_30 [i_9] [i_9])))))));
                    var_24 = (min(var_24, (((((((arr_0 [6] [i_8 + 1]) * (var_2 && var_7)))) + 1920691392)))));
                    arr_44 [i_13] [i_13] [i_3] [i_3] [i_8 + 1] [i_3] = 0;
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_25 = (5766673041453867577 != var_3);
                var_26 = (min(var_26, ((((var_8 ? (arr_35 [i_3] [i_8] [i_8] [i_14] [i_14] [i_14]) : var_10)) / (arr_47 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])))));
                arr_48 [i_3] [i_3] [i_3] = 9223372036854775807;
            }
        }
        var_27 = (~16535435022578998868);
    }
    #pragma endscop
}
