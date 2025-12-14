/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_3 / -90) / -var_6));
    var_14 = (max(var_14, -90));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_1 [i_0])));
        var_16 = var_6;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = 100;
            arr_5 [i_0] [i_1] [i_1] = (var_4 / 15473);

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_17 = (max(var_17, (((var_8 | ((var_7 * (arr_15 [i_1] [i_2] [i_3] [i_4 - 1]))))))));
                        arr_16 [i_2] [i_2] &= var_8;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_18 = var_6;
                        var_19 = (-32767 - 1);
                        var_20 = (((23895 != 41641) != 41));
                        arr_19 [i_5] [i_0] [i_2] [i_1] [i_0] &= var_0;
                        var_21 = (max(var_21, var_9));
                    }
                    var_22 = (max(var_22, ((((~9107898389515207682) + var_1)))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_23 = (((((((((((-32767 - 1) < 89)))) == var_9)))) % ((var_1 ^ (29687 & var_1)))));
                        var_24 = (((-27 && -41) || 2507202289));
                    }
                    arr_27 [i_0] [i_0] [i_0] = var_3;
                    var_25 = ((((((-2147483647 - 1) / var_7))) / (min(1787765007, (2507202270 / 6958)))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_26 = ((245354639 ? 32740 : (1 | 23895)));
                    var_27 = (((41 / (arr_28 [i_1] [i_2]))));
                }
                var_28 = (max(var_28, (((((((-71 >= var_9) ^ 1))) && (var_9 < 2507202289))))));
                var_29 &= 44;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_30 = ((~(var_9 / var_7)));
                            var_31 = (1864060413 >= (arr_11 [i_0] [i_2] [i_10]));
                            var_32 &= ((48536 / (((-84 + 2147483647) << (245354639 - 245354639)))));
                            var_33 = (~-2862230621);
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_34 = (((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) / (arr_30 [i_0] [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_35 = var_4;
                            var_36 &= ((~(arr_44 [i_0] [i_1] [i_0] [i_1] [i_0])));
                        }
                    }
                }
                var_37 = ((32756 ? (~39) : 0));
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                arr_48 [i_0] [i_0] = (((((376449259634747115 < (arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) >> ((((((((arr_42 [i_0] [i_14] [i_14] [i_14] [i_0] [i_14]) / 62675))) ? (max((arr_21 [i_0] [i_1] [i_14]), (arr_36 [i_14] [i_14]))) : (2861 | -7315))) + 5269))));
                arr_49 [i_0] [i_0] &= (min((17000 < 2860), var_12));
            }
        }
    }
    var_38 = var_6;
    #pragma endscop
}
