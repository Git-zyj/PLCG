/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = var_8;
                arr_4 [i_1] [i_1] [i_0] = ((((max((((arr_3 [i_0]) ? var_2 : var_15)), (arr_3 [i_1])))) ? ((min(2145386496, (~2145386496)))) : (arr_3 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((-((-8651 ? 896 : 1))))));
                            var_19 = (max((min((arr_3 [i_0]), var_14)), 921));
                            arr_11 [i_3] [i_2] [i_1] [i_3] |= (arr_7 [i_0] [i_3] [i_2] [i_3] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
