/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 ^= (((((-(arr_0 [i_0])))) >= var_13));
        var_17 = (max(var_17, (~9154666431884350206)));
        var_18 = (2 || 9223372036854775807);
    }
    var_19 = ((-((27 ? var_0 : var_3))));

    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] = (~var_6);
        arr_5 [i_1] [i_1] = ((~(((arr_2 [i_1] [i_1]) ^ (~-894266352)))));
        var_20 -= ((((min(170160684, ((min((arr_0 [i_1]), (arr_1 [i_1] [i_1 - 2]))))))) ? -var_10 : ((((0 % -227519235) ? (var_8 <= var_6) : ((255 ? 1 : var_6)))))));
    }
    var_21 = (min(7536399181118402549, 1));
    var_22 -= (var_15 - var_8);
    #pragma endscop
}
