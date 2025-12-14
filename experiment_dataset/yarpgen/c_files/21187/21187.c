/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, ((((~var_8) | (arr_0 [18]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = (min(var_14, (arr_0 [6])));
            var_15 = (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_5 [i_0])));
            var_16 = (((arr_5 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0])));

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (((((124762221 ? -2140100247 : (arr_1 [i_0])))) ? (((arr_8 [i_1] [i_1] [i_3] [i_1]) ? var_10 : (arr_17 [i_0] [i_0] [i_2] [i_0] [i_4]))) : var_3));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4])));
                            var_17 = (arr_9 [i_0] [i_2 + 1] [i_2 + 1] [i_4]);
                        }
                    }
                }
                var_18 &= (~-2140100266);
                var_19 = (arr_1 [i_0]);
                var_20 = (max(var_20, (((12 ? -2140100266 : ((231 ? 398409157 : 981927363)))))));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_21 = (min(var_21, ((((((~(arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (arr_14 [i_0] [i_5] [i_5] [i_1] [i_1]) : (arr_7 [i_0] [i_1] [i_5]))))));
                var_22 = (max(var_22, (arr_7 [i_0] [i_1] [i_5])));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_23 = (arr_16 [i_0] [i_0]);
                var_24 += (((arr_16 [i_0] [10]) ? var_7 : (arr_16 [0] [0])));

                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    var_25 += (((var_8 == var_6) ? -547562692 : var_2));
                    var_26 &= (arr_0 [0]);
                }
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_27 = ((~(arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                            var_28 = (!var_4);
                            arr_40 [i_0] = ((((var_2 ? (arr_36 [i_0] [i_8] [i_0] [i_0]) : (arr_29 [i_0])))) ? (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_29 = (((arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10 + 1]) ? (arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10 + 3]) : (arr_30 [i_10 - 4] [i_10])));
                        }
                    }
                }
                var_30 = ((+(((arr_37 [i_8] [i_8] [i_0] [i_8] [i_8]) ? (arr_8 [i_0] [i_8] [i_0] [i_0]) : (arr_32 [i_9] [i_8] [i_8] [i_0])))));
                var_31 = (((((((arr_8 [i_0] [i_8] [i_8] [i_9]) ? -48 : (arr_12 [i_0]))) + 2147483647)) >> (((arr_23 [i_9 - 1] [i_9 - 1] [i_9]) - 7635429957576803359))));
            }
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_32 = (min(var_32, (((231 ? (arr_12 [i_12]) : var_8)))));
                            var_33 = ((arr_39 [i_13 + 1] [i_0] [i_13] [i_13 - 1] [i_13 - 1] [i_13] [i_13]) ? (arr_14 [i_0] [i_0] [i_0] [i_12] [i_12]) : (var_1 & var_2));
                            var_34 += -var_8;
                        }
                    }
                }
                var_35 -= arr_4 [i_12];
                var_36 = (~1);
            }
            for (int i_15 = 1; i_15 < 23;i_15 += 1)
            {
                var_37 = (((arr_25 [i_15 + 1] [i_0]) ? (arr_25 [i_15 - 1] [i_0]) : (arr_25 [i_15 - 1] [i_0])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_38 = (((arr_13 [i_0] [i_8] [i_15] [i_16] [i_8]) <= (arr_44 [i_8] [i_0])));
                            var_39 = (!2140100246);
                            var_40 = (arr_43 [i_17]);
                        }
                    }
                }
                var_41 = (min(var_41, ((((arr_45 [i_15 - 1] [i_15] [i_15 - 1] [i_15]) ? (~var_2) : ((var_6 ? (arr_41 [i_0] [12]) : var_0)))))));
            }
            var_42 = (arr_0 [i_0]);
            var_43 *= var_0;
        }
        for (int i_18 = 2; i_18 < 21;i_18 += 1)
        {
            var_44 = (((~-547562692) << ((((((231 ? -862371716 : 127)) + 862371719)) - 2))));
            arr_56 [i_0] [i_0] [i_0] = ((arr_22 [i_18 + 3] [i_0] [i_0] [i_0]) ? (arr_51 [i_0] [i_0] [i_0] [i_0]) : (arr_22 [i_0] [i_0] [i_0] [i_18]));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    {
                        var_45 = ((-398409157 ? (arr_47 [i_0]) : ((((arr_60 [i_0] [i_0] [i_0] [i_0]) || 5402974308076260038)))));

                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            var_46 = (((((((arr_55 [i_0] [i_0]) > (arr_35 [i_0] [i_18] [i_19] [i_0] [i_21]))))) + (arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_66 [i_0] = (~(~var_3));
                            var_47 += ((arr_16 [4] [4]) ? (arr_16 [4] [4]) : (arr_16 [8] [8]));
                        }
                    }
                }
            }
            arr_67 [i_0] [i_0] = (~var_8);
        }
        var_48 += var_4;
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            {
                var_49 = var_4;
                var_50 = (((arr_44 [i_22] [i_22]) ? (min(1, (((-7691 ? 7691 : -336292578))))) : (((~(((-127 - 1) * 184)))))));
                var_51 ^= var_5;
            }
        }
    }
    var_52 = (~var_7);
    #pragma endscop
}
