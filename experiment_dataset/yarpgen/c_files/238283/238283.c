/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_1] = (((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))) % (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : (((arr_1 [i_0 - 2]) ? 11364 : 1))))));
                var_17 = (max(var_17, (((var_14 ? ((((min(var_9, 1)) > (arr_2 [i_0 - 1])))) : ((min((arr_1 [i_0 + 1]), (arr_1 [i_1])))))))));
                var_18 *= ((((1 ? (arr_2 [i_1]) : (arr_2 [i_0 + 1])))) ? (arr_2 [i_1]) : ((min(1, var_15))));
            }
        }
    }
    #pragma endscop
}
