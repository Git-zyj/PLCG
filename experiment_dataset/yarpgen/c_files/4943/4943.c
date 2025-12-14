/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(55, (min(5844, (!-175942463)))));
    var_14 = -12287;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max((arr_5 [i_2 + 1] [i_1 + 1]), (((!(!var_0))))));
                    arr_7 [i_0] = ((-((((((arr_1 [i_0]) ? var_10 : (arr_1 [i_0])))) ? var_10 : (min((arr_0 [i_0]), var_0))))));
                }
            }
        }
    }
    var_16 = (-((((0 ? -328814501 : -99)) | var_0)));
    #pragma endscop
}
