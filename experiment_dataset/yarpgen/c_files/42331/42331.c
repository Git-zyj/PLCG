/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~((var_15 ? var_6 : 15198675415169236987))))) ? (((((var_6 ? var_7 : var_5))) ? var_18 : var_19)) : var_14));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [11] = ((((((var_18 ? -112 : 1)))) ? ((-3248068658540314624 ? (!var_1) : ((-(arr_1 [i_0]))))) : ((var_8 ? ((var_6 ? 21 : (arr_1 [i_0]))) : 2147483628))));
        var_21 = (max(var_21, ((((((var_11 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((var_15 ? var_19 : 158401233)) : ((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : -838402587))))))));
        var_22 = (min(var_22, ((((((~(arr_1 [i_0])))) ? ((((!(((var_2 ? (arr_0 [i_0]) : var_6))))))) : (((((3395385182818853542 ? var_8 : 3248068658540314639))) ? ((var_11 ? var_5 : 14642664936906612835)) : -57)))))));
        arr_3 [i_0] = ((-10 ? 0 : var_12));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (max(var_23, (((~((var_18 ? (arr_5 [i_1]) : (~-2147483637))))))));
        var_24 = (((((((((arr_1 [i_1]) ? (arr_6 [i_1]) : var_11))) ? (((2147483647 ? var_1 : var_16))) : var_18))) ? 4 : ((var_15 ? (arr_4 [i_1]) : var_1))));
        arr_8 [i_1] [i_1] |= (((((((((arr_4 [i_1]) ? var_15 : 62518))) ? (arr_4 [i_1]) : ((-(arr_1 [i_1])))))) ? ((1400 ? (arr_4 [i_1]) : (((arr_5 [i_1]) ? var_11 : (arr_0 [i_1]))))) : (((var_17 ? ((var_2 ? 50179 : var_9)) : -99)))));
        var_25 ^= (((arr_4 [i_1]) ? ((~(arr_6 [i_1]))) : var_18));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_26 = ((-9223372036854775807 ? (!var_11) : (!var_14)));
        var_27 |= ((((((((-9223372036854775779 ? var_16 : 221))) ? var_3 : (((4561 ? (arr_0 [i_2]) : 192)))))) ? (((-35793 ? (((arr_1 [i_2]) ? (arr_11 [i_2] [i_2]) : 245)) : (!3869922719)))) : ((24238 ? ((var_14 ? 65535 : -3882679190617645491)) : var_15))));
        arr_12 [i_2] = ((((((((var_0 ? 459 : (arr_11 [i_2] [i_2])))) ? ((53 ? var_3 : (arr_5 [i_2]))) : ((var_9 ? (arr_10 [i_2]) : var_12))))) ? ((-(arr_10 [i_2]))) : ((~((65535 ? var_12 : var_0))))));
        var_28 += (((((~(!var_13)))) ? (((+(((arr_4 [6]) ? var_17 : var_5))))) : (((!var_16) ? var_6 : ((var_16 ? -4096 : var_2))))));
    }
    var_29 = (min(var_29, var_13));
    #pragma endscop
}
