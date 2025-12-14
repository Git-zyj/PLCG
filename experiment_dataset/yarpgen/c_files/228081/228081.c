/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_11 = (((((2065495914 - (arr_1 [i_1 + 2])))) && (arr_1 [i_0 - 2])));
            var_12 = (203307372 ? ((((((arr_0 [15]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_1]))) > (((arr_0 [i_1]) ? 203307372 : var_3))))) : ((65535 | ((65535 << (158 - 155))))));
            arr_5 [i_1 + 3] [1] = ((65535 ? ((((min((-2147483647 - 1), (arr_0 [i_0]))) + (arr_4 [i_1 + 2])))) : (((((arr_4 [i_1 + 4]) ? 582052264436456745 : (arr_1 [i_1 + 2]))) + (752258683 + var_4)))));
            arr_6 [22] [i_1] = (((((var_9 >> ((((arr_1 [i_1]) <= -1974907536)))))) ? (-322514919 / 582052264436456741) : ((min(((var_3 ? 255 : 856029303)), 13)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_13 = ((1648155485394423909 >> (-582052264436456740 + 582052264436456791)));
            var_14 = -987527237;
        }
        arr_10 [i_0] = var_9;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_15 = ((-((~((max(var_7, var_10)))))));
        var_16 = var_5;
        arr_15 [i_3] = 55377;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_21 [i_4] [i_4] = (((arr_16 [i_4]) < ((2 ? -8254241239463179113 : (arr_13 [i_4])))));
            var_17 = ((4193792 >> (((arr_9 [i_4]) - 188200196))));
            var_18 = (((arr_14 [i_4]) != var_8));
            var_19 = (65525 && 61816);
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_20 = (var_3 < 19148);
            arr_24 [i_4] [i_6] [i_4] = -1374082030;
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            arr_27 [i_7] [i_4] = 268435456;
            var_21 = (min(var_21, (arr_0 [i_7])));
            arr_28 [i_4] [i_4] = ((var_6 >> (((1 >= (var_10 % var_7))))));
            var_22 = var_10;
        }
        var_23 *= (((((((var_8 + 9223372036854775807) >> 1)) | ((-582052264436456745 - (arr_18 [i_4]))))) > ((((~-322514919) / (((arr_26 [i_4] [i_4]) << (var_6 - 34844))))))));
        arr_29 [i_4] = (min(((var_7 ? (arr_11 [i_4]) : (((arr_14 [i_4]) | 32485)))), ((var_3 ? (arr_22 [i_4] [i_4] [i_4]) : (arr_22 [i_4] [i_4] [i_4])))));
        var_24 = (((arr_9 [i_4]) << (((((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_9 [i_4]))) - 188200230))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_32 [i_8] = (~(arr_22 [i_8] [i_8] [i_8]));
        arr_33 [i_8] [i_8] = (((127 / 1051402613) * (arr_30 [i_8])));
        var_25 = (((((33050 == (arr_16 [i_8])))) >= 7));
    }
    var_26 = var_4;
    var_27 = ((-var_2 != (((((-322514919 ? var_3 : 32767))) ? (var_4 < 224) : ((var_1 ? 32493 : 8387584))))));
    #pragma endscop
}
