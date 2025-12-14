/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((((min((arr_4 [i_2]), ((min(13758, (arr_14 [i_0] [i_1] [i_0]))))))) ? -118 : ((((arr_0 [i_4]) < -93))))))));
                                var_12 = (min(var_12, (((((((2032 & var_10) && ((max(8474566288517573840, 3959709761))))))) <= (((arr_9 [10] [12] [i_2] [i_3 - 1]) ? (((min(var_9, var_0)))) : ((3576224069 ? 112 : (-9223372036854775807 - 1)))))))));
                                var_13 = (i_2 % 2 == 0) ? (((((~(arr_11 [i_4] [i_2] [i_0] [i_3 + 2] [i_3 - 1] [i_2] [i_0]))) << (var_1 - 3622131446)))) : (((((((~(arr_11 [i_4] [i_2] [i_0] [i_3 + 2] [i_3 - 1] [i_2] [i_0]))) + 9223372036854775807)) << (((var_1 - 3622131446) - 1)))));
                                var_14 ^= -6345235926882530197;
                            }
                        }
                    }
                    var_15 = (((((min(-5352411554701633054, ((-743017340 ? 39 : 6345235926882530188)))) + 9223372036854775807)) << ((((min(34, (arr_1 [i_2 - 1])))) - 33))));
                    var_16 = 1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = ((min(-104, (arr_2 [i_6] [i_2] [i_1]))));
                                var_18 ^= (((((min(31, 127))) ? (arr_11 [i_0] [i_0] [i_0] [i_5] [i_6 - 2] [i_0] [i_2]) : ((((-73186283395019739 < (arr_13 [i_0]))))))));
                                var_19 = (((-44 && (arr_0 [i_5]))));
                                var_20 = var_1;
                                var_21 -= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            {
                var_22 = (min(var_22, (((((min((!-18099), ((var_10 ? (arr_23 [i_8]) : var_3))))) ? ((-(((arr_24 [i_7] [i_8 - 1]) ? var_7 : (arr_20 [i_7]))))) : (arr_24 [i_7] [i_8 + 1]))))));
                var_23 = ((28672 < (arr_23 [i_7])));
                var_24 ^= ((~((~((-(arr_20 [i_7])))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_25 = ((~((max(743017314, 260)))));

                            for (int i_11 = 0; i_11 < 22;i_11 += 1)
                            {
                                var_26 |= ((((max(((((arr_31 [2] [i_7]) != 38))), (arr_32 [i_7] [i_8] [i_9] [i_11])))) ? var_3 : (((((arr_23 [i_8]) / var_7)) / 1))));
                                var_27 -= (min((3947109115 & 22502), (5707136745255976311 < var_1)));
                                var_28 ^= (arr_27 [i_11] [i_7] [i_9 + 1]);
                                var_29 = (min(var_29, var_5));
                                var_30 = (((~743017364) ? 249 : (((1 <= (arr_24 [i_10] [i_10]))))));
                            }
                        }
                    }
                }
                var_31 &= (arr_24 [4] [i_8]);
            }
        }
    }
    var_32 = (((min(var_9, 477759913))));
    #pragma endscop
}
