/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((min(((var_9 ? var_7 : 25998)), var_6))), (max((~var_1), (var_7 && var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((var_6 ? ((min(var_7, (arr_11 [1] [i_3] [i_2] [i_1] [8])))) : ((max(var_14, (arr_8 [i_3]))))))) ? ((min(var_12, (arr_4 [i_2 + 2] [7] [i_2])))) : (~15813468200185315522)));
                            arr_14 [i_0] [1] = (((((~(arr_2 [i_1 + 2] [i_1])))) ? ((0 << ((((arr_6 [i_0]) <= var_13))))) : var_4));
                            arr_15 [3] [i_0] = ((max((max((arr_7 [i_2]), var_14)), (arr_12 [i_1 - 1] [5] [i_2 + 2] [i_2] [i_1 - 1] [i_2 - 1]))));
                        }
                    }
                }
                var_17 = ((((min((arr_2 [i_0] [1]), (arr_2 [2] [i_0])))) & 25998));
                var_18 = max(-94, var_9);
                var_19 -= (max(((min(((max(-2, (arr_9 [2] [i_1] [i_1] [i_0])))), (min((arr_5 [i_0] [i_0] [i_1]), 65535))))), ((4193280 ? 15813468200185315495 : 65530))));
            }
        }
    }
    var_20 += ((var_1 ? var_14 : ((var_2 ? ((var_14 ? var_7 : var_7)) : ((min(-11016, var_7)))))));
    var_21 = (~((max(4028, var_11))));
    var_22 = ((!(((0 ? 4290774026 : 39505)))));
    #pragma endscop
}
