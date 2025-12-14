/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((((~var_3) ^ ((var_3 ? 31549 : var_11)))), ((max(var_8, 1188026459))));
    var_13 = ((((((var_2 ? (~101) : ((var_6 ? var_3 : var_5)))) + 2147483647)) << ((0 << (9167 - 9150)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        arr_3 [i_0] = (!-64);
        arr_4 [i_0] = -14797;
        var_14 = (max((max((arr_0 [i_0]), (arr_1 [i_0]))), (arr_0 [i_0])));
        arr_5 [i_0] = ((!((min(42510, ((208 ? 25396 : 14805)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                arr_10 [i_2] [i_1 - 2] [i_2] = (arr_6 [i_2]);
                var_15 = ((-((min((((-31537 < (arr_8 [i_2])))), 9988)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_16 = ((-(arr_15 [i_4] [10] [i_2] [8] [10])));
                            var_17 |= ((((min((arr_11 [i_1] [i_2] [i_2] [i_4]), 4141753215))) ? (min((((arr_12 [1] [i_3] [i_2] [i_1]) | 234)), (arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_4]))) : ((var_11 ? (arr_6 [i_3]) : (arr_7 [i_1 + 2])))));
                            var_18 = (((~(arr_11 [i_1 - 3] [i_1 - 2] [i_1 + 2] [i_1 + 1]))));
                        }
                    }
                }
            }
        }
    }
    var_19 += (max((((((22451 ? var_3 : 32))) ? ((69 ? var_4 : 4136585155)) : 1)), ((max(21720, ((-431150352 ? -31550 : 22792)))))));
    #pragma endscop
}
