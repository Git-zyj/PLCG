/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 - 1] = (var_9 ? (!var_7) : ((((arr_3 [i_0 + 1] [i_0 - 1] [i_1 + 1]) > (arr_4 [i_0 + 1])))));
                arr_6 [14] [i_1 + 2] |= (max(((max((arr_0 [i_1 + 2] [i_0 - 1]), 240))), (min(var_4, (arr_0 [i_1 + 1] [i_0 + 2])))));
            }
        }
    }
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_13 = (max((arr_15 [i_4] [i_2 + 2]), var_8));
                            arr_16 [i_2 + 1] [i_3] [i_5] [i_2] = (~1454011063);
                            arr_17 [i_2] [i_2] [i_5 + 1] = (~((~(max(var_2, var_4)))));
                        }
                    }
                }
                arr_18 [i_2] [i_2] = ((-(arr_12 [i_2] [i_3] [i_3])));
                var_14 = ((((max(26661, 795683084))) ? (((((min(1684445535, var_8))) ? 176 : var_3))) : (max(-4386036680787378253, 70))));
            }
        }
    }
    var_15 = (max((min(var_4, var_4)), ((max(var_10, var_8)))));
    #pragma endscop
}
