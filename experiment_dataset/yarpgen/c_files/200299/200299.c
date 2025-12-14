/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(-2380912687856796471, 1))) ? (max((~var_7), (~-2380912687856796469))) : (((-(max(var_13, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (min(1, 2380912687856796470));
                var_19 -= ((((-((min((arr_2 [i_1]), (arr_2 [i_0])))))) % (((!0) + ((max((arr_1 [i_0]), 10)))))));
            }
        }
    }
    #pragma endscop
}
