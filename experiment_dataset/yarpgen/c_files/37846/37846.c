/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((~(max(var_8, 67108863)))) / ((((var_7 != -67108863) << (((13868215361025307178 & -2062) - 13868215361025307162)))))));
    var_11 = ((((max(((max(var_2, 3))), (min(var_0, var_5))))) ? (!65535) : var_9));
    var_12 = (max(var_12, ((max(var_3, (((var_5 ^ var_5) ^ (127 ^ 65535))))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = 67108871;
        var_14 &= (max((((arr_1 [1]) ? -32765 : (arr_1 [15]))), ((2052 ? (arr_1 [i_0]) : (arr_1 [8])))));
        var_15 -= (max((max((((-(arr_0 [i_0])))), (min(var_1, var_3)))), 0));
    }
    #pragma endscop
}
