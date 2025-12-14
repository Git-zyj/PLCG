/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_8 + (9223372036854775807 || var_5))), ((((!-9223372036854775790) || 23133)))));
    var_16 = ((var_7 % (((var_9 | var_14) ? (var_6 | var_3) : (var_3 + 2518457360)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = ((((((arr_1 [i_3] [i_0]) ? -14828 : var_5))) == ((var_5 ? var_3 : (43 | 9223372036854775788)))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [11] = ((((min(-9223372036854775807, 32878)) | (var_12 + var_7))));
                            }
                        }
                    }
                    var_18 = (arr_2 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
