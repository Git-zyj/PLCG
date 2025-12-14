/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 ^= min(((-(arr_0 [i_0]))), ((((arr_0 [i_0]) > 12398221582255229321))));
        var_19 = ((var_15 * (max(6048522491454322295, -4330217687497623961))));
        arr_4 [i_0] = (((-(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] = ((((((arr_6 [i_1]) + ((314802985208074506 / (arr_2 [i_1])))))) ? (((max(var_17, (arr_5 [6]))) | ((((arr_6 [i_1]) ? 542366609 : (arr_0 [i_1])))))) : var_16));
        arr_10 [11] = ((max((((arr_3 [i_1]) ? (arr_8 [i_1]) : (arr_5 [8]))), (min(-8323290591300316817, 255)))) & (arr_3 [i_1]));
    }
    var_20 *= (min((((-8323290591300316817 ? var_6 : var_17))), var_6));
    var_21 = ((4094 ? (28 != var_17) : (-847811956376900194 * 18446744073709551613)));
    #pragma endscop
}
