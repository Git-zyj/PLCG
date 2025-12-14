/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [13] [i_0] [6] = (arr_4 [i_1] [i_0]);
                var_14 = (((arr_0 [i_1]) && ((min((min((arr_3 [i_0]), var_8)), ((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))))))));
            }
        }
    }
    var_15 = (min(var_15, (var_1 + var_6)));
    var_16 = (((((~((var_7 << (var_3 - 16355290599571195437)))))) & (((((var_3 ? var_0 : var_8))) ? var_5 : ((var_1 ? var_7 : var_1))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = (min((arr_18 [i_2] [i_3] [i_4] [i_4] [i_6]), var_9));
                                var_18 = var_12;
                                var_19 = (arr_9 [i_2]);
                            }
                        }
                    }
                    var_20 = arr_12 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
