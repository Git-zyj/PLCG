/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 = (var_1 ^ var_1);
                var_16 = ((~(~var_5)));
                var_17 = (0 | var_7);
                var_18 += (!(!65534));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_19 = (-((var_5 ? var_12 : 36554)));
                            arr_18 [i_0] [i_0] [i_3] [i_1] [i_0] = -27430;
                            arr_19 [i_1] [i_1] = (min((min((max(8714817828464854556, var_6)), ((var_2 ? var_7 : var_12)))), var_9));
                            arr_20 [i_1] = ((((((3412657811 && 65535) / var_6))) ? ((((min(var_10, 134217216))))) : (((23277 ? 0 : 18446744073709551615)))));
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] [i_3] |= (~3922);

                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_1] [i_1] = (max((min(((var_11 ? var_3 : var_5)), var_0)), (((((((var_12 + 9223372036854775807) << (6915 - 6915)))) && (((27429 ? -75 : 65535))))))));
                    arr_27 [i_0] [i_1] [8] [i_6] = (min((((var_0 ^ var_11) ? (((var_1 ? var_14 : 27430))) : (min(63, 27420)))), (var_0 ^ var_8)));
                    var_20 = 28969;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, ((max(((var_9 ? var_13 : var_10)), (max((((var_0 ? var_5 : -19413))), ((var_1 ? var_10 : 27420)))))))));
                    var_22 = (min(var_10, (((-(~1))))));
                }
            }
            arr_30 [i_1] [i_1] = max((min((((var_0 ? var_6 : var_5))), ((32766 ? var_4 : -27430)))), ((min(27429, var_1))));
        }
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            arr_33 [i_8] = -26372;
            var_23 = ((-(min(54630, ((28986 ? var_13 : var_8))))));
            arr_34 [i_0] = (min(((-8744558722709389356 ? 1683515929 : -15855)), (((var_6 >= ((65526 ? var_7 : 5881857876582339613)))))));
        }
        var_24 = (max(var_24, ((((min(((var_3 ? var_14 : var_4)), var_4)) * (((1 << (56216 - 56214)))))))));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_25 = (((((28982 ? var_2 : (((min(27430, 31))))))) ? ((((var_5 == var_11) << (((min(1976993918, var_12)) + 304915219041529864))))) : ((((var_9 ? 301446853 : 12564886197127212003)) - ((max(var_0, var_7)))))));
                        var_26 = ((max((var_14 * var_5), var_12)));
                        arr_43 [i_0] [i_9] |= (((-12328 ? 0 : 27664)));
                        var_27 = ((14195351545866440746 ? 5029380801476237338 : 28966));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 10;i_13 += 1)
            {
                {
                    arr_48 [i_0] [i_12] = ((min((var_4 / 5881857876582339613), (~var_10))) >= ((((~var_12) ? -var_5 : var_5))));
                    var_28 = ((var_3 >> (((((((var_0 ? var_2 : var_6))) ? var_12 : (((min(27664, 1)))))) + 304915219041529861))));
                    var_29 = (min((max(var_14, var_7)), (((65535 ? 1 : 109)))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] [i_14] = 9223372036854775807;
        arr_53 [i_14] = (!(((var_11 ? 814833167 : var_6))));
        arr_54 [i_14] [i_14] |= ((((((min(27664, 65535))))) ? (min((max(var_2, -1579928173)), (((var_0 ? 29004 : var_3))))) : (((((((1 - (-32767 - 1)))) > (6343923982735610144 % 1)))))));

        for (int i_15 = 2; i_15 < 8;i_15 += 1) /* same iter space */
        {
            arr_58 [i_14] [i_14] [i_14] = (((min(((min(-21062, 1))), 8381153024090061002)) << (((max(((var_12 ? 1688272062295836106 : var_0)), var_5)) - 1688272062295836066))));
            var_30 *= ((0 - (min(var_12, 1))));

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_31 = ((var_0 ? (((((min(var_14, var_2)) > var_9)))) : ((var_4 ? var_2 : 18446744073709551603))));
                var_32 = (min(var_32, ((max(var_0, (min((!12564886197127212007), var_7)))))));
                arr_61 [i_16] [i_16] [i_16] = var_7;
            }
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                var_33 = (((((var_11 ? var_12 : (var_3 + var_7)))) && -31780));
                arr_65 [i_17] [i_15] [i_14] = (!var_0);
                var_34 = ((~(((var_4 / 1) / ((var_2 ? var_9 : var_10))))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                arr_68 [i_14] = var_14;
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 4; i_20 < 10;i_20 += 1)
                    {
                        {
                            var_35 = ((var_11 ? var_6 : var_9));
                            var_36 = (max(var_36, var_13));
                            var_37 = (var_9 / 7193121321259455944);
                        }
                    }
                }
            }
            var_38 += (max((min(-var_11, var_14)), ((((-2 ? var_10 : var_11))))));
        }
        /* vectorizable */
        for (int i_21 = 2; i_21 < 8;i_21 += 1) /* same iter space */
        {
            var_39 = (min(var_39, 126));
            /* LoopNest 3 */
            for (int i_22 = 2; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        {
                            arr_87 [i_14] [i_14] [i_14] [i_14] [i_14] [i_23] [i_14] = -var_10;
                            var_40 = ((var_0 ? var_14 : -2147067472));
                            var_41 |= (((((var_10 ? var_10 : 15444))) ? ((var_7 ? var_14 : var_2)) : (((7451378547646023999 ? 2147067472 : -2147067472)))));
                        }
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 11;i_25 += 1)
        {
            var_42 = (min(((((1 ? var_9 : 1688272062295836112)))), ((var_5 ? 98 : (var_13 / var_13)))));
            var_43 *= (((min(((min(var_3, var_5))), (min(var_4, var_0)))) | var_14));
        }
        for (int i_26 = 0; i_26 < 11;i_26 += 1)
        {
            var_44 = (((min(var_4, var_0)) <= (1688272062295836106 <= var_4)));

            for (int i_27 = 2; i_27 < 10;i_27 += 1)
            {
                /* LoopNest 2 */
                for (int i_28 = 1; i_28 < 9;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 11;i_29 += 1)
                    {
                        {
                            var_45 = -10018;
                            var_46 = (~-28);
                            var_47 *= ((((max(var_11, var_14))) && (((127 << (4294967295 - 4294967289))))));
                            var_48 |= (((var_4 * 50943) && (((var_1 ? ((1 ? var_9 : var_9)) : (((var_1 << (var_11 - 632747273)))))))));
                        }
                    }
                }
                var_49 = (min((((var_3 ? var_13 : var_14))), -var_10));
            }
        }
    }
    var_50 = ((var_0 <= (min((var_12 / var_13), (((var_5 ? 838849739 : var_6)))))));
    #pragma endscop
}
