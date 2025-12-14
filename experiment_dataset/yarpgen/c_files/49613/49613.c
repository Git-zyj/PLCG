/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [0] [i_3] [i_0] = (((-32753 / 31) ? -19 : -1));
                            var_13 = var_4;
                            var_14 *= ((var_10 ? (!var_0) : var_6));
                        }
                        var_15 = (arr_14 [i_0] [12] [i_3 + 1] [i_3] [i_0]);
                        var_16 = var_10;
                    }
                    var_17 = (max(var_17, ((((arr_14 [i_0] [15] [i_0] [i_0] [i_0]) ? var_9 : ((var_8 ? (arr_1 [i_0]) : var_7)))))));
                    arr_16 [i_0] [i_1] = (!var_10);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((81 ? -32758 : 16777215)))));

                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_19 = ((var_8 ? 19 : (((((min(var_3, (arr_18 [i_0] [i_0] [i_7])))) ? (min(var_5, 229)) : ((max(32747, 1))))))));
                                var_20 = (min(-32762, ((1393507117 ? (max(4278190081, 25878)) : 1393507114))));
                                arr_24 [i_0] [i_1] [i_1] [i_5] [i_0] [i_1] [i_7] = (min((((var_7 ? 4012083119 : 99))), var_9));
                                arr_25 [i_6] [i_0] = (((((-32 ? var_3 : 2914258920))) ? (((var_4 / var_2) ? ((var_12 ? var_1 : var_12)) : (arr_20 [i_7] [i_6] [1] [i_5] [i_0] [i_0]))) : var_4));
                            }
                            var_21 = (min(var_21, ((min(4278190073, ((var_0 ? var_6 : -1)))))));

                            for (int i_8 = 0; i_8 < 18;i_8 += 1)
                            {
                                var_22 = ((32733 <= ((-58 ? (var_11 % -67) : 16777218))));
                                var_23 += ((0 ? -32 : -13432));
                                arr_30 [i_0] [i_0] [i_5] [i_6] [16] = (181 ? 16777218 : var_2);
                            }
                        }
                    }
                }
                var_24 = (-var_3 / ((4278190068 ? var_1 : (4278190086 * -13432))));
                var_25 -= ((((1 ? -1 : 0))) ? ((((min(var_1, 48238))))) : (~-var_6));

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_26 = (max(var_26, (var_7 <= var_3)));

                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            var_27 = (min(var_27, (((((!((max(16777214, 4278190084))))) ? ((max(((17 >> (var_2 - 13850))), (-10 > var_8)))) : (max((max(-55, 16777231)), (-76 && -11296))))))));
                            arr_39 [i_9] [i_10] [i_9] [8] &= (((((var_12 ? var_0 : (arr_37 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11])))) & ((-(max(var_6, var_6))))));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_28 -= (min(240, ((min(var_10, (arr_28 [i_9] [i_9] [6] [8]))))));
                            var_29 = (!-407174409);
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            arr_45 [i_0] [16] [i_10] [i_13] = ((281474976702464 ? 32763 : 511));
                            arr_46 [i_0] [i_0] = (((((arr_10 [i_0]) <= (((-32758 ? var_3 : (arr_34 [i_0] [i_9] [i_0] [i_0])))))) ? (((76 || (arr_12 [i_0] [i_0] [i_0] [8] [i_0])))) : var_3));
                            var_30 = var_3;
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            var_31 += ((((var_0 || ((min((arr_41 [i_10] [2] [i_9] [i_10] [i_14] [i_14]), var_4))))) && (((550454855 ? (min(1962467734, 17297)) : ((13038 ? var_8 : var_11)))))));
                            var_32 = (max((!var_6), var_6));
                            var_33 = var_1;
                        }
                        arr_49 [i_0] = ((-6614 && (!var_12)));
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_34 = (min(var_1, (((arr_23 [i_0] [i_0] [i_1] [i_9] [i_15]) ? (arr_4 [i_0]) : (arr_20 [i_0] [i_0] [i_1] [i_1] [i_9] [i_0])))));
                        arr_52 [i_0] = var_7;
                    }
                    arr_53 [i_0] = -20538;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            {
                var_35 = (max(var_35, var_0));
                var_36 -= 35716;
            }
        }
    }
    var_37 = (((((min(var_12, var_2)))) >= ((min((var_8 && var_0), var_7)))));
    #pragma endscop
}
