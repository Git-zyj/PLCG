/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, var_6));
        var_17 = (((((max(1805243018246888654, (arr_0 [i_0])))) ^ (((arr_1 [i_0]) % 43)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_18 = (((790293152 || 790293152) == (arr_2 [i_1] [i_1] [i_1])));
            var_19 = var_2;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (arr_9 [i_0] [i_1] [i_2] [i_3]);
                        var_21 -= var_14;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_22 = ((((arr_12 [i_0]) ^ 182)));
            var_23 *= (arr_13 [i_0]);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_24 -= (arr_14 [i_0]);
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_25 ^= (max((arr_21 [i_6] [i_6 + 3] [i_6 + 4] [i_6 - 1]), var_15));
                            arr_27 [i_0] [9] [i_6] [i_7] [i_6] |= (1472 | -22);
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_26 = (min(var_26, var_3));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_37 [i_0] [i_0] [i_10] [i_0] [i_0] = (arr_35 [i_0] [i_0] [i_10] [2] [1] [i_0]);
                            var_27 = (var_11 | -1805243018246888655);
                        }
                    }
                }
                var_28 ^= var_2;
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_29 = arr_18 [i_0] [i_0] [i_5] [i_12];

                /* vectorizable */
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    var_30 = ((-7557525184851304487 < (arr_24 [i_12] [i_0] [i_5] [i_0] [i_12] [i_12])));
                    var_31 += (arr_40 [i_0]);
                }
                arr_43 [1] [i_5] [1] [i_5] = (((max((((~(arr_42 [i_12] [i_5] [i_0])))), (min(37, -1805243018246888655)))) & 184));
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                arr_46 [i_0] [i_14] = (((~(arr_8 [i_14] [i_5] [i_5] [i_0]))));
                arr_47 [i_0] [i_0] [i_0] = 7;
                var_32 = (((var_2 && (arr_28 [i_0] [4]))));
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_33 -= -22;

                /* vectorizable */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    var_34 = (max(var_34, ((((arr_35 [i_5] [i_5] [i_0] [i_5] [i_15] [i_15]) | var_13)))));
                    arr_53 [i_15] [i_5] [i_15] [i_16] = (arr_10 [i_0] [5] [i_15] [i_16]);
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    arr_58 [i_0] [i_0] [i_15] [i_15] = 9223372036854775807;
                    var_35 = (((arr_51 [i_0] [i_15] [i_17]) > (arr_8 [i_0] [i_0] [6] [i_0])));
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    arr_61 [i_0] [i_5] [i_18] [i_15] = (arr_49 [i_18] [16] [5]);
                    var_36 = min(23, -8249);
                }

                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    var_37 = (min((arr_57 [i_5] [i_5] [i_15]), -9223372036854775802));
                    var_38 = (min(var_38, (arr_31 [i_19] [i_15] [i_5])));

                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
                    {
                        var_39 = (((198 && (arr_35 [i_20] [i_20] [i_15] [i_15] [i_5] [i_0]))));
                        var_40 = (arr_51 [i_0] [12] [i_15]);
                        var_41 = var_0;
                        arr_69 [i_0] [i_0] [i_15] [i_0] [i_15] &= 26894;
                    }
                    for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
                    {
                        arr_74 [i_15] [i_5] [i_15] [i_19] = (arr_72 [i_0]);
                        arr_75 [14] [i_5] [i_15] [i_15] [i_19] [i_19 + 1] [i_21] = (arr_5 [i_19 + 1] [i_19 + 1] [i_15]);
                        var_42 = (arr_35 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0]);
                    }

                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        arr_78 [i_15] [i_15] = (((-(((var_2 && (arr_2 [i_15] [5] [i_22])))))));
                        arr_79 [i_15] [1] [10] [i_15] [i_22] = (!var_15);
                    }
                    var_43 = (((41066 >= (arr_59 [i_19 + 1] [i_19] [i_19] [i_19 + 1]))));
                }
                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    var_44 = ((!(arr_22 [i_0] [6] [i_15] [5] [i_23] [i_23 + 4])));
                    arr_84 [i_15] [i_15] [i_23] = ((var_7 == (((93 != (arr_1 [i_23 - 1]))))));
                }
                for (int i_24 = 0; i_24 < 19;i_24 += 1)
                {
                    var_45 = (arr_3 [i_0] [i_5] [i_15]);
                    arr_87 [i_0] [i_15] = 2047;
                }
                var_46 = (arr_26 [i_0] [i_0] [i_0] [i_5] [i_15] [i_15] [i_15]);
            }
            var_47 -= ((-3297165865 * ((~((1805243018246888669 ? 31 : (-9223372036854775807 - 1)))))));
        }
        var_48 &= (min(((1805243018246888639 ? 32454 : -118)), (137438953471 && 32755)));
        var_49 = arr_38 [i_0] [0] [i_0];
    }
    var_50 = 241;
    var_51 = ((((((var_7 ? var_13 : var_8)))) >> (var_15 + 21803)));
    #pragma endscop
}
