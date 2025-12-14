/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((((65535 / var_3) ? (30384 - 32768) : (var_1 + 2047)))) ? ((~(((arr_10 [i_0] [i_0] [i_0] [16]) ? var_11 : 4294967295)))) : (arr_3 [i_1 - 1] [i_1 - 1] [i_0]))))));
                                var_17 *= (min((((((161 ? 1 : 1)) == 1))), 838658627530758957));
                                arr_13 [i_1] [i_3] [i_2] [i_3] [i_4] = (-32767 - 1);
                                var_18 = var_8;
                            }
                        }
                    }
                    var_19 = var_0;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_0] &= (((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) >> (((arr_9 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]) - 10949))));
                    arr_18 [i_0] [i_1] [i_0] = (19538 || (arr_11 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]));
                    var_20 = (((arr_8 [i_1] [i_1] [i_1 + 1]) >= (arr_8 [i_1 + 1] [i_1] [i_1 + 1])));
                    var_21 = (arr_7 [i_0] [i_1] [i_5]);
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] = ((max(var_13, ((59298 & (arr_14 [i_1] [i_1] [i_6] [i_6]))))));
                    var_22 = 65527;
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = ((~(arr_29 [i_9] [i_9] [i_9 - 2] [i_9 + 1] [i_7])));
                                var_24 = (min(var_24, ((((arr_6 [i_9 + 2] [i_1 + 1]) ? (arr_0 [i_9 - 2] [i_1 - 1]) : (arr_11 [i_9] [i_0] [i_0] [i_0]))))));
                                var_25 = (((arr_9 [i_0] [i_1] [i_8] [i_9]) ? 1485821010 : 114));
                            }
                        }
                    }
                    var_26 *= -17608085446178792658;
                    var_27 = ((32738 ? 5652113843364185068 : 16396211798622686861));
                    var_28 = 5091655630400749475;
                }
                arr_30 [i_1] = (((((((1004221238 ? 46 : 37581)) < (arr_8 [i_0] [i_1 + 1] [i_0])))) ^ 2147483620));
            }
        }
    }
    var_29 = (max(var_29, ((((var_10 != var_7) ? (((1 < 4294967285) / var_2)) : var_0)))));
    #pragma endscop
}
