/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = (((((arr_8 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]) ^ ((var_8 ? 1848 : var_10)))) ^ (max(((8697 ? -81 : 13814)), (!var_5)))));
                            var_12 = ((((max((arr_3 [i_0] [i_0]), ((110 ? 18446744073709551615 : 13822))))) && ((!(arr_2 [i_1 - 1])))));
                        }
                    }
                }
                var_13 += (min((((max((arr_1 [6]), 0)))), (65523 / 51697)));
                arr_9 [i_0] = ((+(((((arr_7 [i_0] [5] [i_0] [i_1]) ? var_0 : var_2))))));
            }
        }
    }
    var_14 -= var_9;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                {
                    var_15 &= (((((13823 ^ ((((arr_12 [i_6]) ? 4294967286 : var_1)))))) ? 35 : (arr_12 [i_6])));
                    var_16 = var_0;
                    var_17 = (max(28454, 50078));
                }
            }
        }
    }
    var_18 = (max(var_18, var_7));
    #pragma endscop
}
