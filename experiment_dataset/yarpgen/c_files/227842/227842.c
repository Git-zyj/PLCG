/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 ^= ((((65535 ? 127 : var_9)) ^ (((((var_4 >= (arr_1 [7] [7])))) >> 1))));
        var_21 = (min(var_21, (((((((1 >= 1755) + ((255 ? var_19 : var_9))))) ? (((arr_0 [2]) ? (((var_11 ? 102 : 121))) : (((arr_1 [i_0] [i_0]) ? var_17 : var_8)))) : 1)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (((((~(~var_7)))) ? (((((255 ? 248 : (arr_3 [10])))) ? (56213 ^ 11132213610549323174) : var_0)) : (max((arr_3 [i_1]), ((min(3430784726, 31)))))));
        arr_5 [i_1] = ((65535 >> (18446744073709551615 - 18446744073709551592)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((arr_3 [i_2]) ? var_18 : 2147483647))));
        var_23 *= (arr_2 [19] [i_2]);
        var_24 = 1;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            {
                var_25 = (min(var_25, (((-3595746215 ? (min(-18446744073709551615, (((22018 ? (arr_10 [2]) : 144221321))))) : (((22018 ? 22 : 18))))))));
                var_26 = ((~((var_0 ? (arr_8 [i_4 + 2] [i_4 + 3]) : (~1)))));
                var_27 ^= (-115 ^ 0);
                arr_13 [i_3] [i_4] [i_4] = (((var_0 ^ 45331) ? 22 : (arr_8 [i_4 + 1] [i_3])));
                var_28 = (~2147483647);
            }
        }
    }
    #pragma endscop
}
