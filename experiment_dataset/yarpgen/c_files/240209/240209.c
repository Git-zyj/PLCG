/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((((((max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? (0 * var_9) : (((var_0 ? 1141974382 : (arr_3 [i_0]))))))) ? (((((arr_3 [i_0]) < (arr_1 [i_0]))))) : -3572183390188220167));
        var_13 = ((-65520 ? (max(((max(51, (arr_3 [i_0])))), -1992154598)) : ((max(7, 1785612039)))));
        var_14 = (min(var_14, ((((((arr_1 [i_0]) ? 1 : (((arr_1 [i_0]) - (arr_3 [i_0]))))) << (((((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))) + 704757357)))))));
    }
    var_15 = ((((((min(0, 13791918192875018050))) || (((var_10 ? 0 : var_10))))) ? (min(3572183390188220167, ((min(var_2, var_8))))) : ((1785612038 ? (min(var_8, 562949953420288)) : 1785612039))));
    #pragma endscop
}
