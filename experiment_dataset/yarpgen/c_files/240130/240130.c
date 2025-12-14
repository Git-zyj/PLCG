/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (min((((((-1118610468 ? var_3 : (arr_1 [i_0])))) ? ((var_5 >> (var_6 + 27836))) : 203745155)), (min((~243), var_14))));
        var_16 += (min(var_11, 12));
    }
    var_17 += (((min((min(18446744073709551615, var_1)), var_5)) - var_11));

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (((((min(var_11, var_12)) != var_3)) ? ((~((7763509056720091404 ? 18446744073709551615 : 12)))) : (((min(46502, (!239)))))));
        arr_8 [i_1] [i_1] = ((var_15 ? -75994232 : (!var_11)));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] = ((((min(((min((arr_12 [i_2]), var_9))), ((var_12 ? var_8 : var_10))))) ? ((var_0 ? var_15 : var_0)) : (((arr_11 [i_2]) << (((12278604509364082141 / var_4) - 11783344924))))));
        arr_14 [14] &= (min((((~(arr_2 [i_2 + 4] [i_2 + 4])))), (((min(15545513131777060413, 43982)) - 18446744073709551604))));
        var_18 ^= (536870911 ? 9968 : 13);
        arr_15 [i_2] = -7902111472698074188;
    }
    var_19 -= min(((7902111472698074187 ? (!12278604509364082141) : 0)), (var_9 != var_13));
    #pragma endscop
}
