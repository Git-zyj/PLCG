/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = (min(((min((8736224727534638552 && -11), 65535))), (max(var_4, var_9))));
                    var_19 = (((max(65535, 4294967290)) >= (((var_3 / ((12 ? 1 : -72)))))));
                    var_20 ^= ((((var_15 ? 0 : var_13)) ^ ((max((((2743309637600395520 ? 1654656003 : 1793))), (var_14 / var_9))))));
                    arr_10 [i_0] [i_1] [i_0] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((6357149271989805909 <= 57364) == (2244 >= var_17))))));
                                var_22 = ((((~(min(var_5, 83))))) ? ((6357149271989805929 ? -1833 : -1)) : (((((var_8 ? var_8 : 0))) * -1)));
                                arr_17 [i_0] [i_1] [8] [i_1] [8] [14] = var_16;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_23 = (0 != 0);

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_6] = 14;
                        var_24 = (min(var_24, (((-var_14 ? 1004549764 : (var_9 ^ 15))))));
                    }
                    arr_25 [i_1] |= 21;
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_31 [i_8] [i_0] [i_0] [i_0] = 172;

                            for (int i_9 = 2; i_9 < 23;i_9 += 1)
                            {
                                arr_35 [i_0 + 1] [i_0] [i_7] [i_8] [i_9] = (1 > 16362072086578239419);
                                arr_36 [i_0 + 1] [i_1] [i_7] [i_7] [i_0] = 32;
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 24;i_10 += 1)
                            {
                                var_25 = (var_0 || 8831302171440029799);
                                var_26 ^= ((var_15 ? var_4 : -1));
                                var_27 = ((var_14 <= ((-7034 ? 2 : var_5))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 24;i_11 += 1)
                            {
                                var_28 = 1;
                                arr_41 [i_0] [i_1] = var_1;
                                var_29 ^= (0 ^ 4994934996013332496);
                                var_30 = ((0 <= (var_8 || 125)));
                                var_31 = var_7;
                            }
                            for (int i_12 = 0; i_12 < 24;i_12 += 1)
                            {
                                var_32 = 7580;
                                arr_46 [i_1] [i_0] = (max((1 > 18), -1197402041987860911));
                            }

                            for (int i_13 = 1; i_13 < 22;i_13 += 1)
                            {
                                arr_49 [i_0] [i_13] [i_8] [i_7] [12] [i_0] = var_12;
                                var_33 = (-var_2 % 31);
                            }
                            for (int i_14 = 0; i_14 < 24;i_14 += 1)
                            {
                                arr_52 [5] [5] [i_0] [5] [i_14] = ((min((var_5 * 1), var_17)));
                                var_34 = (max((min(((var_1 ? 44809 : var_14)), (var_15 != 9940781263346951971))), ((56 >> (2084671987131312197 && var_0)))));
                            }
                        }
                    }
                }
                var_35 = (max(var_35, ((((((max(var_11, 252))) << 1197402041987860943))))));
            }
        }
    }

    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 2; i_16 < 11;i_16 += 1)
        {
            var_36 = (max(var_36, -2114535430492041992));
            arr_58 [i_15] [i_15] [i_16] = max((16362072086578239419 % var_17), -8);
            var_37 = (~7029);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            var_38 *= ((0 ? (65524 > -11238) : 0));
            var_39 = var_6;
        }
        arr_61 [i_15] = 18;
        var_40 = 6886;
    }
    for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
    {
        var_41 = (min(var_13, (7 - 32)));
        var_42 = (min((var_9 || 6954953319213505669), (min(2767585992, 7026))));
        var_43 |= 1150193395;
        var_44 *= (((0 >> (196 - 159))));
        var_45 = (((8901300482814885240 | (min(3144773901, -7012)))));
    }
    #pragma endscop
}
