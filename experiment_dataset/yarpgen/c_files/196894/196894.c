/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_8 ? ((var_8 ? 4053725645576518626 : var_14)) : (((7 ? var_5 : var_14))))) + (((0 ? 1 : -9223372036854775800)))));
        arr_4 [i_0] [i_0] &= 4053725645576518635;
        var_17 = ((min(4053725645576518626, var_13)));
    }
    var_18 = 1;
    var_19 &= (max(((var_7 ? ((5 ? -3613471819696550438 : 18446744073709551609)) : (((min(2, 16384)))))), (((1 ? ((-1520108800292626141 ? 4288424833738877392 : -10827)) : var_8)))));
    #pragma endscop
}
