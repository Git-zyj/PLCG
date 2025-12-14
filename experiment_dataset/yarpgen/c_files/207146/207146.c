/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = max((10978140496420164993 | -89014933), (var_9 <= 59));
                                arr_12 [i_0] [8] [i_1] [i_3] [i_4] [i_3] [i_0] = (((((min(4235, 49764)))) > (((arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [i_0 + 2]) % ((var_1 ? 123 : 16974850215433124309))))));
                                var_14 = (min(var_14, (((~((min((arr_4 [i_3] [i_1]), 10728899133707430436))))))));
                                arr_13 [i_1] [i_1] = ((((max(((-5251303052740557733 ? (arr_9 [i_4] [i_1] [i_2] [i_1] [i_0 - 1]) : 254)), ((((arr_1 [i_1] [i_2]) ? -22991 : var_1)))))) ? (((var_5 % var_7) ? -28909 : (max(10102310985308490801, (arr_0 [i_0]))))) : (((((196 ? 1729615801 : var_1)) | (((-(arr_0 [i_0])))))))));
                            }
                        }
                    }
                    var_15 = (((arr_8 [i_0] [i_0 - 2] [i_0] [i_0]) ? ((var_3 ? (arr_6 [i_0 + 1]) : ((0 ? 75 : 2565351495)))) : (((arr_2 [i_0 - 1]) ^ 1729615801))));
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] [1] |= var_1;

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_21 [i_1] = var_10;
                        var_16 = (((((min(var_5, (arr_18 [i_0 - 1] [i_1])))) ? var_6 : var_5)) & (((var_0 > (arr_0 [i_5 + 1])))));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_24 [i_7] &= 12286481433243931520;
                        var_17 = ((!(var_3 != -10978140496420164993)));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_0 - 1] [i_1] [i_1] [i_0] = (arr_3 [i_5] [15]);
                        var_18 = ((~((((10431602734486445774 ? 4222 : var_7))))));
                    }
                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        var_19 = 1729615801;
                        arr_30 [i_1] [i_9] [i_5] [i_5] [i_1] [i_1] = ((!((min(var_10, (((arr_8 [i_0 - 1] [i_1] [i_5 + 2] [9]) ? 2565351495 : 12286481433243931520)))))));
                        arr_31 [i_0] [i_1] [i_9] [i_9] &= ((753459993128890462 ? (arr_4 [i_9] [i_0]) : (((arr_29 [i_5] [i_5] [i_5 + 1] [i_0] [i_0 - 2] [i_0]) ? (arr_29 [i_0] [14] [i_5 + 1] [i_1] [i_0 - 2] [i_0]) : var_1))));
                        var_20 = (min(var_20, (max(((min(((196 ? (arr_6 [i_0]) : (arr_19 [i_0]))), (arr_26 [i_1])))), ((-(arr_29 [i_0] [i_5 + 1] [i_5 - 1] [i_9] [i_9] [i_9 - 3])))))));
                        var_21 = (arr_3 [i_5 + 1] [i_9 - 3]);
                    }
                }
                arr_32 [i_0] [i_1] = arr_15 [i_1] [i_1] [i_0];
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
