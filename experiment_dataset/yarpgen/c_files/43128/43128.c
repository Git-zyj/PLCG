/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = (((((((var_14 * (arr_1 [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : var_7)) * (min(188, ((var_8 ? (arr_0 [i_0]) : (arr_2 [i_0])))))));
                var_19 = arr_6 [i_0] [i_1 - 1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = var_16;
                            var_21 = ((((((((~var_12) + 2147483647)) << (68 - 68)))) ? (((((255 ? (arr_14 [i_0] [i_0]) : 220))) ? (((arr_14 [i_2] [i_3]) >> (188 - 186))) : ((var_0 ? 102 : var_1)))) : (arr_10 [6] [i_0] [6])));
                            arr_15 [i_0] [9] = var_12;
                            arr_16 [i_0] [2] [i_1] [i_0] = ((!(~185)));
                            var_22 += (min((((arr_14 [i_0] [3]) >> ((196 ? var_6 : (arr_4 [i_3] [8]))))), (((((arr_12 [8] [8] [5] [5] [i_3] [i_3]) || (arr_2 [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
