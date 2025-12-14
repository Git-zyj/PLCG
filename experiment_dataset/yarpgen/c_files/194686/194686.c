/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (arr_0 [i_0] [i_0]);
        arr_4 [i_0] = ((((-(arr_0 [i_0] [i_0]))) ^ (((~((((arr_0 [i_0] [i_0]) || var_2))))))));
        var_13 |= ((33368 ^ 36) ? (((arr_1 [i_0]) / (arr_1 [i_0]))) : (((arr_1 [i_0]) << (((arr_1 [i_0]) - 18563)))));
    }
    var_14 ^= 8852281568585639452;
    var_15 = ((8852281568585639452 ? 0 : 8852281568585639423));
    var_16 = (max(var_16, (((((!(((var_11 ? var_2 : var_12))))) ? (max((((var_1 ? var_4 : var_8))), (max(16113508521761087952, var_1)))) : var_6)))));
    #pragma endscop
}
