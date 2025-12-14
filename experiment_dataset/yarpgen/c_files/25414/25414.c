/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_10 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4 - 3] = (((((-16470 ? -3943244904921898573 : -24))) || (56567 | 1)));
                                var_16 = (min(1, 1));
                                arr_11 [4] [i_1] [i_2] [i_1] [6] [i_4] = (56567 <= -5264549703023328961);
                            }
                        }
                    }
                    arr_12 [i_0] [6] [i_1] [i_1] = (((((((((arr_0 [2]) ? 5264549703023328961 : 1))) ? var_12 : 0))) ? ((0 ^ ((0 ^ (arr_0 [i_1]))))) : (((-634029335 & (~var_4))))));
                    var_17 = ((-(((0 != ((((arr_5 [i_1] [i_1] [i_1]) < 3034224493))))))));
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
