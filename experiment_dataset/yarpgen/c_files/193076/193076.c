/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, 4805266141323503990));
                    var_18 = (arr_6 [i_2] [i_0] [i_0]);
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
