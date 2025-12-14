/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -19048;
    var_17 = (max((((!((max(var_13, 13)))))), ((~(min(var_12, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_4 [i_0] [i_0])));
                var_19 = (min(var_19, ((((((((max((arr_1 [i_1]), (arr_2 [4] [i_0]))))) * (max((arr_4 [i_0] [i_0]), 242)))) / (((+(((arr_1 [i_1]) ? 242 : var_13))))))))));
            }
        }
    }
    #pragma endscop
}
