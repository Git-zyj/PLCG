/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 279645371;
    var_18 |= (7682348905490605930 < var_10);
    var_19 = var_9;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 += ((0 ? (((var_13 + var_10) ? (!var_8) : 1661487708624767364)) : (arr_2 [i_0])));
                                var_21 = (min(var_21, (((((~(arr_6 [i_4 - 3] [i_0] [i_2]))) & 37829)))));
                                var_22 |= (max(var_10, (arr_14 [i_0 - 2] [i_1] [i_2] [i_3] [16] [12])));
                            }
                        }
                    }
                }
            }
        }
        var_23 = -7682348905490605930;

        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            var_24 = (min(((((max(var_10, 279645357))) ? (((4294967288 || (arr_4 [i_0] [i_0])))) : ((min((arr_8 [i_5] [i_0] [i_0]), (-32767 - 1)))))), -279645372));
            arr_17 [i_0] [i_0] [i_5] = ((((max((arr_0 [i_0 + 1] [i_5 - 1]), 0))) ? ((-(arr_11 [i_0] [i_0] [i_0] [i_0 + 2] [i_5 + 3] [i_5 + 1]))) : ((~(arr_1 [i_0 - 3])))));
            var_25 = (arr_3 [i_5]);
            var_26 = ((56522 ? -18 : 32742));
        }
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            var_27 = (min(var_27, (arr_3 [i_0])));
            var_28 = ((-((~(arr_15 [i_0 + 2])))));
        }
        var_29 = ((~((-(arr_13 [9] [9] [i_0 - 4] [i_0] [i_0 + 3])))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_22 [i_7] = ((((min(56332, 7207067094871949560))) ? ((var_15 ? -26 : (arr_19 [i_7]))) : (arr_19 [i_7])));
        arr_23 [i_7] = (arr_0 [i_7] [i_7]);
        arr_24 [i_7] = (((~-1808546798) ? 279645371 : (((((var_3 ? var_8 : 18)) > ((((0 == (arr_2 [i_7]))))))))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_30 = ((-32743 ? 1 : (arr_27 [i_8] [9])));
        arr_29 [i_8] [i_8] = (((-1 ? (arr_26 [i_8]) : -32720)));

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_31 = (max(var_31, ((((arr_27 [i_8] [i_9]) ? (arr_28 [i_8]) : (-9223372036854775807 - 1))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_32 ^= ((((!(!7682348905490605930))) ? var_6 : -1));
                            var_33 = 7;
                            var_34 = (arr_30 [i_8] [i_8] [i_12]);
                        }
                    }
                }
            }
            var_35 = (((((arr_30 [i_8] [i_8] [i_9]) ? (!var_7) : 65512))) ? (((min(-43738675455248809, 1367398314528456931)) & (!var_3))) : (((((542 ? 0 : var_0))))));
        }
    }
    #pragma endscop
}
