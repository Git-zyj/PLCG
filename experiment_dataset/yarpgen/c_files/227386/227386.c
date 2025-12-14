/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((!var_15), var_16))) ? ((((((262143 << (761815962468504487 - 761815962468504468))) <= 48)))) : ((var_5 ^ ((var_4 ? 1 : var_3)))));
    var_21 = (((var_19 & var_3) ? var_12 : ((((var_7 % var_9) == ((var_9 ? 2147483626 : (-9223372036854775807 - 1))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = ((~(-49 && -65)));
        arr_2 [i_0] = min(((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [13])))), (1122798216 * 17684928111241047143));
        arr_3 [i_0] = (((((2048 ? -8431 : 112))) & ((var_16 | (arr_1 [i_0] [i_0])))));
        var_23 = ((arr_1 [i_0] [i_0]) ? ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [13])))) : var_1);
    }
    #pragma endscop
}
