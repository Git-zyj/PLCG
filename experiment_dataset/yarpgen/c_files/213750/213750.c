/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((min((((min(var_15, var_1)))), (max(var_9, 4294967295)))))));
                arr_5 [i_0] [i_1] = ((1 ? -3712725433378530380 : -6261));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] |= 28;
                            var_21 = (((arr_9 [i_0] [i_1] [i_2] [i_3]) <= (((max(4294967274, 4294967283))))));
                            var_22 = ((min(((min(var_14, (arr_6 [i_3] [i_2] [i_0] [i_0]))), (max(var_9, 4294967295))))));
                            var_23 = (max(var_23, ((max((max(55388, (var_0 + 2147483647))), (arr_9 [i_0] [i_1] [i_2] [1]))))));
                            arr_12 [3] [i_2] [i_2] [i_0] = -2518961723;
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((((((-0 ? (!2147483629) : (4294967278 && var_11)))) ? ((var_5 + (min(44976, 794969622)))) : (~-16256))))));
    #pragma endscop
}
