/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((472728309 ? (~var_8) : ((var_7 ? 1 : (2797290864460812944 / 2797290864460812944)))));
    var_19 = (min(var_19, ((min(-2797290864460812936, ((min(-var_14, 119))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (min(((((arr_1 [i_0]) ? (arr_3 [i_0]) : var_3))), (max((arr_1 [i_0]), var_2))));
        var_20 = 53927;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (((((arr_3 [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_5 [i_1])))));
        arr_9 [i_1] [i_1] = ((-((min((((arr_7 [i_1] [1]) && var_11)), var_6)))));
        arr_10 [i_1] = (max(6285744965976561762, (max(-2797290864460812942, 30877))));
        var_21 = ((-(arr_7 [1] [i_1])));
    }
    var_22 &= var_15;
    #pragma endscop
}
