/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 3558958865110516185));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (arr_1 [1]);
        var_14 = (max(var_14, ((((--10098329175510038816) ? (arr_2 [i_0]) : 3558958865110516166)))));
        arr_4 [9] = (!14887785208599035414);
        arr_5 [i_0] [i_0] = (max((((((arr_0 [i_0]) | var_5)) & var_6)), ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0])))) ? (((arr_2 [i_0]) ? 1 : (arr_2 [i_0]))) : ((min((arr_3 [2]), (arr_1 [i_0]))))))));
        arr_6 [i_0] [i_0] = (-(((!((((arr_2 [i_0]) * var_2)))))));
    }
    #pragma endscop
}
