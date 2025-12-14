/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((((((arr_3 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_18))) ? var_12 : -var_1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [14] [23] [i_3] = (((arr_7 [i_0] [i_0] [2] [i_0] [13]) ? (!2868933365) : var_8));
                            var_20 ^= ((-((-((~(arr_6 [i_0] [i_0] [i_0] [21] [i_1] [i_0])))))));
                            var_21 &= (arr_0 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_22 = var_12;
    var_23 = ((4294967295 ? var_6 : (~-23154)));
    var_24 = (!var_1);
    #pragma endscop
}
