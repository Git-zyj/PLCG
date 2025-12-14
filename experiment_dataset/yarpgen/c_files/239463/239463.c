/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (9223372036854775807 ? ((min(3, 173))) : var_5);
        arr_3 [i_0] [i_0] = (min((((!((((arr_1 [i_0] [i_0]) ? 59 : (arr_1 [i_0] [i_0]))))))), ((((min((arr_2 [i_0]), var_10))) ? (arr_1 [i_0] [i_0]) : (~var_11)))));
        arr_4 [i_0] = (i_0 % 2 == 0) ? ((((((4294967295 >> (((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_19)) - 1418))))) ? (((!(!253)))) : ((min(((((arr_1 [i_0] [i_0]) || 253))), var_8)))))) : ((((((4294967295 >> (((((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_19)) - 1418)) + 5930))))) ? (((!(!253)))) : ((min(((((arr_1 [i_0] [i_0]) || 253))), var_8))))));
        arr_5 [i_0] [i_0] = 3;
    }
    var_21 = (var_16 % var_4);
    #pragma endscop
}
