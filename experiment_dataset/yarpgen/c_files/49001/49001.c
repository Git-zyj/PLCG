/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((((arr_1 [i_0 - 1]) ? var_14 : (arr_1 [i_0 + 2]))), (min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))));
        var_16 = (min(var_16, var_4));
        arr_5 [i_0] [i_0] = (max((((min(298, (arr_1 [i_0 + 1]))))), (min((min((arr_1 [i_0]), var_2)), 3005534285))));
        var_17 = (min(var_17, ((max(var_2, (arr_2 [i_0 + 2]))))));
    }
    var_18 = (var_1 | 36742);
    var_19 ^= ((((4 << (14224272994676324307 - 14224272994676324305))) * (((!((max(var_1, var_8))))))));
    var_20 = ((max(var_6, (min(2147483647, 0)))));
    #pragma endscop
}
