/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 -= 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((-((608282198296276033 ? 1 : 1))));
                                var_17 = (((max((min(0, var_9)), (arr_9 [i_1] [i_2] [i_1] [i_3])))) ? (((((-17261347 > (arr_8 [i_2] [i_3] [i_4 - 4]))) || ((var_4 && (arr_0 [i_0])))))) : (var_7 / var_1));
                            }
                        }
                    }
                    var_18 = var_2;
                    var_19 ^= (((arr_12 [i_0] [i_1] [6] [i_2]) + (arr_5 [i_2] [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
