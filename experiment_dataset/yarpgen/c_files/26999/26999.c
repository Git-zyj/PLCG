/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_0 ? 0 : ((var_5 ? var_4 : var_7))))) ? (min(var_13, (min(var_9, 3037253491790036710)))) : (var_2 >> -var_0)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((var_5 | (arr_3 [i_0] [i_0 + 2] [i_0 + 1]))) == (((max((arr_1 [1]), -1093633794)) - var_0))))));
                var_17 = (~-20);

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (max(var_18, var_1));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_19 = ((-((59 ? (arr_11 [i_2] [i_2]) : (arr_12 [i_0 - 3] [5] [i_0 - 3])))));
                            var_20 ^= ((1 ? 0 : ((1 ? var_0 : (-2147483647 - 1)))));
                        }
                    }
                    arr_15 [i_1] = (((10473425724129958356 || 1) > 89));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = ((~(29593 ^ 1)));
                                arr_25 [i_0] [i_0] [i_1] [i_6] [i_0] = var_13;
                            }
                        }
                    }
                    arr_26 [i_1] [i_1] [4] [i_5] = (arr_20 [i_0] [i_1] [i_0] [i_1]);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        var_22 = (min((min((((var_13 <= (arr_20 [i_9 + 2] [i_1] [i_1] [i_0])))), ((var_11 ? var_14 : var_10)))), (1 == 16770837)));
                        var_23 += 1;
                        var_24 = (min(var_24, -1));
                        var_25 = ((((min((((var_6 ? (arr_6 [i_1]) : var_1))), (max(var_1, var_12))))) ? (min((arr_30 [i_0 + 2] [i_1] [i_8] [i_0 + 2] [i_8] [i_0 + 2]), 4294967282)) : (arr_21 [6] [i_8] [i_1] [i_0])));
                        var_26 = (max(var_26, ((min(-18446744073709551595, ((min(1, -541631385))))))));
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_27 = ((var_4 ? var_13 : (((arr_11 [i_0] [i_10]) ? 4095 : 1819194671))));
                            var_28 = ((18446744073709551615 ? var_9 : var_12));
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            arr_40 [i_0] [9] [i_1] [5] [5] [i_12] = (((((1 ? 1 : 1))) ? var_9 : -107));
                            var_29 = (!var_0);
                            var_30 = (-0 > 8643242273658534160);
                        }
                        for (int i_13 = 2; i_13 < 16;i_13 += 1)
                        {
                            var_31 = (((arr_4 [i_1] [i_1]) ? var_10 : 48574));
                            var_32 |= var_3;
                        }
                        var_33 = 1320360138;
                    }
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        var_34 = (max((((!(arr_0 [i_14 - 1])))), ((1 ? 203 : (arr_1 [i_0 + 1])))));
                        var_35 |= ((!(((9223372036854775785 ? 1 : 1851040625)))));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_47 [i_0 + 4] [i_0] [i_14] |= (max(7472, 0));
                            var_36 = (max((((27565 - 2917326790371194582) ? var_7 : (!11701306749756876188))), var_6));
                        }
                        var_37 = -72;
                    }
                }
            }
        }
    }
    var_38 += ((49782 >> (536870911 - 536870911)));
    var_39 = ((max(255, (((-2147483647 - 1) ? var_5 : var_12)))));
    #pragma endscop
}
