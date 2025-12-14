/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~169023198) ? (((1 ? -1 : 1))) : ((0 ? 1212662165683856256 : 0))));
    var_18 &= (min(((-((var_7 ? 1 : -6408)))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = -1;
                var_20 += (((arr_5 [i_1] [i_1] [i_0]) ? ((((min(var_14, var_13))) ? (arr_0 [i_0]) : (~var_4))) : 0));
            }
        }
    }
    #pragma endscop
}
