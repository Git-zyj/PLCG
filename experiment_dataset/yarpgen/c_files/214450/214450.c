/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (min((((((min(var_5, var_1))) && var_8))), (min((var_9 > var_2), var_3))));
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = ((((arr_2 [i_0 + 3]) && (arr_2 [i_0 - 2]))));
                            var_22 = var_2;
                            var_23 = var_2;
                            var_24 = var_1;
                            var_25 = min(var_7, (arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 1]));
                        }
                    }
                }
                arr_14 [i_0 + 3] = (min((var_11 ^ var_7), (arr_0 [i_0 - 2] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_26 = ((13 + 0) / (min((arr_6 [i_0]), 4294967278)));
                            var_27 ^= (min(0, 7121687006430067860));
                            var_28 = var_5;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
