/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 <= ((var_12 ? ((var_5 ? var_15 : 3591271921)) : 240))));
    var_17 += var_9;
    var_18 = var_13;
    var_19 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 *= (var_11 % var_4);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_6 [i_0] [9] [i_0] [i_2] = -var_5;
                    var_21 ^= (((arr_1 [i_1] [i_1]) == (-239 + 240)));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_22 = (max(703695374, 268435448));
                        var_23 = ((((-303211965798587882 ? 411918235 : -303211965798587882)) <= ((max(16, 411918235)))));
                        arr_10 [i_1] [i_1] [i_1] [8] &= (((((-303211965798587882 ? (arr_3 [i_3 + 1] [i_3 - 2]) : (arr_3 [i_3 - 3] [i_3 - 2])))) ? ((((arr_8 [i_3 + 1] [8] [i_3] [i_3 - 1] [i_3 - 1]) - (arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2])))) : var_10));
                        var_24 ^= ((var_5 % ((((var_11 <= (arr_3 [i_1] [i_1]))) ? ((((arr_8 [i_0] [i_0] [i_2] [11] [4]) & var_13))) : var_10))));
                    }
                    var_25 ^= (((arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]) <= (min((((!(arr_3 [i_1] [i_2])))), (16191333829654655157 % var_13)))));
                }
                arr_11 [i_1] |= (((arr_7 [i_1] [i_0] [i_1] [i_1]) % (((+(max((arr_1 [i_0] [3]), -7064992843841867836)))))));

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_26 -= 52;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_6] [9] [i_0] [i_0] [6] = (((((min(16191333829654655157, var_3)) - 9223372036854775807)) <= (((131072 ? (arr_3 [i_6 - 3] [i_1]) : (arr_4 [i_0] [i_4] [i_6]))))));
                                arr_22 [4] [i_1] [i_6] [i_5] [i_6 - 1] [0] [i_0] |= var_1;
                                arr_23 [i_0] [1] [i_0] [1] [i_6] [i_0] = (min(((-22 ? 2578598051825597935 : 226)), (arr_0 [i_5])));
                                var_27 += (703695404 <= 23);
                            }
                        }
                    }
                }
                arr_24 [i_0] = var_1;
            }
        }
    }
    #pragma endscop
}
