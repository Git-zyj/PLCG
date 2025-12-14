/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (3522489412 == 5193387935177179619);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = 772477884;
                    var_17 = (min(var_17, (~772477883)));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_18 = ((~(min(28051, ((var_7 ? (arr_6 [i_3]) : var_12))))));
                    var_19 = ((min(var_11, -6)));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_20 += ((-((37 ? -28051 : var_6))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_21 = (~(~18979825));
                            var_22 = (!var_9);
                            var_23 = var_10;
                        }
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_24 = 1340485331;
                        var_25 = 1851991475;
                        var_26 = 471910781;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_27 = (!-5842565255959278228);
                        var_28 = (min(var_28, var_2));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_29 ^= ((1323306976 ? (arr_10 [i_1]) : 998516224));
                        var_30 = ((2727630627 ? var_5 : (arr_11 [i_1] [i_4] [i_9])));
                    }

                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_31 = ((var_1 ? ((1523095948 ? 91 : (arr_0 [i_1] [i_1]))) : (~-1323306981)));
                            var_32 = (~var_7);
                        }
                        var_33 = (((~7903) ? ((var_12 ? 251 : var_0)) : 0));
                    }
                    var_34 = ((var_11 >= (arr_4 [i_0])));
                    var_35 = (-1163 && var_11);

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_36 = -1323306976;
                        var_37 = (min(var_37, var_14));
                        var_38 = (((arr_28 [i_0] [i_12] [i_12] [i_12]) ? -5858771224015816582 : -1323306976));
                    }
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_39 = (min(var_39, (((1323306976 != (3290294695 != 1323306975))))));
                    var_40 = ((~((max(1, -79)))));
                }
                var_41 = ((2790700453230139717 << (((arr_27 [i_1] [4] [i_1] [i_0] [14]) - 720214612))));
                var_42 = ((1323306959 != (~3555462583)));
            }
        }
    }
    #pragma endscop
}
