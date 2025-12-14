/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = var_17;
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (arr_2 [10] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2] [i_0] = -var_12;
                                var_21 = ((((((((arr_0 [i_2] [i_2]) | var_5))) < (arr_1 [i_0]))) || (arr_0 [i_0] [i_4])));
                                var_22 = var_9;
                            }
                        }
                    }
                    var_23 -= var_9;
                }
            }
        }
    }
    var_24 *= (max((~var_6), var_16));
    var_25 = var_1;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_26 = (max(var_26, (!-10)));
                    var_27 += 10;
                }
            }
        }
    }
    #pragma endscop
}
