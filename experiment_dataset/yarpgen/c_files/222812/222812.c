/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(((var_11 ? var_9 : var_10)), -var_1))) ? 1 : (17129 == 1)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] [i_0] = ((!(var_11 >= -16)));
                    var_18 = ((((-(((arr_2 [i_0 + 1] [i_1] [i_0 + 1]) ? (arr_2 [i_0 - 3] [i_2] [i_2]) : (arr_1 [i_1] [i_1]))))) & var_4));
                    arr_8 [i_0 - 2] [i_1] [i_1] = (min(-25, var_4));
                }
            }
        }
    }
    var_19 = (max((max((max(6679618575452516164, var_13)), (((-32 ? var_2 : 3176515466))))), var_13));
    #pragma endscop
}
