/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, 1));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = var_6;
                        var_19 = (max(var_19, ((((((!1073610752) + 122)) >= (0 | -89))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((-9 ? ((-(arr_7 [i_3] [i_3] [i_3 + 1] [i_3]))) : ((9 << (6138440277738855478 - 6138440277738855474)))));
                        var_20 = (((arr_3 [i_3] [i_3]) < ((1 ? (var_11 / -9) : 5028031430875759748))));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((var_10 & (min((var_3 - 1674), var_8))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_0 + (((((max(var_3, 18091)))) + (((arr_4 [i_0]) - 1))))));
                        arr_16 [i_1] [i_1] = (min(-2873231904001169569, 52));
                    }
                    var_22 = (min((arr_3 [i_0] [i_0]), (32751 | 55)));
                    arr_17 [i_0] [i_0] [i_0] = var_6;
                    var_23 = (max(-31, 12283512066395889326));
                }
                var_24 = (min(((5 ? var_5 : -9)), 1920124064));
            }
        }
    }
    var_25 = (min(var_25, (((~(var_10 % 3123258470676215555))))));
    var_26 *= var_8;
    #pragma endscop
}
