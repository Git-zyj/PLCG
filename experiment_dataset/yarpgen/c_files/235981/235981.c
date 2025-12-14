/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (((((var_3 ? 1 : var_4))) ? 18 : 0));
        arr_3 [i_0] = (var_7 | var_9);
        var_15 = (max(var_15, (((((0 ? var_10 : var_6)) | var_10)))));
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = 70;
        var_16 = ((1 ? ((var_10 ? var_4 : var_1)) : (((((-37 ? var_7 : 78))) ? (!var_5) : var_1))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_17 = (min(var_17, (((var_8 - ((-80 ? var_4 : 4294967278)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_4] [i_4] [21] [i_6] = var_3;
                            var_18 = 20;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_19 = ((var_9 ? var_8 : var_10));
                            var_20 -= 1356799516;
                            var_21 = var_3;
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                var_22 = (min(var_22, var_3));
                var_23 ^= var_4;
            }
            arr_29 [i_2] = var_8;

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_24 &= var_6;
                var_25 ^= -2138620484;
            }
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {

            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                var_26 &= ((var_10 ^ (max(2026605574, 0))));
                var_27 ^= ((((((((var_5 ? var_2 : 0))) ? var_13 : -356458671))) ? (var_11 * -var_8) : var_11));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_28 = (~var_3);
                            var_29 = (max(var_29, var_3));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_30 = (((9223372036854775796 ? 11486356402920318832 : var_8)));
                arr_46 [i_2] [i_2] [i_15] = (~0);
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    {
                        var_31 = (min(var_31, ((((var_11 != var_7) ? ((-307881903 ? ((17531 ? 79 : 236)) : var_6)) : 15180)))));

                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_32 = (max(var_32, var_13));
                            arr_56 [i_2] = 105;
                        }
                        for (int i_19 = 1; i_19 < 21;i_19 += 1)
                        {
                            var_33 = (max(var_33, -var_2));
                            var_34 = ((-((-((var_13 ? 10 : var_10))))));
                            var_35 = (max(var_35, var_9));
                            var_36 &= var_12;
                        }
                    }
                }
            }
            arr_61 [i_11] [i_11] = (-(!var_9));
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 22;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_37 = var_2;
                            var_38 = (max(var_38, (!var_10)));
                        }
                        arr_73 [i_22] [i_22] [i_20] [i_20] [i_20] [i_2] &= (11 <= (var_1 > 14156084082607233383));
                        var_39 -= var_6;
                    }
                }
            }
        }
        arr_74 [i_2] &= var_12;
        var_40 = (~var_10);
    }
    var_41 = (((((var_6 ? (~-17525) : ((var_5 ? var_1 : var_6))))) ? var_0 : var_1));
    #pragma endscop
}
