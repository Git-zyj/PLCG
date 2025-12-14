/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 127;
    var_19 = (min(var_19, (((3877383464875546518 == (((var_15 ? (max(2657715939, 1637251345)) : 1637251356))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = -108;
                    var_21 = (14 ? ((~(min(147089897, (-9223372036854775807 - 1))))) : (max((max((arr_4 [i_0 + 1] [i_0]), 2657715940)), (((2472562674505164650 ? 47 : -26))))));
                    var_22 = (min(((var_6 ? (-9223372036854775807 - 1) : (min(5666573000403369291, 2657715940)))), (((((max(4241651550, var_0))) ? ((((arr_7 [i_0] [i_2] [i_2] [i_2]) | (arr_9 [i_0] [i_0] [i_0])))) : 147089897)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                {
                    var_23 *= (0 % 9471717691819029956);
                    var_24 = (arr_7 [i_0] [i_3] [i_3] [i_0]);
                    var_25 |= (((((3019049499610351489 ? 4294967283 : (arr_12 [i_0] [i_3] [i_4] [i_4 - 2])))) ? (((!(((18003682838015404558 ? 16663 : 928695588)))))) : (arr_9 [i_0 - 1] [i_0 + 1] [i_4 + 2])));
                }
            }
        }

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_26 = (6112 * var_1);
                            var_27 = ((((2147483647 < (arr_11 [i_5] [i_6] [i_0])))));
                        }
                    }
                }
            }
            var_28 = 199;
            var_29 = ((~((var_3 ? (((127 & (arr_15 [i_5 + 1])))) : (min(-9223372036854775785, var_10))))));
            var_30 = (min(var_30, 1293));
        }
        var_31 = (max(var_31, ((((((+(((arr_11 [i_0] [i_0] [8]) >> (arr_9 [i_0] [7] [i_0])))))) ? -16663 : var_11)))));
        var_32 = arr_0 [i_0 + 1];
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {

        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            var_33 = 16384;
            var_34 *= (((arr_27 [i_9] [i_10]) ? ((~(arr_26 [i_9] [i_9]))) : 4294967295));
            var_35 = (!-2147483647);
            var_36 &= 326820700;
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    {
                        var_37 &= 3019049499610351489;
                        var_38 *= 0;
                    }
                }
            }
            var_39 -= (var_6 ? 1637251355 : (arr_26 [i_9] [i_11 + 2]));
        }
        var_40 = (max(var_40, (((~(arr_36 [i_9] [i_9] [i_9] [i_9]))))));
        var_41 |= var_1;
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 15;i_16 += 1)
                {
                    {

                        for (int i_17 = 1; i_17 < 14;i_17 += 1)
                        {
                            var_42 ^= ((!((((arr_29 [i_16 + 1] [i_16] [i_15]) / 35)))));
                            var_43 = ((arr_40 [i_14] [i_15 - 2] [i_16 - 1] [i_17 - 1]) ? -3641023633665481669 : -6274327069309472543);
                        }
                        var_44 = (!var_8);
                        var_45 = 58210;
                    }
                }
            }
        }
    }
    var_46 = ((+(((var_5 > 0) * var_2))));
    #pragma endscop
}
