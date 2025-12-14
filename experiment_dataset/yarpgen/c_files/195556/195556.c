/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (arr_0 [i_0 + 1]);
                                arr_11 [i_0 - 1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_1] = ((((195 ? 2765702924 : 4234383089)) / var_17));
                                var_19 = ((arr_4 [i_0] [i_0] [i_2]) ? 2857802639247827175 : (arr_3 [i_0]));
                            }
                        }
                    }
                    arr_12 [i_0 + 1] [i_1] [i_0 + 1] [7] = var_17;
                }
            }
        }
    }
    var_20 -= var_0;
    #pragma endscop
}
