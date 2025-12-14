/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~(((((55967 << (9569 - 9556)))) ? ((var_9 ? var_7 : var_11)) : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [2] [i_2] [i_3] [i_1] [i_3] = var_5;
                            var_20 = (min(var_20, ((~(((!((((arr_7 [i_0] [i_1] [i_1] [i_3]) ? 1 : var_9))))))))));
                        }
                    }
                }
                var_21 = ((-1171201897703359200 < ((min((arr_8 [0]), var_15)))));
                var_22 = (((((!(((1171201897703359216 ? 15578957701803215579 : 4294967295)))))) != (arr_0 [i_1] [i_0])));
            }
        }
    }
    var_23 = (max(var_23, var_16));
    #pragma endscop
}
