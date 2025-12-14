/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 *= 104;
                    arr_7 [i_0] [15] [i_2 + 1] = ((var_14 || ((((var_11 ? 0 : var_15))))));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_2 + 1] [i_3 + 1] = (((arr_10 [i_0] [i_1] [i_2] [i_2] [i_0 - 1] [i_3]) || var_11));
                        arr_12 [i_0] [1] [i_0 + 1] [8] = (arr_4 [i_0] [1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = arr_1 [i_0 - 1];
                        var_22 -= (-113 | 100663296);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 -= ((((arr_0 [i_0]) ? (arr_9 [i_0] [i_0] [i_2] [i_4] [i_5] [i_5]) : 100663275)));
                            var_24 = var_19;
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((var_17 ? (~var_15) : ((max(-63, 1))))) * (var_19 > var_4)));
    #pragma endscop
}
