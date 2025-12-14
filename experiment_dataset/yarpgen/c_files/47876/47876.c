/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((max(var_4, var_6)) != var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 ^= var_12;
                    var_20 = var_11;
                    var_21 -= (((arr_0 [i_0 - 2] [i_0 - 1]) <= var_10));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_22 = (max(var_22, (max(((~(max((arr_15 [i_3]), var_11)))), (((!((max(var_8, 54712))))))))));
                    var_23 -= (arr_16 [i_3] [i_4] [i_5] [i_3]);
                    var_24 |= var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_25 = (max((max(var_2, (arr_19 [i_7 + 1] [i_7 + 2] [i_7] [i_7] [i_7 - 2]))), ((max(((!(arr_22 [i_3] [i_4] [i_5] [i_6] [i_7]))), (710261870 || var_17))))));
                                var_26 = max(var_9, ((max(41517, -8946715305692849658))));
                            }
                        }
                    }
                    var_27 = (min(var_27, ((+(((arr_21 [i_3] [i_3] [i_4] [i_5] [i_5]) / var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
