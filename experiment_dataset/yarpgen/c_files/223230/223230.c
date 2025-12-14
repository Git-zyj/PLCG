/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = var_4;
                var_19 = (min((arr_4 [i_0]), (arr_4 [0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = var_13;
                            var_21 = (((1 == 2142608111) ? ((var_3 * (arr_18 [i_3] [1] [i_3 + 1] [i_3 - 2] [i_4]))) : (((-9223372036854775807 - 1) ? 17573394998645519249 : 7))));
                        }
                    }
                }
                var_22 = (((600954811 ? 3279813142867433395 : 127)));
                var_23 = ((max(var_3, ((max(var_15, var_11))))));
            }
        }
    }
    var_24 = ((~(min(var_2, 2106974948))));
    #pragma endscop
}
