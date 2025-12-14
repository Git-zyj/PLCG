/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 *= (((arr_10 [i_0] [1] [i_1 + 2] [i_0]) ? 30 : ((((arr_11 [i_0] [i_1 - 1]) < (arr_11 [1] [i_1]))))));
                            arr_12 [i_0] [i_3] [i_0] [i_2] [i_0] [10] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((2802114521 ? (arr_8 [i_0]) : (var_16 ^ var_0))) : (arr_8 [i_3]));
                            arr_13 [1] [i_3] [0] [i_2] = ((-(arr_10 [0] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                        }
                    }
                }
                var_18 = ((+((+(min((arr_10 [1] [i_0] [i_0] [i_1]), (arr_8 [i_1 + 2])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                arr_19 [i_5] [6] [6] = var_16;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 &= min((min((arr_23 [i_7] [i_5 + 2] [i_4] [i_4]), var_13)), (!var_16));
                            var_20 = (((((+(min((arr_18 [i_5]), var_3))))) ? 15 : ((((min((arr_16 [1] [1]), (arr_16 [6] [6]))) != (arr_21 [i_6] [i_6]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_21 = (((((+((15062694170878226660 ? (arr_29 [i_9]) : var_14))))) ? ((~(arr_28 [i_8]))) : (arr_26 [i_9])));
                arr_31 [i_9] [i_9] = (arr_24 [i_9]);
                arr_32 [i_9] [i_9] [i_9] = (arr_24 [i_8]);
            }
        }
    }
    var_22 = ((max((!225), (!var_14))));
    #pragma endscop
}
