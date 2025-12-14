/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((var_6 << (((min(((10697 ? -10681 : -10681)), 10697)) + 10690))));
                            var_13 += -var_6;
                            var_14 = (max((arr_1 [1]), (arr_4 [i_0] [i_0] [i_3])));
                            var_15 = (~var_2);
                        }
                    }
                }
                var_16 = (~10681);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_17 *= (((((max(4294967270, -8261007644727785875)))) + ((26 ? ((((arr_14 [i_4] [i_5] [i_6]) > var_12))) : (arr_14 [i_4] [11] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_18 &= (~2323887793025115399);
                                var_19 = 4294967270;
                                var_20 = var_10;
                                arr_22 [i_4] [i_6] [i_6] [i_5] [i_8] |= (~(~var_10));
                            }
                        }
                    }
                    var_21 = (arr_12 [i_4]);
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                var_22 |= ((max(0, var_11)));
                                arr_31 [i_4] [i_10 - 1] [i_4] [i_4] [14] [8] = (i_4 % 2 == 0) ? ((((7846 % -14403) % ((((min(3493814235, var_4)) <= (((-(arr_4 [i_4] [i_10] [i_4])))))))))) : ((((7846 % -14403) * ((((min(3493814235, var_4)) <= (((-(arr_4 [i_4] [i_10] [i_4]))))))))));
                                var_23 -= -10681;
                                var_24 *= (~12626);
                                var_25 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_26 = (arr_12 [i_4]);
                                var_27 = (max(var_27, ((((-(max(32, var_11))))))));
                                arr_37 [14] [i_5] [15] [i_12] [i_4] [i_12] = ((var_9 < (arr_12 [i_4])));
                                var_28 = (max(var_28, ((((-18787 * 86) ? (max(((max(-64, (arr_0 [i_9])))), ((232 ? (arr_26 [7]) : 3487)))) : ((((arr_4 [i_9] [8] [i_13]) >= (max((arr_20 [i_4] [i_5] [i_9] [i_5] [i_13] [i_9] [10]), -1))))))))));
                            }
                        }
                    }
                }
                arr_38 [i_4] = 58;
                var_29 = (min((arr_0 [i_4]), (arr_25 [i_4])));
            }
        }
    }
    var_30 *= ((~(max(var_8, var_4))));
    var_31 = ((-(~var_4)));
    #pragma endscop
}
