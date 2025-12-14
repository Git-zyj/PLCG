/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 += (arr_0 [i_0]);
        var_13 += (2121158689 ? (min(18446744073709551615, 6229980987708555624)) : (var_2 || 3463650333));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (min(var_14, (((((((min(1788298000, 2900791433))) ? var_3 : (max(3463650333, var_5))))) ? (!var_9) : (min(((996274048 ? 18446744073709551615 : (arr_3 [i_1] [i_1]))), ((1486260414361483761 ? 2338723023 : var_10))))))));
        var_15 = (~(((((16960483659348067855 ? 18446744073709551615 : 7793327494700589617))) ? 2173808607 : 7793327494700589628)));
        var_16 &= ((5599703948683259885 * (!7793327494700589652)));
        var_17 = arr_2 [22];
    }
    var_18 = var_2;
    var_19 += ((10653416579008962002 ? 21 : 10033515813678585737));
    #pragma endscop
}
