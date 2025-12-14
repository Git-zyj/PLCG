/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max(-var_5, var_1));
        var_15 = ((((max((min(var_13, 4616969173901144329)), (!0)))) ? ((max(1, (max(-4096, var_13))))) : (((!(!var_4))))));
        var_16 = min(1768676648, 2829035833);
        arr_3 [i_0] = var_12;
        var_17 = max(((min(var_4, ((3315975927312003213 ? 58102 : 16383))))), (max(1502621592, 34328)));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [14] [9] = var_11;
        var_18 = (min(var_18, (var_8 - var_11)));
        var_19 = (max(var_19, (((1 != (4125352770 >> 1))))));
        arr_7 [i_1] [i_1] = (((~var_8) ? var_6 : (~var_14)));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = max(((4113682699 & (2093056 + var_9))), (max((max(181284596, 41371)), (!var_6))));
        var_20 = (min(var_20, (((1048575 ? 1783 : (31202 && 4113682710))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_21 *= (min((max(9223372036854775784, ((min(2243832518, var_8))))), ((max(1692006142, var_1)))));
        arr_15 [i_3] = 1465931466;
        var_22 = (max(var_22, (((!(var_5 - var_4))))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_23 = ((!(max(1, 1))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_24 += (max((min(-31079, 2829035833)), (((!(!var_2))))));
                            arr_25 [i_3] [i_4] [i_7] [i_4] [i_4] = var_9;
                            arr_26 [i_5] [i_7] [i_5] [i_5] [i_4] [i_7] [i_3] = (max((+-31235), (max((!var_13), ((var_3 ? 181284587 : 18799))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_25 += (min((((((max(13086, 4294967295))) ? (~30331) : (min(var_3, var_6))))), (max(-var_14, ((min(var_8, 1)))))));
                        arr_39 [i_9] [1] [i_9] [i_9] = (min((min(1, var_14)), (var_10 + var_6)));
                        arr_40 [i_9] [i_9] [i_9] [i_11] [1] = ((((max((!181284590), var_7))) / (min(2631275087254179091, (var_14 != var_0)))));
                    }
                }
            }
        }
        var_26 &= (min(34328, 0));
        arr_41 [i_8] [i_8] = (min(34350, 24547));
    }
    var_27 = ((~((((((4294967291 ? 35184372088831 : -1045218810920065272))) && (!1))))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            {
                var_28 = (min((max(((1 ? var_6 : 3645663472)), (max(1, var_9)))), ((1 ? (min(1190618130, 52351)) : (((max(1, 43222))))))));
                var_29 = (max(var_29, (((((max(1, -839779031579897019))) ? 1 : 1)))));

                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    arr_49 [i_14] [i_13] [i_12] [i_12] = (((((var_1 ? var_4 : var_14)) ? (!var_8) : (max(var_6, var_11)))));
                    var_30 = (!1);

                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {

                        for (int i_16 = 3; i_16 < 11;i_16 += 1)
                        {
                            arr_57 [i_12] [i_12] &= var_7;
                            var_31 = (-(min(((min(var_5, 1))), (~var_7))));
                            var_32 *= 1;
                        }
                        var_33 = (((((var_3 > 792822790) == ((var_11 ? var_8 : 31235)))) ? var_7 : ((((2067981457 ? -14360 : 3357321610)) / 2226985839))));
                        var_34 -= var_8;
                    }
                    for (int i_17 = 1; i_17 < 10;i_17 += 1)
                    {
                        arr_61 [10] [i_12] [8] [i_12] &= (1 != 402653184);
                        var_35 = ((max(((min(34301, 1)), 4125352769))));
                        var_36 = var_2;
                        var_37 *= ((-((((var_7 ? 24306 : var_10)) - (max(var_10, var_10))))));
                    }
                }
                for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 10;i_20 += 1)
                        {
                            {
                                var_38 = ((((min(1, 24568))) - 52513));
                                var_39 = (min(var_39, var_12));
                                var_40 = ((!(min((!var_11), var_2))));
                                var_41 = (min(var_3, (((!(var_1 - 0))))));
                                var_42 = ((-(min((!3203006495685953440), (2749282667867159116 - 4071974352)))));
                            }
                        }
                    }
                    var_43 = (min((((~var_9) ? (((var_7 ? -32753 : var_13))) : (min(var_10, var_1)))), (min(var_8, 2067981457))));
                }
                for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                {
                    arr_71 [i_12] [i_13] [i_12] &= (max(3346118818, var_3));
                    arr_72 [i_21] [i_21] = (((var_5 - 2679576538557134279) ? (max(((var_10 ? var_11 : 1)), 14453)) : (937645686 >= 1258250719)));
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
                {
                    var_44 = -var_2;
                    arr_76 [i_22] = -var_3;
                }
                arr_77 [i_13] = (max(596523224, 1));
                arr_78 [i_12] &= ((((max((min(2518399268, var_8)), ((6723 ? 3844687465 : var_2))))) ? 3844687465 : ((((!((min(4125352760, 0)))))))));
            }
        }
    }
    var_45 = (max(var_45, var_4));
    #pragma endscop
}
