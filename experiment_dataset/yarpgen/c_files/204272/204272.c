/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 + 1] [i_1] = (((!-3333211960785527783) << (((arr_1 [i_1]) - 124))));
                var_15 = (((arr_0 [i_0] [i_1]) / (((arr_1 [i_1 + 2]) - (max((arr_1 [i_1 + 1]), (arr_3 [i_0] [i_1 + 1])))))));
                arr_5 [i_1] [9] [i_1 + 1] = (max(((1 / (((arr_2 [i_0] [i_0]) ? var_8 : (arr_0 [20] [20]))))), (((arr_0 [i_1 - 1] [i_1 + 1]) ? var_4 : (arr_0 [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
