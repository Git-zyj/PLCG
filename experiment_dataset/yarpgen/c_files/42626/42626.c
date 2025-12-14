/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((min((!var_12), (max((arr_3 [22] [i_1]), (arr_3 [i_0] [i_0]))))) * (((min((arr_6 [i_0 + 1]), ((!(arr_1 [i_0] [i_1])))))))));
                var_17 ^= (max((~var_5), (min(((173485083 ? 3076950375 : var_11)), ((((arr_5 [i_0]) ? 40397 : (arr_5 [23]))))))));
                var_18 = 1218016902;
                var_19 = (min(var_19, (((-((-(((arr_4 [i_1] [i_0 + 2]) - 32768)))))))));
            }
        }
    }
    #pragma endscop
}
