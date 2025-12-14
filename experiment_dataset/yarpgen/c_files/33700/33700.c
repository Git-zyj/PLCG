/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 * 30957);

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = ((-var_7 >= (min(((min(var_6, var_5))), (var_8 & var_0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_1] = ((!(-288 / -298)));
            arr_5 [i_1] = (-1 / var_5);
            var_12 = (((302 != 18) != -288));
            var_13 = var_2;
        }
        var_14 += (((-32757 | 297) >= var_4));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_15 = (~var_6);
            arr_8 [i_2] [i_2] = 34580;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_16 = (max(var_16, ((((!var_1) != -2420)))));

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (max(var_17, (31 != 2131925849)));
                            var_18 = (2163041416 + var_5);
                            var_19 = 1;
                            var_20 = (min(var_20, var_4));
                        }
                    }
                }
                arr_20 [i_0 + 1] [i_3] [i_4] = var_1;
                var_21 = 280;
            }

            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                var_22 = (31435 >= 205);
                arr_24 [i_7] [i_3] [i_3] [i_0 - 2] = (var_0 != 187);
                var_23 = (max(var_23, -952567563317003670));
                arr_25 [i_0] [i_3] = var_1;
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_24 = (min(var_24, (var_9 + 4294967295)));
                    var_25 = (3 >> 3);
                    arr_32 [i_0] = -4294967281;
                }
                var_26 = 0;
                var_27 ^= ((65528 + (var_1 | 65527)));
                var_28 = var_1;
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_29 = var_9;

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_30 = (((~var_5) | (max(var_0, ((max(7299, -267)))))));
                arr_38 [i_0 - 1] [i_10] [i_11] = ((((max(var_8, -280))) > -299));
                arr_39 [i_0] = -1;
                var_31 = (max(var_9, var_6));
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                arr_42 [i_12] [i_10] [i_0] [i_0] = (min((var_2 && var_3), (!9408905491771912420)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_32 *= (max(16443462949310632996, var_8));
                            arr_49 [i_0 - 1] [i_10] [i_12 - 1] [i_12 - 1] [i_13] = 302;
                            var_33 = (var_6 || var_6);
                        }
                    }
                }
            }
            var_34 = (min(18446744073709551615, ((((var_8 * 16443462949310632969) <= (~var_3))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_35 -= (min(136, (max(var_8, -289))));
                        var_36 += (((var_7 + 2147483647) >> (((((-302 - 4403789540898880902) / var_9)) - 2716764274097627))));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            var_37 = -var_1;
                            var_38 -= ((((((-127 - 1) < 36800))) + (2097144 && 161)));
                        }
                    }
                }
            }
        }
    }
    var_39 = (max(var_5, (((var_0 - var_3) - (((max(var_8, var_4))))))));
    #pragma endscop
}
