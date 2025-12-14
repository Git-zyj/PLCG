/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 += (((((65535 ? 31744 : 252))) ? 268434944 : (((var_4 ? 252 : 65535)))));
                    var_21 = (9205357638345293824 ^ (((max(1, 0)))));
                    arr_9 [i_1] [i_1] [i_0] = 245;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = (((var_6 << (-31 + 40))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] = 22;
                                var_22 = (!30);
                            }
                        }
                    }
                    var_23 = ((!((((0 ? var_13 : var_0))))));
                }
            }
        }
    }
    var_24 = (max(var_24, var_11));
    #pragma endscop
}
