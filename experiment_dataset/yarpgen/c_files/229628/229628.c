/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 ^= var_17;
                                arr_16 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] = (((~-60) ? (arr_13 [i_0] [17] [14] [i_3 - 1] [i_4 + 1]) : var_6));
                                var_19 *= ((min((min(var_3, var_8)), var_4)));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [12] |= ((((min(-var_4, 59))) ? (min(((((arr_0 [7]) | var_10))), var_2)) : (arr_5 [i_2])));
                    arr_18 [i_0 + 1] [i_0 + 1] [i_0] = (min(var_8, (((((((arr_5 [i_0]) << (var_8 - 6917949613299359223)))) == (arr_6 [i_0]))))));
                    arr_19 [i_0] [16] [i_2] = (min(var_5, (max(((max(-72, (arr_11 [i_0] [12] [12] [12])))), -var_5))));
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
