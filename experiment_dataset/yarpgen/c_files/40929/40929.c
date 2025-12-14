/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_15 >> (12802014294561917839 - 12802014294561917824)));
    var_20 = var_3;
    var_21 = ((!var_9) ? ((23266 ? (var_10 ^ 15) : (~18446744073709551609))) : (min((var_7 + var_16), (((var_3 ? var_2 : 0))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = (((~var_6) & -25975));
        var_23 = (((var_15 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((arr_2 [i_1]) >> 4))) ? ((((!(arr_2 [i_1]))))) : (((arr_2 [i_1]) ? 1152921504606846975 : (arr_2 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_24 -= 3487494789;
                            arr_17 [i_1] [i_4] [i_3] [i_4] [20] = (~895314706);
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_25 = (max(var_25, var_12));
                            arr_20 [i_2] [i_4] [i_6] = var_6;
                            var_26 *= (--4);
                        }
                        var_27 += (max((((arr_16 [i_4] [i_2 + 2] [i_3] [i_4] [i_2]) ? (arr_16 [i_4] [i_2 + 3] [i_3] [i_4] [4]) : var_2)), -119));
                        var_28 = (max(((23294 & (min((arr_13 [21] [i_4]), var_9)))), var_3));
                        arr_21 [i_4] [i_2] [19] [i_4] = 5644729779147633776;
                    }
                }
            }
        }
        arr_22 [i_1] = (arr_4 [i_1]);
        arr_23 [i_1] = (((((((33554431 >> (-23353 + 23367)))) ? var_18 : (((25974 ? var_2 : var_17))))) ^ ((((5644729779147633777 - var_3) ? (!var_2) : (arr_15 [i_1] [i_1] [i_1] [1]))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_29 = (max((min((min(17814097815361089385, 53099)), 14415860929497868758)), (arr_25 [i_7] [i_7])));
        arr_27 [i_7] [i_7] = ((~(~var_11)));
        var_30 = (i_7 % 2 == zero) ? (((((max(var_14, 23307)) << (((arr_13 [i_7] [i_7]) - 13485069191023463126)))))) : (((((max(var_14, 23307)) << (((((arr_13 [i_7] [i_7]) - 13485069191023463126)) - 11744390516707843579))))));

        /* vectorizable */
        for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_31 = (min(var_31, (((-10093 - (arr_28 [i_8 + 1] [i_8] [i_7]))))));
            arr_30 [i_7] [i_7] = var_18;
        }
        for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_32 = (max((max((arr_13 [i_7] [i_7]), 20)), (arr_14 [i_9] [i_9 - 3] [i_7] [i_9 - 3] [i_9])));
            arr_34 [i_7] [i_9] = ((8205178405059033206 ? 1434011680 : 3008));
            arr_35 [i_7] [i_9] = (((arr_15 [i_7] [i_7] [i_7] [i_7]) < (min(3399652599, (arr_8 [i_9] [i_9 - 2] [i_9 - 2])))));
        }
        var_33 = ((-(arr_26 [i_7])));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_34 = 65534;
        var_35 = (max(var_35, (((var_2 ? (arr_37 [i_10] [i_10]) : 2860955604)))));
    }
    #pragma endscop
}
