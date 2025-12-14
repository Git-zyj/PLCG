/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, ((max(((max((arr_9 [i_0] [10] [i_2] [i_3] [i_4]), ((var_6 ? var_2 : 131))))), (min((arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]), 2163907610953754297)))))));
                                var_11 += (((arr_1 [i_2]) ? var_0 : var_8));
                                var_12 = 853915611;
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((((((arr_4 [i_0] [5] [9]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [6] [6] [6])))) ? (2579134772719191922 / -103) : ((((((31 ? 2163907610953754298 : (arr_7 [i_0] [i_1] [i_0] [i_3])))) ? 1761115087 : (((arr_8 [i_0] [i_1]) ? (arr_6 [i_0] [i_1] [2] [i_3]) : -2163907610953754298)))))));
                                var_13 = var_2;
                            }
                        }
                    }
                    var_14 = (min(var_14, (((+(max((arr_4 [i_0] [i_1] [i_2]), (max(1811518399054580085, var_5)))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_15 ^= 7;
        var_16 = 31;
    }
    #pragma endscop
}
