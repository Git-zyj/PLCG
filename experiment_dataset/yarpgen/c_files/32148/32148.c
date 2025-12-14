/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = -53;
        var_18 = (((((~((var_10 ? var_12 : var_10))))) - (((var_3 ? var_1 : var_16)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 = var_10;
        var_20 = -var_12;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_21 = ((((var_11 ? var_9 : var_16)) - var_11));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_9 [i_2] = -var_15;

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_22 = (0 * 3646087846);
                    var_23 = (((((var_16 ? var_11 : var_11))) != var_14));
                    var_24 = (!var_0);
                    var_25 = ((-((var_15 ? var_0 : var_16))));
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    arr_14 [i_3] [i_2] [i_3] [i_5] [6] [i_5] = var_16;
                    var_26 = (max(var_26, (((var_5 ? var_12 : var_4)))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_27 = (1 ? 3646087846 : 3646087853);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_28 = var_8;
                        var_29 = (max(var_29, (~var_8)));
                        var_30 = (max(var_30, (((var_12 << (var_9 - 110792813))))));
                    }
                }
                arr_21 [i_1] [i_2] [i_3] = var_11;
            }
            var_31 ^= var_3;
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_32 = ((-1788907154 ? var_2 : (min(((var_3 << (3646087849 - 3646087827))), var_1))));
                var_33 = (max(var_33, var_0));
                var_34 = ((-(((-var_10 == ((var_13 ? var_2 : var_16)))))));
            }
        }
    }

    for (int i_10 = 3; i_10 < 9;i_10 += 1)
    {
        var_35 = ((-(~var_12)));
        arr_30 [i_10 - 1] = ((!(var_8 / var_16)));

        for (int i_11 = 1; i_11 < 7;i_11 += 1)
        {
            var_36 = (min(var_36, (((+((var_7 ? (var_5 == var_9) : var_9)))))));
            arr_33 [i_11] [i_11] = var_10;
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_37 = var_9;
            arr_38 [i_10] [i_12] = (~648879450);
            var_38 = (min(648879447, 16313789253581064964));
            var_39 = min((!var_13), (var_4 + var_8));
            var_40 = (var_14 <= var_9);
        }
        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
        {
            arr_41 [i_10] [i_13] [i_10] = (((var_0 == var_0) >= (((((var_7 ? var_0 : var_0))) ? (((var_4 ? var_15 : var_10))) : (~1952845322)))));
            var_41 = (39008 != 22927);
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
            {
                arr_47 [i_10] [i_14] [i_14] [i_15] = ((255 ? 3751494245 : 1966466779));
                var_42 = max((var_16 < var_14), (((((var_5 ? var_16 : var_15))) ? var_8 : var_10)));
                var_43 = (((160 ? 1 : 255)));
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {
                arr_50 [i_16] [i_14] = (18446744073709551615 ^ var_2);
                var_44 = (((var_1 | var_2) ? var_12 : ((var_0 ? var_8 : var_1))));
            }
            var_45 = (((max(var_7, var_15))));
            var_46 = (max(var_46, ((((((((var_9 ? var_15 : var_3)) / var_1))) ? 1 : (min(var_12, var_6)))))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    {
                        var_47 -= ((-var_4 < (!3205736104780812302)));
                        var_48 = var_6;
                    }
                }
            }
            arr_57 [i_14] = ((-(((var_2 ? var_5 : var_16)))));
        }
    }
    var_49 |= (((var_14 & (((var_9 ? var_13 : var_0))))));
    #pragma endscop
}
