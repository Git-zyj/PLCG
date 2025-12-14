/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (!var_1);
    var_12 = (min(var_12, ((max(((((min(var_3, var_1))) ? (var_7 / var_6) : ((1189119395 ? var_9 : 10)))), var_7)))));
    var_13 = var_10;
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = 192;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 ^= var_3;
                                var_16 = max(var_1, (min(150, (arr_8 [8] [i_3] [i_4]))));
                                var_17 = (min((min((arr_12 [i_0] [i_1] [i_2] [11] [i_4]), (arr_4 [i_0] [i_3]))), (arr_8 [i_0] [i_1] [9])));
                                arr_13 [i_0] [i_0] [i_0] [10] [i_0] [i_0] = 82;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
