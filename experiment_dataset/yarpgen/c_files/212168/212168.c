/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-((((2047 ? 2165472553257862301 : 2047)) / 2165472553257862290)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(max(4662540170693321629, 0))));
                var_17 = ((((((arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2]) <= (arr_1 [i_0 - 1])))) >> ((((-(arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]))) + 3738523569999525161))));
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
