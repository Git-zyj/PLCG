/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_16 = -885202419705651557;
                    var_17 = (max((max((arr_9 [i_1] [i_1]), (arr_5 [i_0] [i_1]))), ((max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 ^= (~7125715693767583924);
                                var_19 = (min(var_19, (max((!10211880086927785787), ((-39 ? 1 : 9223372036854775807))))));
                                var_20 = (max((arr_3 [1] [i_2] [i_2 + 2]), ((var_2 ? var_14 : var_5))));
                                var_21 = (min(var_21, (arr_1 [i_2 + 3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [i_1] [i_1] [i_1] = (arr_22 [i_1] [i_1]);
                                var_22 = var_15;
                                var_23 ^= (arr_13 [i_2] [i_5] [2] [i_5] [i_6] [i_5] [i_6]);
                                var_24 = (((-63 ? 4106643325548949678 : 101)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((-459005186111179952 ? var_11 : 1)));
    #pragma endscop
}
