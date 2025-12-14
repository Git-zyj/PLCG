/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = (min(var_15, (2050 > 18340)));
                    var_16 = ((var_8 > (arr_5 [i_0] [i_0] [i_0] [i_0])));
                    arr_7 [i_1] [i_0] [i_0] = (arr_4 [i_0] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] [i_0] [i_1] |= ((-(arr_0 [i_3])));
                    var_17 ^= (arr_0 [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((-18323 < (arr_12 [i_4] [i_1] [i_4 + 1] [i_4 + 2] [i_4]))))));
                                arr_18 [i_5] [i_1] [i_1] [i_1] [i_0] |= (((((-(arr_2 [i_0])))) ? (((21784 && (arr_13 [i_0] [i_5])))) : ((-6424 ? -1 : -30316))));
                                var_19 = (((arr_17 [i_4] [i_4 + 1] [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4]) ? ((((arr_6 [i_3] [i_4 + 1] [i_5]) < -325))) : ((-17678 ? -32755 : (arr_1 [i_0])))));
                                var_20 = (min(var_20, ((((((11915 ? 32154 : -25354))) ? ((32767 ? -9742 : var_10)) : (arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 1]))))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_21 = 25651;
                        var_22 = ((316 / (arr_4 [i_0] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_23 *= (((arr_16 [i_0] [i_0] [i_1] [i_3] [i_7] [i_7]) ? (((-18340 != (arr_13 [i_0] [i_1])))) : (arr_23 [i_3] [i_3])));
                        var_24 ^= (-21445 % 28363);
                    }
                    var_25 *= ((15088 | (arr_17 [i_0] [i_0] [i_0] [i_1] [i_3] [i_0] [i_3])));
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_29 [i_0] [i_9] [i_9] [i_9] = 2043;
                            var_26 = ((-(((arr_21 [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_9]) ^ (arr_22 [i_0] [i_0] [i_8 + 1] [i_8 + 1] [i_9 + 1])))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] = ((((12429 ? 15056 : -28361)) > ((max((max(7595, var_13)), 22021)))));
                            var_27 = (min(var_27, ((min(((((arr_13 [i_8 + 1] [i_8]) || 17570))), ((32757 ? -28363 : -4651)))))));
                        }
                    }
                }
                var_28 -= ((((((arr_3 [i_1]) ? (arr_28 [i_0] [i_1] [i_1]) : (arr_3 [i_1])))) ? ((15088 ? -var_13 : var_5)) : (-18472 || -2223)));
                var_29 = min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (((var_6 <= (var_1 >= var_2)))));
            }
        }
    }
    var_30 = (((max(var_12, -32753)) | -23433));
    #pragma endscop
}
