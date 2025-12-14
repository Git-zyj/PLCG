/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 |= ((((~((max(23255, var_5)))))) ? 1 : ((~((min(1, 64))))));
        var_19 = (min(var_19, (((-(~var_2))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, ((min((~64), (1 >= 23257))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_21 = (((((30382 ? 2016 : 191))) ? (var_9 > 12) : ((max(11, 60648)))));
                            var_22 = ((!(((64 ? -12463434207347373500 : (~-116))))));
                        }
                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            var_23 = (min((min(64, var_16)), ((max(1, var_0)))));
                            var_24 = (((((var_2 < (min(16384, 5891356368481443292))))) < 65529));
                            arr_15 [0] [i_1] [0] [i_0] [i_1] [i_5] [i_5] = -4888;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((!((min(-1, 60648)))))), ((((min(196, 9532))) & (max(-155467323, 63505))))));
                            var_25 = (((min(((90 ? 63519 : 32)), (-13 & 42283)))) <= 11784567042740653786);
                            var_26 *= (max((!var_1), ((~(~var_5)))));
                        }
                        var_27 = ((-((~((min(60628, 4887)))))));
                        arr_19 [i_0] [i_0] [9] [i_3 - 1] = ((!((((max(1, 1)) ? 42256 : (32768 == var_14))))));
                    }
                }
            }
        }

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            arr_23 [i_0] [i_7] = (49 | (((~-542645452) % (-2147483647 - 1))));
            var_28 = (max(var_28, ((min(((min(var_9, 3072))), ((1 >> (((max(249, 18446744073709551615)) - 18446744073709551587)))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_29 *= ((!(var_1 - 46)));
                var_30 = (((60643 ? var_6 : 55984)) < (~175));
                arr_28 [i_0] [i_8] [i_8] [i_9] = (32 & 0);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_31 = (min(var_31, (13 >> var_0)));
                            var_32 = 32512;
                            arr_35 [i_8] |= (!20);
                        }
                    }
                }
            }
            var_33 = -2210541956;
            var_34 = ((-(!-1)));
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            arr_38 [i_0] = (219 == 1141067132);
            arr_39 [6] |= ((((max((-2147483643 < 4891), (3153900164 | var_9)))) ? ((85 * ((var_16 ? var_17 : 42890)))) : (var_0 & -0)));
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_35 = (min(var_35, ((((--4908) ? 65525 : ((25 ? var_1 : 61094)))))));
        arr_44 [i_13] = ((-(max((150 < 0), -1136858945))));
        arr_45 [i_13] = 22633;
    }
    var_36 *= ((-(min(var_7, (max(-982026031, -272084648))))));
    var_37 = 54505;
    #pragma endscop
}
