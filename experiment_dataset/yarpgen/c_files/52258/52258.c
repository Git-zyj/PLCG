/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [2] [i_2] [i_2] [i_0] &= var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((+((((arr_7 [i_0] [i_3 - 1] [i_3] [i_3 - 1]) ? -201909123 : 2366783779)))));
                                var_15 = (min(var_15, (((584246713 ? (arr_3 [i_3 - 1]) : ((4294967295 ? ((var_8 ? 1 : 12476039594024683760)) : (var_10 / var_3))))))));
                                arr_12 [i_0] = var_10;
                            }
                        }
                    }
                    var_16 = var_13;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_17 [i_6] [i_6] = -2360494188;
                var_17 = (~var_12);
            }
        }
    }
    #pragma endscop
}
