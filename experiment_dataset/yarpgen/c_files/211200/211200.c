/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_3 - var_13) ? ((var_9 ? var_2 : var_1)) : var_0))) || (((~((min(var_8, var_12))))))));
    var_15 = ((((((((var_12 ? var_0 : var_11))) ? (var_8 ^ var_4) : var_6))) ? (max((var_11 - var_7), ((min(var_2, var_0))))) : var_6));

    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 3] = (((((var_0 / (max(var_10, var_4))))) ? ((((max(var_8, var_4))) ? (((max(var_0, var_9)))) : -1293159998)) : (var_6 & var_5)));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 -= (max((min((var_1 | var_0), ((min(var_13, var_8))))), (max(((var_7 ? var_0 : var_9)), (min(var_10, var_10))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 &= (~var_9);
                var_18 = (((min(var_2, (min(var_12, var_2))))) ? (min(482277720, 9)) : (min(var_11, (var_4 & var_13))));
                var_19 = (min(((min((max(3812689576, 1)), (~var_8)))), (min(var_0, (((var_1 ? var_13 : var_1)))))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_18 [i_4] [i_4] = var_11;
                            var_20 *= 16823496798722316337;
                            var_21 = (((-1879937846 ? 482277720 : 134217728)));
                            var_22 *= (((var_9 & var_8) != ((var_1 ? var_10 : var_1))));
                        }
                    }
                }
                var_23 = (max(var_23, ((((var_7 && var_7) ? var_4 : var_3)))));
            }
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                var_24 = (((((var_2 ? var_1 : var_6)) == var_3)) ? (((((var_6 ? var_13 : var_12)) ^ var_2))) : (max(((var_9 ? var_0 : var_4)), (~var_0))));
                var_25 = ((!(((var_9 ? (max(var_7, var_10)) : ((var_11 ? var_5 : var_7)))))));
                var_26 *= (((var_0 / var_0) ? ((((max(var_7, var_13))) ? ((min(var_9, var_8))) : (!var_6))) : (max(var_8, ((var_8 ? var_10 : var_9))))));
            }
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                var_27 = (((((-(min(var_3, var_9))))) ? var_0 : ((((max(var_6, var_0))) ? var_3 : ((var_6 ? var_2 : var_12))))));
                var_28 = (min(var_28, (((((((min(var_12, var_6)) + (max(var_6, var_2))))) ? ((~((var_1 ? var_12 : var_9)))) : (min(1388375673, (var_13 + var_9))))))));
            }
        }
        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            arr_26 [i_0] [1] [i_0] |= ((+(min((var_5 - var_5), var_11))));
            var_29 = (min((((var_4 != var_5) * ((min(var_13, var_12))))), (((max(var_7, var_8))))));
            var_30 = ((-1089345049 ? (~18446744073709551607) : 482277720));
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_31 ^= (((var_5 ? var_8 : var_5)));
        var_32 = ((~((var_2 ? var_4 : var_0))));
        var_33 *= (~var_1);
        var_34 = ((((var_2 ? var_0 : var_2)) == ((var_2 ? var_9 : var_2))));
    }
    for (int i_10 = 3; i_10 < 24;i_10 += 1) /* same iter space */
    {
        var_35 *= ((((((((var_4 ? var_10 : var_8))) | (var_2 | var_4)))) ? var_0 : (((var_6 / var_2) ? (min(var_6, var_13)) : 482277720))));
        var_36 *= (((((max(var_5, var_11))) ? var_9 : (107 + -2044990866718095442))));
    }
    for (int i_11 = 2; i_11 < 21;i_11 += 1)
    {
        var_37 = (((((~var_0) & (max(var_11, var_7)))) ^ (((max(var_8, var_11)) | (var_8 & var_7)))));
        var_38 = ((~(((((max(var_0, var_5)))) & (min(var_11, var_11))))));
    }
    #pragma endscop
}
