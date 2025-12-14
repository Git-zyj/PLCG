/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(max(var_4, 16))));
    var_18 = (max(var_18, (((((max(-2775676581, 1))) ? ((var_3 | (!var_1))) : 1)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 -= ((((((arr_0 [i_0 + 1]) / (arr_0 [i_0 + 1])))) < ((var_9 ? -6576156706737541872 : 167))));
        var_20 = (((~var_5) ? (~4294967278) : (((max(var_6, 17287809213829232236)) >> (-438 + 448)))));
        var_21 ^= ((~((max((arr_0 [i_0 + 1]), -21)))));
        var_22 ^= ((!(((arr_0 [i_0 + 2]) <= ((1169637669 ? 32767 : (arr_1 [i_0])))))));
        var_23 = (max(var_23, ((((max(-1888, (arr_1 [i_0 - 1]))) + (max(((min(var_14, (arr_0 [i_0])))), ((~(arr_1 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_24 -= ((((min(((((arr_1 [i_1]) ? var_7 : var_11))), 18446744073709551613))) ? ((18446744073709551600 + ((max(var_13, var_5))))) : (((max(var_4, (arr_4 [i_1 + 3])))))));
        var_25 = (min(var_25, ((((-(arr_2 [i_1 + 2])))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_26 = var_7;
        arr_7 [i_2] = (arr_0 [i_2]);
    }
    #pragma endscop
}
