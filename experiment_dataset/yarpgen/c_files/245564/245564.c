/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [16] [8] [i_1] &= (min((((-2897971151384698863 ? var_2 : (arr_5 [i_0] [i_0])))), (((((255 ? 240 : (arr_3 [i_0] [i_0])))) ? 3235323770 : (arr_1 [i_1 + 1] [i_0 - 1])))));
                var_15 = var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 ^= (((536866816 ? 17 : ((41672 ? 0 : 7)))));
                            var_17 = (arr_0 [i_0]);
                            var_18 = -30652;
                        }
                    }
                }
                arr_14 [i_1] = 9478;
            }
        }
    }
    var_19 = (!var_6);
    #pragma endscop
}
