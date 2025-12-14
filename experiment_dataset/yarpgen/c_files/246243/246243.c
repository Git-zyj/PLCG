/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_1] [11] = 72;
                            var_13 ^= ((~(arr_1 [i_1])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = (((214 ? 13772 : (~0))) >> (((((((var_9 ? 19742 : (arr_14 [i_6] [7] [i_0])))) ? 883119515 : 1)) - 883119514)));
                                var_15 = (min((arr_11 [1] [i_1] [i_4] [i_6]), var_8));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] &= ((((var_0 << (((arr_11 [i_1] [i_1] [i_1] [i_0]) - 65)))) >> (var_5 - 1408876217)));
            }
        }
    }
    var_16 = 9687952861354524162;
    #pragma endscop
}
