/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 += (-var_8 ? (~var_5) : var_2);
                var_14 ^= (max((((var_1 << (((arr_4 [2]) - 71))))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_4 [2])))));
                var_15 = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = 32767;
                                var_17 = (max((((arr_11 [i_3 + 1] [11] [i_3] [i_3 + 1]) + (arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))), (((!(arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                                var_18 = 1;
                                var_19 = ((var_2 ? ((((arr_3 [i_0 + 1] [i_0 - 1]) * (((var_2 == (arr_3 [4] [i_1]))))))) : 262571130510579122));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((max(var_5, 127))));
    var_21 = (((max(((62110 ? 12 : 12)), 20)) < var_8));
    var_22 = var_5;
    #pragma endscop
}
