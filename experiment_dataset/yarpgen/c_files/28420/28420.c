/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_4 ? var_3 : var_1)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3] [i_0] = ((((+((max((arr_4 [i_2] [i_0]), var_6))))) > ((var_10 >> (((arr_4 [i_1] [i_3]) - 89))))));
                            var_17 = (max(var_17, (((((min(114, 114))) ? ((max(var_0, var_2))) : (((((arr_4 [i_1] [i_2]) <= var_4)) ? var_11 : (((arr_4 [2] [i_2]) | (arr_4 [i_3] [i_2]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 = (((var_4 < var_0) > 37));
                            var_19 -= arr_11 [i_0] [16] [i_0] [i_5];
                            var_20 *= (max((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2]), (((arr_2 [i_0 - 1]) * (arr_2 [i_0 - 1])))));
                            var_21 -= (43 - 195);
                        }
                    }
                }
                arr_14 [i_0] [11] = var_1;
            }
        }
    }
    var_22 = min(199, 53);
    #pragma endscop
}
