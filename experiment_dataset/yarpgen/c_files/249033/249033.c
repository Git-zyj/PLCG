/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 ^= (min((arr_3 [i_0] [i_1] [i_2]), ((13 ? 221 : 113))));
                                arr_13 [i_0] [6] [i_3] [i_4] = arr_4 [i_1];
                            }
                        }
                    }
                    var_19 = ((-(((arr_0 [i_2]) | (arr_7 [i_0] [i_0] [i_0])))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_20 = ((var_0 ? ((((34 ? 34 : 14)) | var_7)) : (~var_11)));
                        var_21 = (var_9 && var_15);
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((~(229 | var_0)));
                    }
                }
            }
        }
    }
    var_22 = ((((var_11 ^ (var_17 + var_0))) < var_16));
    #pragma endscop
}
