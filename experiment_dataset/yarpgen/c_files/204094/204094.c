/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 44;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 ^= var_13;
                            arr_10 [i_3] [i_3] [i_2] [i_3] [9] = (((min(4963210331375863952, 13483533742333687661)) <= (13483533742333687663 || 1)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = (arr_0 [i_0 - 4]);
                                var_18 += 10737297831328454691;
                            }
                        }
                    }
                }
                var_19 = (arr_6 [i_0 + 4] [i_0 + 4] [i_0 + 4] [7]);
                arr_19 [i_0] [i_1] [i_0 - 4] = (min(13483533742333687664, 4963210331375863944));
            }
        }
    }
    var_20 |= (var_13 - var_10);
    #pragma endscop
}
