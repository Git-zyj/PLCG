/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 98493433;
    var_17 = 1493169476;
    var_18 = ((~(~var_2)));
    var_19 = var_15;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((max(-1892418828, (arr_1 [i_0 - 2]))));
        var_20 = ((-1 ? 1 : 121));
        var_21 = (min((!1), -104));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 = ((((min((arr_3 [i_1] [9]), var_14))) ? ((((7 ? var_0 : 98493433)) - -1)) : (arr_0 [i_1])));
        var_23 = (max(((((1 ? (arr_0 [i_1]) : 146)))), -1493169477));
    }
    #pragma endscop
}
