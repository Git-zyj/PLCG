/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((max(var_1, 1330992317)), (min(-8435, var_11))))) || (((55 ? 55406 : 17253)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0])));
        arr_2 [i_0] = ((505125444 ? (-1810015529 > 16773120) : ((58028 ? (arr_0 [i_0]) : 8))));
        var_14 = ((3675016476 ? (((((arr_0 [i_0]) >= 800756327)))) : (arr_0 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    var_15 = var_8;
    #pragma endscop
}
