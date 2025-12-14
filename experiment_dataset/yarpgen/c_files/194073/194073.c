/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = (var_4 || ((((arr_0 [0]) ? (arr_4 [20]) : 9223372036854775807))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = 1124743793;
                        var_21 = (((((((arr_0 [i_0]) < (arr_8 [i_2] [i_2] [i_2] [i_2]))))) & var_4));
                    }
                }
            }

            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                var_22 = ((((18759 ? (arr_4 [i_0]) : var_5)) << (((arr_6 [i_0] [i_4]) - 45720))));
                arr_14 [i_4] [i_4] [i_4] [i_4] = ((((4294967295 > (arr_0 [i_0])))));
                arr_15 [i_0] [i_4] [i_0] = var_16;
                arr_16 [6] [i_4] [i_4 - 1] = arr_10 [i_0] [i_0] [i_4];
            }
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                arr_19 [0] [i_5 - 1] [i_5] = (arr_8 [i_0] [i_1] [i_5 - 4] [i_5]);
                var_23 = (arr_6 [i_0] [i_5 - 3]);
                var_24 = ((var_17 ? 1320557406 : var_6));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_25 = (arr_17 [i_0]);
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_30 [i_1] [i_1] [i_6] [5] = (((((2974409890 ? -30 : 24576))) ? (-32767 - 1) : 0));
                            arr_31 [i_0] [i_1] [i_7] [i_7] = (arr_29 [21] [i_0] [i_6] [i_6] [i_1] [i_1] [i_0]);
                            var_26 = (2974409913 > 1124743793);
                            var_27 = (arr_0 [i_8]);
                        }
                    }
                }
                var_28 ^= 2974409889;
                var_29 *= ((3852373415807025196 ? 32744 : 1920));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_30 = (((arr_10 [i_10] [i_1] [i_9]) * (arr_25 [i_0] [1] [0] [i_9])));
                            arr_37 [i_9] [i_1] [i_6] [0] [i_10] = (((arr_20 [i_0] [i_1] [i_6] [i_1]) || (arr_9 [i_1] [i_1] [i_1] [i_1])));
                            arr_38 [i_9] [i_10] = arr_18 [i_6] [i_9];
                            var_31 = (max(var_31, ((((!var_6) ? -1 : (arr_7 [i_9] [i_1]))))));
                            var_32 = (arr_29 [i_0] [i_0] [i_0] [i_9] [1] [i_10] [1]);
                        }
                    }
                }
            }
            var_33 *= (var_12 && (arr_1 [i_0]));
        }
        for (int i_11 = 4; i_11 < 21;i_11 += 1)
        {
            var_34 -= -32752;
            arr_42 [i_0] = (((!-32762) ? (((82 >> (((arr_7 [i_0] [i_0]) + 5141066999567362844))))) : (arr_23 [i_0])));
            arr_43 [i_11] = 0;
            var_35 = ((-(((arr_41 [2] [i_11]) ? (arr_33 [0] [i_11 + 2] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_11 - 1] [2])))));
        }
        for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
        {
            arr_46 [0] [i_12 + 1] [i_12] = -1340382169;
            var_36 = ((((var_5 ? (arr_1 [22]) : var_13)) >> (((-32767 - 1) + 32780))));
        }
        for (int i_13 = 3; i_13 < 20;i_13 += 1) /* same iter space */
        {
            arr_49 [i_0] [i_0] = 254;
            var_37 = ((var_1 & (arr_48 [i_13 + 4] [i_13] [i_13 - 2])));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_38 -= -1124743784;
                            var_39 -= 1124743784;
                            arr_59 [i_0] [i_13] [i_13] [i_0] [i_13] &= (~572274426319546378);
                            var_40 = (((arr_54 [i_13 - 3]) ? (arr_40 [i_15] [i_0] [i_0]) : 32512));
                        }
                    }
                }
            }
        }
        arr_60 [i_0] = (399677709079705809 ^ 15720561258719299200);
    }
    var_41 = var_7;
    #pragma endscop
}
