/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -var_8));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 = ((arr_3 [1]) ? (((!(~4096)))) : (min((var_1 <= -8940398589969587269), (((-21061 + 2147483647) << (4096 - 4096))))));
            arr_5 [i_0] [i_1] = (((-2060229313 ? var_6 : var_6)));
            var_12 = (max(var_12, var_7));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = (arr_3 [i_0 + 2]);
                            var_14 = var_3;
                            var_15 = (min(var_15, ((((arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_0 - 1] [i_0 + 1] [i_1]) % -var_9)))));
                        }
                        for (int i_5 = 2; i_5 < 7;i_5 += 1)
                        {
                            arr_14 [i_0] [1] [i_2] [i_3] [i_3] = ((!((min(155, var_9)))));
                            var_16 = var_5;
                            var_17 = (min((((arr_12 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_1] [i_5 - 2] [i_0 + 2] [i_5 + 1]) ? 1 : ((61416 ? (arr_3 [0]) : (arr_7 [i_0 + 2]))))), ((min((arr_2 [i_0 + 1] [i_5 + 3]), 155)))));
                        }
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_18 = (max(var_18, ((min((-2147483647 - 1), 1)))));
                            var_19 = ((var_3 ? var_3 : (arr_15 [i_0 + 3] [5] [i_2] [i_3])));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_2] = max(((min(164, 230))), var_0);
                            var_20 = (min(var_20, (((((min((arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_0] [1]), (var_4 & 1134367278)))) ? ((max(58, 1399260398))) : var_4)))));
                        }
                        arr_22 [3] [i_1] [i_0 + 2] [i_3] = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = (((((min(var_5, 7159)) ? (((min(var_3, 97)))) : 4294967287))));
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            arr_27 [i_8] [i_8] [i_8] = var_2;
            var_22 = ((~((0 ? 19211 : -1))));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    {
                        var_23 = ((-(((((var_9 ? var_9 : var_6))) - (min((arr_33 [i_10] [i_9] [i_10]), var_2))))));
                        var_24 ^= (1 ? 75 : 8);
                        var_25 = (min(var_25, (arr_18 [i_0] [i_0] [i_0] [7] [i_11])));
                        var_26 = (min(var_26, 394657594));
                        var_27 = var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
