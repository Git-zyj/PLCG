/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((-4294967295 * 0) < ((((1197167599025341526 < var_14) ? (!var_13) : -1))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (((-(((arr_1 [i_0]) ? 1 : 1)))) | ((14 ? 1 : 1)));
        var_18 += (((843477516 | 1) ? (!var_1) : (min(-19842, 1))));
        var_19 = (min(var_19, (arr_2 [i_0] [i_0])));
        arr_3 [i_0] [16] = (min(((((((46264 ? 44624299 : (arr_2 [i_0] [i_0])))) || ((min(7, var_14)))))), ((((1 * (arr_2 [2] [i_0]))) / (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 -= (max((((~1) ? 1 : var_11)), ((~((min(var_4, var_10)))))));
        var_21 = (max(var_21, -900257008309992324));
        var_22 = (((var_15 != 44624299) - (((~var_0) | ((1 ? (arr_5 [i_1] [i_1]) : var_5))))));
        var_23 = ((!var_6) < (var_8 / 4095));
        var_24 |= ((arr_4 [i_1]) || ((((!55192) | var_7))));
    }
    var_25 = (min(var_25, -26774));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_26 &= ((((3367178167 ^ (!255))) / (((!1) ? var_9 : (((var_8 ? 1 : (arr_10 [i_3] [i_3] [i_2]))))))));
                arr_11 [i_3] [i_3] [i_2] = ((!(89 < var_13)));
            }
        }
    }
    #pragma endscop
}
