/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((max((max(var_1, 52926)), var_0)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(var_1, (!-2053679478)))) ? ((((!(arr_0 [i_0]))) ? 939837092 : (arr_0 [i_0]))) : (((min(-1733432459, (arr_1 [i_0])))))));
        var_11 ^= (max(-9, (((((var_8 ? var_1 : var_7))) ? 5208091357317279547 : 0))));
        arr_3 [i_0] = (((((((arr_1 [i_0]) ? var_8 : 173)) == (((-29031 ? (arr_1 [i_0]) : (arr_0 [i_0])))))) ? ((((229 ? 26 : (arr_0 [i_0]))) % var_9)) : ((-(arr_1 [i_0])))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (max((arr_0 [i_0]), var_7)) : ((min((arr_0 [i_0]), 105)))));
    }
    var_12 = ((!((max(var_8, (125 * 57))))));
    #pragma endscop
}
