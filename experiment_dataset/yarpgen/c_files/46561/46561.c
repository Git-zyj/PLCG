/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 77;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_13 = ((((((arr_3 [i_1 + 2] [i_0]) ? (arr_0 [i_1 + 2] [i_1 + 1]) : 45316))) ? (max((max(var_2, 1826302366)), 1357952373)) : (!-128)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = -124;
                        var_14 = 1;

                        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            var_15 *= ((((~var_0) ? ((96 ? var_4 : var_11)) : -var_10)));
                            var_16 *= ((+((var_2 ? (arr_5 [i_2] [i_1 + 2]) : (arr_5 [i_2] [i_1 + 1])))));
                            var_17 &= ((((!(((1 ? 2468664932 : 161))))) ? var_3 : (max(((1 ? 14 : var_5)), (var_8 | 94)))));
                            var_18 = ((!((min((21 - 354157477), (arr_7 [i_1 + 2] [i_1 - 1] [i_4 - 1]))))));
                            arr_14 [i_0] [i_0] [7] [0] [i_3] [i_0] = 20911;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_19 = (!((((arr_8 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : 11746061))));
                            var_20 = (max(var_20, 8));
                            var_21 = (((arr_1 [i_1 + 2]) ? (arr_13 [1] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2]) : var_11));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_22 = (max(((min(var_6, (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))), (arr_8 [i_0])));
                            var_23 ^= ((!(((4294967291 ? (max(-5136921446217562080, -124)) : -1454403548)))));
                        }
                    }
                }
            }
            arr_21 [i_0] [i_0] [i_1 + 2] = (min(((-((5663991190500271203 >> (arr_12 [i_0] [i_0] [i_0] [9] [i_0]))))), (((-92 ? (max(var_1, 14)) : (var_7 || var_7))))));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            var_24 = -9223372036854775780;

            for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_25 = (min(var_25, (((4219 ? (arr_12 [i_0] [i_7 + 4] [i_7] [i_7 + 4] [10]) : 24)))));
                var_26 -= (((-2133541895 / var_10) ? var_5 : var_7));
            }
            for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_27 = (((arr_2 [i_0]) * 6));
                var_28 = (!var_5);
                var_29 -= (arr_5 [1] [i_7 + 1]);
            }
            for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
            {
                arr_31 [4] [i_10] &= -91;
                var_30 = ((arr_0 [i_7 + 3] [i_10 - 1]) ? 43 : (0 < 2));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {

                for (int i_12 = 1; i_12 < 8;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_41 [i_0] [i_11] [i_11] [4] [i_0] = (((arr_24 [i_11] [i_11] [i_11] [i_12 + 4]) ? (1684598868715209519 * 4) : (((var_11 ? (arr_5 [i_0] [i_0]) : 1)))));
                        arr_42 [i_0] [i_0] = ((arr_19 [i_0] [i_7 - 1] [i_7] [i_7 + 1] [i_12 + 3] [i_0]) ? (arr_1 [i_12 - 1]) : (arr_27 [i_12 + 1] [i_12 + 1]));
                    }
                    var_31 |= (((var_8 ? var_1 : var_5)));
                    arr_43 [i_0] = var_0;
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_32 *= (((arr_5 [i_14] [i_14]) / (arr_34 [i_14])));
                    arr_46 [i_0] [i_11] [7] [i_0] = (((((var_8 ? 7 : var_9))) ? (!var_9) : ((var_7 ? (arr_8 [i_0]) : -2))));
                }
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    arr_51 [i_0] [4] [i_11] [i_15 + 3] [i_15] [i_15 + 1] |= (arr_22 [i_0] [i_0] [i_11]);
                    var_33 = (min(var_33, 1200235649006525769));
                }
                arr_52 [i_0] = -var_3;
                arr_53 [i_0] [i_7 + 2] [i_11] [i_0] = (((arr_44 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 2]) ? var_2 : (arr_26 [i_11])));
                arr_54 [i_11] [i_0] [i_0] = (((arr_3 [i_7 + 1] [i_0]) ? (arr_25 [i_7 + 4] [i_7] [i_7 + 1] [i_7 + 4]) : 14157));
            }
        }
        var_34 *= (((((((arr_32 [i_0]) >> 6)))) >> (((((((var_9 ? 45817 : var_6))) ? 13393 : var_3)) - 13384))));
    }
    #pragma endscop
}
