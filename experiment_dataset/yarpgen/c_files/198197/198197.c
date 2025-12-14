/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0]) ? (arr_2 [i_0]) : 11)) != ((((max(9223372036854775785, 9223372036854775807)) != (min(var_12, var_7)))))));
        arr_4 [i_0] [i_0] = (((((((max((arr_0 [i_0] [i_0]), 13))) ? (-32767 - 1) : (10586427317391140477 != var_13)))) ? (min(-var_13, var_4)) : (var_11 != var_1)));
        var_15 = ((((min((((!(arr_3 [i_0])))), (min(var_2, 32))))) != var_5));
    }
    var_16 = 18446744073709551605;
    var_17 ^= var_11;
    #pragma endscop
}
