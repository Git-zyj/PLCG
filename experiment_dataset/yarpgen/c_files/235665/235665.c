/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = var_12;
                var_16 = ((-(arr_0 [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_0] = (arr_0 [6]);
                    arr_8 [i_0] [i_1] = (~var_3);
                    var_17 = (1 ? 89 : 4232596218);
                }
            }
        }
    }
    var_18 = (!var_9);
    var_19 = var_0;
    var_20 = (!12);
    #pragma endscop
}
