/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1895061831;
    var_18 = (min(var_18, ((((max(-75, -14168))) ? var_16 : ((var_9 / (min(var_14, 9377))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = 14146;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_20 = 65524;
                        var_21 = (min(var_21, ((max(-4044, 12)))));
                        var_22 = (max((65524 >> 1), ((((min(var_9, (arr_3 [i_1]))) <= ((((-16443 + 2147483647) << (((var_9 + 4975) - 10))))))))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_23 ^= ((+((((var_9 ? (arr_11 [7] [12] [0] [7] [0] [7]) : var_15)) / (arr_7 [i_3] [i_1] [i_3] [i_3])))));
                            var_24 = (4294967295 || 1);
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_25 = (min(var_25, (((var_1 + ((((((arr_0 [i_2 + 1] [i_0]) ? 2586977875261552995 : var_6)) | ((((arr_12 [14] [4] [i_2] [i_5] [14] [14]) / var_15)))))))))));

                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            arr_24 [i_0] [10] [i_1] [i_1] [10] [i_5] [i_5] = var_0;
                            arr_25 [10] [i_1] [11] [i_1] [i_0] = (((((11 ? (((var_8 ? 49638 : var_10))) : (arr_5 [i_1 + 4] [i_1])))) ? (min(((var_0 ? var_9 : 16443)), var_12)) : var_15));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_26 = (((arr_12 [i_1] [i_5] [3] [i_5] [i_2 + 1] [i_1]) ? (((arr_12 [i_1] [i_1] [i_1] [i_1 + 1] [i_2 + 2] [i_2 - 2]) >> (2412726459 - 2412726446))) : (((((min(16993, 16321))) != var_4)))));
                            arr_28 [i_7] [i_5] [i_1] [i_1] [i_1 - 1] [12] = (max(((((((arr_14 [i_0] [i_0] [i_0] [i_2 - 2] [i_2] [i_5] [i_7]) ? (arr_2 [i_1] [i_5]) : var_8))) ? var_2 : ((max(var_9, var_4))))), (min(((var_6 % (arr_20 [i_1]))), (var_3 ^ var_5)))));
                            var_27 -= min(((((min(var_13, (arr_18 [i_0] [i_1] [8] [i_1]))) / 16442))), ((((arr_6 [i_0]) / var_10))));
                            var_28 = (min(var_28, (arr_12 [8] [i_1] [i_2 + 2] [i_5] [i_5] [6])));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_29 = (((((((max(2147483648, 14151))) ? (arr_29 [i_0] [0] [i_0] [i_0] [i_0] [8]) : (var_13 % var_7)))) ? -var_9 : (max(-0, var_13))));
                            arr_31 [i_1] = (max(((-9936 ? ((58002514 ? 22 : -16443)) : (arr_7 [i_1] [i_2] [i_1 + 1] [i_1]))), var_9));
                        }
                    }
                    var_30 &= ((10030707597038347566 ? (arr_2 [i_1 + 2] [i_2 - 2]) : (((-7544299811402465298 ? 3852 : -36)))));
                }
            }
        }
    }
    #pragma endscop
}
