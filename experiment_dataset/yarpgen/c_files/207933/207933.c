/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 66;
    var_19 = ((!(((var_5 ? ((var_14 << (var_4 - 2766860995))) : (!1))))));
    var_20 = ((((min(-2382802175495221636, 65528))) / (min((((4294967282 ? var_2 : var_17))), var_11))));
    var_21 = ((11016 ? -4 : 16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [14] = (arr_3 [i_0 - 1] [24] [24]);
                arr_6 [i_1] |= (((~var_4) - (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                var_22 ^= ((max((min(var_14, -32486)), (max((arr_0 [i_0]), var_4)))) - 2386666577);
                var_23 = ((((-(arr_2 [1]))) / -1909716897));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_1] [i_2] [1] = ((!((min((arr_11 [i_0 - 1] [i_0 - 1] [i_1] [5] [i_3] [5]), 54520)))));
                            arr_13 [i_0] [0] [i_2] [i_3] = ((((!(arr_3 [i_0 - 1] [11] [i_3]))) ? ((((((arr_8 [i_0] [i_0]) ? -1272469770 : (arr_3 [i_0] [i_0] [21]))) - var_13))) : ((~(arr_7 [i_0] [i_2] [i_3])))));
                            var_24 = ((!(~54517)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
