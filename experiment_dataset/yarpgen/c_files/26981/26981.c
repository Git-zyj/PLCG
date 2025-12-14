/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((56208 ? (min((min(var_4, 960)), 12)) : var_1));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = var_6;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 = (max(var_12, (((46 ? 1 : 64575)))));
            arr_6 [i_1] [i_1] = (arr_3 [i_1] [20]);
            var_13 = (min(var_13, var_1));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_14 = -252;
                            var_15 = -0;
                            arr_15 [i_1] = ((var_9 ? 247 : ((1 ? 1 : 56186))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_16 = ((((~((1 ? 7680 : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [1]))))) >= ((~(12 >= 975)))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        var_17 *= (((~var_0) - (min(((max(var_1, 1))), var_2))));
                        var_18 ^= ((~(arr_17 [i_0 - 2] [i_5 - 1])));
                        var_19 = ((max((min(952, 15872)), 49663)));
                    }
                }
            }
            var_20 = (arr_18 [i_0]);

            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                var_21 = (((arr_22 [i_5 + 1] [i_8 + 1]) ^ -309));
                var_22 = (arr_4 [19] [i_5] [i_5]);
            }
        }
        var_23 = (min((arr_1 [i_0 - 2] [6]), ((max((arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2]), (arr_4 [i_0 - 1] [i_0] [i_0]))))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            var_24 = ((+((45800 ? (!var_1) : (min(109, var_2))))));
                            arr_39 [i_9] [i_9] [i_9] [i_12] [i_12] = (!((max(((max(var_8, var_8))), var_0))));
                        }
                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            var_25 = (min(var_25, 1));
                            var_26 *= ((((min((arr_9 [i_10]), (arr_40 [i_9] [i_12] [i_9] [i_10] [i_9])))) + (((max(4095, (arr_29 [i_14 + 1] [i_9])))))));
                        }
                        var_27 = var_5;
                        arr_42 [i_9] [i_10] [11] [8] = (((min(((min(1, var_6))), var_5))) != (arr_21 [i_9] [i_11 - 2] [i_11 - 3] [1]));
                    }
                }
            }
        }
        arr_43 [i_9] [i_9] = (((arr_18 [i_9]) ? (-32767 - 1) : ((var_9 ? (arr_18 [i_9]) : (-32767 - 1)))));
        var_28 = (min(180, (max(((var_5 ? (arr_37 [i_9] [12] [i_9]) : var_5)), 15883))));
    }
    var_29 = 237;
    #pragma endscop
}
