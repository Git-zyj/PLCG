/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 = 16657;
                            arr_10 [i_3] [14] [i_2] [i_3] [24] [i_3] = ((2089204934269606463 / (arr_9 [i_0] [i_1] [i_0] [16] [i_2])));
                            var_21 = (!-967);
                            arr_11 [i_2] = 0;
                        }
                    }
                }
                var_22 = (arr_8 [10] [i_1] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            {
                var_23 |= (max((((var_0 ^ var_16) ? -40 : var_3)), (max(var_2, ((-(arr_16 [0])))))));
                var_24 |= (((((~(!0)))) && var_10));
                var_25 = (-12144001691964583367 / -72);
                var_26 = (arr_1 [1]);
            }
        }
    }
    var_27 = ((max(26915, -125)));
    #pragma endscop
}
