/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 -= (1 >= 1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_16, 12009731374601475748));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_0] [i_1] = 1;
                                arr_15 [i_0] [i_0] [i_2] [i_3] = ((((2980768287911914570 ? 1 : 215)) / 53942));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = 2032413221679758971;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_7] [i_6 + 1] [i_6 + 3] [i_8] = (((((var_13 ? var_17 : 1))) * (211 / var_11)));
                        var_20 = (var_3 % 3364);
                        arr_28 [i_5] [i_6] [i_7] [i_8] [i_8] = (arr_25 [i_5] [i_5] [i_7] [i_8]);
                    }
                    arr_29 [i_5] [i_5] [i_7] [i_7] = var_17;
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    var_21 = ((var_8 ? 148 : (arr_12 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 2])));
                    var_22 = -1;
                }
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    var_23 = (((((max(1, 1) && ((min(var_16, 15))))))));
                    var_24 -= (max((arr_13 [i_5] [i_5] [i_5] [1] [i_5]), (arr_24 [i_10 - 1] [i_10] [0] [i_6])));
                    arr_34 [i_5] [i_6] [i_10] [i_5] = (((((12009731374601475748 << (((arr_25 [i_5] [i_6 + 1] [i_10 + 1] [i_6]) - 140))))) ? (((max(35, (arr_25 [i_5] [i_6 - 1] [i_10 - 1] [i_10 + 1]))))) : (~8056730664213791188)));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_25 = ((max(-var_1, (~44597))));
                            arr_41 [i_5] [i_11] [i_11] [i_12] = (max((min(12009731374601475748, (arr_39 [i_6 + 3] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1]))), ((min(211, 180)))));
                            var_26 = var_8;
                        }
                    }
                }

                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((((~(max(11578, var_12))))))));
                                var_28 = (max(var_28, var_2));
                            }
                        }
                    }
                    var_29 -= ((((min((min(var_2, 155)), (((var_10 ? 1 : 85)))))) ? var_11 : (((187 >> (((101 | var_13) - 99)))))));

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_30 = 106;
                        arr_54 [i_5] [i_13] = 10390013409495760413;
                    }
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    var_31 = ((-10390013409495760413 != ((((arr_20 [i_6] [i_6 + 3]) ? 1 : (min(1, (arr_18 [i_5]))))))));
                    var_32 = (min(var_32, (((((0 ? (max(1, 16064221499033845535)) : ((161 ? 155 : 6)))) != (max((arr_5 [i_6 + 3]), var_0)))))));
                }
            }
        }
    }
    #pragma endscop
}
