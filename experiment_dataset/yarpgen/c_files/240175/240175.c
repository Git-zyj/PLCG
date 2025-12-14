/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = 0;
                    var_15 = (((((((((arr_2 [i_0]) ^ 60))) && (((arr_2 [i_2]) == (arr_4 [1] [i_1] [3] [i_2 - 4])))))) <= (arr_6 [i_2] [i_1] [4] [i_0])));
                }
            }
        }
    }
    var_16 = var_5;
    var_17 = ((((var_5 * 221) * (var_2 / var_0))) | (((((var_4 ^ 33873) < 1662425922)))));
    #pragma endscop
}
