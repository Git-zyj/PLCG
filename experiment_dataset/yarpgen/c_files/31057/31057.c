/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((min((((var_9 ? var_9 : var_1))), (2348762717 ^ 27128))), var_3);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = ((((min(1946204578, 2348762717))) ? (((!((max(var_5, -1909)))))) : var_1));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = 4294967276;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] = (((((arr_2 [i_0]) || 29331)) ? var_6 : ((26532 ? var_6 : (arr_0 [i_0 + 2])))));
                        var_13 ^= (min(var_3, (((-27129 * 58653) ? var_3 : (arr_0 [i_0 - 1])))));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_14 = (~0);
                            arr_14 [i_0] [i_0] [i_1 - 4] [i_0] [i_3] [i_0] = var_1;
                            var_15 = ((((var_2 ? 13198 : ((var_9 ? (arr_7 [i_2] [i_3] [i_4]) : (arr_5 [i_0])))))) ? ((~(arr_9 [i_1 - 2]))) : ((((arr_2 [i_0]) && ((max((arr_5 [1]), var_0)))))));
                        }
                        arr_15 [i_0 + 2] [i_0 + 2] [i_1] [i_0] &= (((~33045) ? (((((max((arr_10 [i_0] [i_1] [i_2] [i_3]), var_4))) ? ((var_2 ? -21438 : (arr_8 [i_0]))) : var_7))) : (min((arr_0 [i_0]), (arr_6 [5] [i_1] [i_0])))));
                    }
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (arr_13 [i_0] [i_1]);
                        var_16 = ((~(arr_7 [i_2] [i_1] [i_0 - 1])));
                        arr_20 [i_0] = (!2348762725);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_17 = ((max(4275199696, var_9)));
                                arr_28 [i_0] [i_1] [i_1] [i_1] [i_1 - 2] = ((19767593 ? (max((max((arr_23 [i_0] [i_1 - 1] [i_0] [i_7]), -457616474)), (arr_1 [i_0 + 2]))) : (max((arr_27 [i_0] [i_0] [i_2] [i_6] [i_7]), ((min(var_5, var_4)))))));
                                var_18 = 20;
                            }
                        }
                    }
                    arr_29 [i_0] [i_0] [i_0] = (arr_24 [i_0 - 1] [i_1] [i_1] [i_1 - 3] [i_1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 11;i_9 += 1)
            {
                {
                    arr_34 [i_0] = ((((arr_24 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_8]) : ((1058557483 ? 89 : var_1)))) / 11);
                    var_19 = ((((max((~18271), (((((arr_8 [i_9]) + 2147483647)) >> (var_1 - 45429)))))) ? ((~(arr_27 [i_8] [i_0] [i_9 + 1] [i_9] [i_9]))) : (~var_6)));
                    var_20 += (((!(arr_21 [i_0] [i_0] [i_0] [i_0 + 2] [i_9]))));
                    var_21 |= (min((arr_17 [i_0] [i_0] [i_9] [i_8] [2] [i_9]), var_1));
                }
            }
        }
    }
    #pragma endscop
}
