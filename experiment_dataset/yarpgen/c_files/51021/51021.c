/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min((~1895982098167177342), (((0 ? var_0 : 172))))), ((((!var_9) ? (var_4 / var_0) : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (max((max((min((arr_4 [i_0] [i_1] [i_2]), var_9)), (((var_10 ? 65512 : (arr_5 [i_1 - 1] [i_0])))))), (!var_10)));
                    arr_7 [i_0 - 1] [i_0] [i_0] = ((!(((arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2]) || (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
