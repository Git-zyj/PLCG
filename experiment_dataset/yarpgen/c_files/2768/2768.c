/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!65535) ? 65535 : ((((var_2 ? 2305561534236983296 : var_8)) * -0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0 + 4] = ((((((65535 ? 65530 : (arr_1 [1]))))) ? (arr_5 [i_0 - 2] [i_0]) : ((((!(((-(arr_0 [i_1]))))))))));
                var_14 = (max((arr_2 [i_1] [1]), (((arr_0 [i_0 - 3]) ? 1 : 255))));
                var_15 -= -1;
            }
        }
    }
    #pragma endscop
}
