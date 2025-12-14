/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = var_14;
    var_20 = (max(var_20, var_0));
    var_21 = ((+((((((-32767 - 1) - -55916520)) == -32758)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_22 = ((-8766246123419457494 ? 8766246123419457493 : (((~(arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = 8766246123419457493;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 *= (~var_6);
        var_24 = (((arr_4 [i_1] [i_1]) % ((169 ? 8766246123419457493 : (arr_4 [i_1] [1])))));
        arr_7 [i_1] [i_1] = var_8;
        var_25 = (var_3 || var_0);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_26 *= ((((min((arr_6 [i_2]), -13574))) ? -8766246123419457493 : 4294967295));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_27 = 0;
                        var_28 = (max(((var_10 / ((127 ? (arr_8 [i_2]) : var_0)))), (arr_11 [i_2] [i_2])));
                    }
                }
            }
        }
        var_29 = (max(var_29, ((max((!65535), (((arr_12 [i_2] [8]) ^ ((~(arr_15 [6] [i_2] [i_2] [i_2]))))))))));
        var_30 = -9723;
        var_31 = (((((arr_15 [i_2] [i_2] [i_2] [i_2]) ? (arr_15 [i_2] [i_2] [i_2] [i_2]) : var_15)) >> ((((-(max(var_16, 2097151)))) + 2097181))));
    }
    #pragma endscop
}
