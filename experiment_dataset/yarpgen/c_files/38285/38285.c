/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_7, -48));
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [8] [i_1] = (max(48, (max((max(-48, -1602)), 1626))));
                    arr_10 [i_0] [i_0] = ((~((0 ? 53 : 49))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_3] = 8141676907086457258;
                                arr_17 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0] = ((-44 && (arr_2 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
