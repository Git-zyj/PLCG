/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (min(var_11, var_3));
                var_12 = (min(var_12, var_0));
                var_13 = max((((arr_3 [i_0 - 2] [i_1] [i_0]) ? 2250700302057472 : 0)), 2250700302057483);
                var_14 = var_2;
            }
        }
    }
    var_15 = (min(18444493373407494153, 2250700302057489));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_2] = (((((2250700302057468 ? 2032 : (arr_11 [i_2] [i_2] [i_4])))) ? var_4 : var_4));
                    var_16 *= ((((max((arr_10 [i_4 + 1] [i_4 + 1] [i_3]), var_7))) ? var_3 : (min((arr_11 [i_4 + 1] [i_3] [i_3]), 18444493373407494163))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_2] [i_3] [i_2] [i_5] [0] [i_6] = ((var_5 ? ((12196 ? var_7 : var_5)) : var_4));
                                arr_22 [i_4] [i_3] [i_4] [i_5] [i_2] [i_5] [11] = var_7;
                                var_17 = var_7;
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] = ((var_3 ? var_10 : (max(-6492470724398636827, 17))));

                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_18 = (min(var_18, (((25747 ? 2250700302057475 : -6492470724398636819)))));
                            var_19 = ((2250700302057482 ? 193 : -11485));
                            var_20 = (((arr_23 [i_7 - 2] [i_2] [i_7] [i_7 - 1] [21]) ? (max(1694110803, 11554345510457007052)) : 1));
                            arr_29 [i_2] [i_2] [i_4] [i_7 + 2] [i_2] = (arr_1 [i_2]);
                            var_21 = 58485;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_22 = (var_2 ? ((max(-6492470724398636819, 93))) : (arr_27 [i_2] [i_2]));
                            var_23 = (max(var_23, ((((((1 ? (~-23279) : 23))) ? 109 : 9592327753250735065)))));
                            arr_32 [i_2] [i_2] [15] [i_2] [i_2] = ((((min(var_7, (max(var_2, var_0))))) ? (arr_16 [i_7 + 1] [i_3] [i_2] [i_3]) : (((19 ? 166 : 3410446721)))));
                        }
                        var_24 -= (max((arr_5 [i_7]), ((((var_1 ? var_1 : (arr_31 [i_2] [i_7])))))));
                        arr_33 [i_7 + 1] [4] [i_2] [i_2] [i_2] [i_2] = (arr_16 [i_2] [11] [i_2] [i_7]);
                        arr_34 [i_2] [i_2] = ((-32338 ? -12175 : -508539504359792716));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_25 += (((((9223372036854775807 ? -6704087191973339666 : var_4))) ? (arr_12 [i_2] [i_2] [i_2]) : ((9223372036854775807 ? 287477015389920549 : 20))));
                        var_26 = ((12201 ? 1 : var_10));
                        var_27 = (max(var_27, (((var_8 ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_12 [i_4] [i_4] [19]))))));
                    }
                }
            }
        }
    }

    for (int i_11 = 3; i_11 < 23;i_11 += 1)
    {
        arr_39 [i_11 - 2] = ((var_10 ? var_10 : -2250700302057481));
        arr_40 [i_11] = 24;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_28 = (arr_31 [i_12] [i_12]);
        var_29 |= var_8;
    }
    var_30 &= var_2;
    #pragma endscop
}
