/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((44487 ? var_16 : 53)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0 + 1] [i_0]) ? ((18446744073709551615 ? 18446744073709551611 : -1)) : 1))) ? ((((!(((42322 ? var_2 : 426585115))))))) : 4611685880988434432));
        var_21 = (max(var_21, (~1)));
        var_22 = (min(511, (((19 ? var_15 : (((max(246, 12)))))))));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_23 = (((((12121950949465683726 ? ((var_4 ? (arr_6 [i_1]) : (arr_0 [i_1 + 2] [i_1]))) : (arr_0 [10] [i_1])))) ? (((((var_13 ? (arr_5 [i_1 - 3]) : 2430291566))))) : ((64 + (-1822146964 + 18446744073709551571)))));
        var_24 = (((262143 % 6324793124243867889) ? (!31) : 2048));
        var_25 = (max(((((max(12488, 242))) ? (((~(arr_0 [i_1] [i_1])))) : ((27777 ? 268435455 : 31971)))), (((0 ? ((20 ? -24 : 43)) : (min((arr_5 [i_1 - 3]), 15360)))))));
    }
    #pragma endscop
}
