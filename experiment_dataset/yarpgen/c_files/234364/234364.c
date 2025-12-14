/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 -= max(((var_8 ? (arr_2 [i_0]) : ((max(-9276, 65534))))), ((~(arr_2 [i_0]))));
        var_15 |= ((-(min(var_13, (arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_16 = ((((((arr_4 [i_1 + 2]) % 65531))) ? (min((~var_7), ((10 ? var_3 : var_8)))) : ((((max(-9276, 2304717109306851328)) != -6679)))));
        var_17 = (max(-27645, ((max(2, var_5)))));
        arr_5 [i_1 + 2] = ((+(((arr_4 [i_1 - 1]) ? ((((arr_3 [i_1]) ? (arr_0 [i_1]) : var_13))) : ((-(arr_4 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_18 ^= 435418721;
        arr_9 [i_2] = (((((~((-9223372036854775803 ? (arr_7 [i_2]) : (arr_0 [i_2])))))) ? ((var_3 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))) : (((~(~-9280))))));
        var_19 ^= min((((65534 < (~var_10)))), (((arr_2 [i_2]) + (arr_2 [i_2]))));
    }
    var_20 += (max(var_3, ((((var_1 ? 176 : -22431)) - ((-9269 ? var_10 : 65511))))));
    var_21 &= (~-8886);
    var_22 = (~var_11);
    #pragma endscop
}
