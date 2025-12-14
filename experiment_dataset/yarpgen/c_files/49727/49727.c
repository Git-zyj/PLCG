/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_0;
    var_16 = var_5;
    var_17 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= (arr_0 [i_0] [8]);
                var_19 = ((!((!(((var_6 ? (arr_0 [i_0] [i_0]) : var_10)))))));
                var_20 &= ((arr_0 [i_0] [i_0]) ? (((((-16881 ? 1 : 1))) ? (arr_1 [i_1 + 1]) : (!var_5))) : var_4);
            }
        }
    }
    var_21 = (-(((~var_0) ? var_1 : ((min(var_8, var_12))))));
    #pragma endscop
}
