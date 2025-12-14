/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (1146603466 && 119);
                    var_11 = ((var_5 ? ((var_1 ? var_2 : (arr_0 [i_2]))) : (((min((arr_5 [i_0] [i_0] [i_0]), var_3))))));
                    var_12 = max(((((min(var_7, var_4))) ? (((var_8 ? var_4 : 32077))) : 205)), ((max((arr_1 [i_1]), var_4))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_13 = (arr_2 [i_0]);
            var_14 = ((!(((var_9 ? (arr_10 [i_0] [i_3] [i_3]) : 16736103655222386723)))));
            var_15 = (max(var_6, (((-115 + 2147483647) >> (((max(var_1, (arr_8 [i_3] [10] [i_0]))) - 12674596667782505082))))));
            var_16 &= ((max((arr_2 [i_0]), (min(var_9, (arr_7 [i_3] [12] [i_3]))))));
            var_17 = ((-32077 ? 1 : -26));
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            var_18 = (min((((arr_9 [i_4 + 1]) & (arr_9 [i_0]))), -69));
            var_19 *= ((!((((1 % 3) << (arr_2 [i_4 + 2]))))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = (arr_14 [i_5] [i_5] [i_0] [i_5]);
                var_21 = (((arr_13 [i_4]) - var_5));
            }
        }
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            var_22 = (min(var_22, (var_6 | var_9)));
            var_23 = (((1 - ((min(65533, 16))))) < (max(var_3, var_9)));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_24 |= var_5;
            var_25 = (min(((-1514044136 ? ((((((arr_5 [i_0] [i_7] [i_0]) + 2147483647)) << (var_5 - 19590)))) : 2030658216543578909)), (((-(var_6 - var_6))))));
        }

        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_26 = (max(((-((838932848333764811 >> (var_5 - 19540))))), (min((((var_2 ? var_5 : var_7))), 7696301820592290250))));
            var_27 *= (~var_7);
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_28 = 13013323193105176093;

        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_29 = ((-((min((min(5, var_2)), var_2)))));
            var_30 = 14;
            var_31 = 144;
        }
        var_32 = (~9675967434241606572);
    }
    var_33 = (((((var_2 ? var_7 : ((var_6 ? var_8 : var_2))))) ? var_9 : var_2));
    #pragma endscop
}
