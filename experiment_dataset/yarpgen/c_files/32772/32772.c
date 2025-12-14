/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_18));
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] = (min(((1996524460 ? 63382 : -7004499020721474884)), (arr_2 [18])));
                            var_21 = ((+(((((arr_1 [1]) + 9223372036854775807)) << (((var_12 + 119) - 42))))));
                        }
                    }
                }
                var_22 = (arr_10 [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
