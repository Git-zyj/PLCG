/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_4;
    var_17 = (max(var_17, (((-65319 & ((min(var_14, 1173130430))))))));
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = (((((min(0, (arr_4 [i_0]))))) ? 3121836866 : ((((arr_5 [i_1] [i_1]) ? 7 : 65319)))));
                            var_20 = (max(((((arr_5 [i_1 + 4] [i_3 - 2]) || (arr_5 [i_1 + 4] [i_3 + 1])))), (min((max(5154738844361390681, 45732)), (6359 - var_11)))));
                            var_21 = (((var_2 ? (arr_4 [i_0]) : var_5)));
                        }
                    }
                }
                arr_9 [i_0] [i_1] [i_1] = (max((((1 >= 55771) ? ((max((arr_7 [i_1] [i_1] [i_1] [i_0] [i_0]), 45732))) : ((0 ? var_8 : (arr_5 [i_0] [i_0]))))), (((max((arr_2 [i_0]), var_10))))));
            }
        }
    }
    #pragma endscop
}
