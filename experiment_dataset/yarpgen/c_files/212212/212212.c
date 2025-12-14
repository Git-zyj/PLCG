/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(-31, var_7)) & ((min(var_2, ((var_11 ? var_10 : 53892)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((1 - 46), (((arr_2 [i_1]) ? -1 : (arr_2 [i_1])))));
                var_14 &= (max(31, (max(-74, 2147483647))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [9] [i_1] [i_2] = 237;
                    var_15 *= (!var_0);
                    arr_9 [15] [15] [18] [i_1] = (min((min((var_3 || 34), 0)), (!2144747347)));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_16 &= (max((((var_3 ? 65535 : -121))), var_1));
                    var_17 = ((~((var_11 & (arr_5 [i_0] [i_0])))));
                    arr_12 [i_3] [i_3] [i_1] [14] = var_3;
                }
                var_18 = (min(var_18, var_0));
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
