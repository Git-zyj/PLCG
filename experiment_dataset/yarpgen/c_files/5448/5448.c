/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] = (((((((var_7 ? var_10 : var_5)) <= (((-32 ? var_1 : -1492255114))))))) == ((3819989946 * (max((-9223372036854775807 - 1), var_7)))));
                            var_12 = (min(var_12, var_1));
                            arr_13 [i_1] [i_1 + 1] [i_2] [i_3] = (((((((min(474977349, var_5)) | (((var_11 ? var_10 : 17818))))) + 9223372036854775807)) << (var_3 - 1741644895)));
                        }
                    }
                }
                arr_14 [i_1] = 17818;
                arr_15 [i_1] = (min(((max((~1), var_3))), (min(1, ((28 ? 3819989946 : var_3))))));
            }
        }
    }
    var_13 = ((var_3 % ((var_9 ? (17839 + 474977324) : ((var_10 ? var_11 : -5779544092517444983))))));
    var_14 = ((-7200704911622169109 + ((min(var_1, -583662492)))));
    #pragma endscop
}
