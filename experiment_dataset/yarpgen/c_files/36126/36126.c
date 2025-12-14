/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(-27888, (max(var_12, var_12)))) + 2147483647)) >> (var_14 - 3798895006318773300)));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((min(((max(-1, 65535))), var_14)) << (((arr_0 [i_0] [i_0]) - 34061))));
        var_19 += ((((~(((arr_0 [0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 34044)))))) * (((arr_0 [i_0 + 1] [i_0 - 3]) * (((!(arr_1 [i_0]))))))));
        arr_3 [i_0] = (max(((var_14 ? (min((arr_1 [i_0]), 36199)) : (((arr_1 [i_0]) ? (arr_1 [i_0 - 4]) : 18)))), ((((arr_1 [i_0 - 3]) ? (arr_0 [i_0 - 3] [i_0]) : (arr_0 [i_0 - 3] [i_0]))))));
    }
    var_20 = ((max((~var_6), var_14)) - (!var_7));
    #pragma endscop
}
