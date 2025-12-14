/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, 1096836322));
                                arr_15 [i_0] [i_1] [i_0] = ((33423360 ? (min(8243535284811243915, 41636)) : 996526191));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_2] |= 16;
                }
            }
        }
    }
    var_16 = ((235 ? var_11 : (((((var_6 ? -22880 : var_8))) ? 8243535284811243925 : 7473))));
    var_17 = var_13;
    #pragma endscop
}
