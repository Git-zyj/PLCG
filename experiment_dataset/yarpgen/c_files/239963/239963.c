/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((1699561302 | var_2) ? ((51995 ? var_5 : var_4)) : ((min(var_11, 51993))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = arr_0 [i_0 + 1] [i_1 + 2];
                var_21 = (min(var_21, ((((max(var_15, (arr_3 [i_1] [i_1 - 1])))) ? (((((31206 ? (arr_2 [20]) : (arr_0 [i_0] [i_0])))) ? ((-(arr_4 [i_0]))) : 51990)) : (13528 + 52005)))));
                var_22 = (min(var_22, (arr_1 [18])));
                var_23 = var_6;
            }
        }
    }
    var_24 = var_4;
    var_25 = ((((var_18 != (!var_11))) ? ((((13757 != 52005) * (var_1 >= var_13)))) : (min(var_8, 4792901030784332298))));
    var_26 = var_11;
    #pragma endscop
}
