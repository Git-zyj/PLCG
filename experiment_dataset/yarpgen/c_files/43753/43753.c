/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 176;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = min((!4294967291), (122 && 0));
        arr_3 [i_0] [i_0] = (1 || 1099511627775);
        var_15 = (max((max(var_13, (arr_1 [i_0]))), (arr_0 [i_0])));
        var_16 *= ((min((arr_0 [i_0]), 12543464304711839878)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 = 122;
        arr_8 [i_1] [i_1] = (min((min((min((arr_1 [i_1]), -13005)), ((min(var_10, -122))))), (((!((min(31, 4182801791683374176))))))));
        var_18 = (min(1, (max(((max(524287, var_9))), (min(var_2, var_8))))));
        var_19 = ((+(((((arr_4 [i_1] [i_1]) - var_2)) + ((min((arr_0 [i_1]), var_6)))))));
    }
    var_20 = (~var_0);
    #pragma endscop
}
