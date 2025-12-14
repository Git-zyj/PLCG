/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_18 = (((var_13 ^ var_7) & var_16));
            arr_6 [i_1] [i_1] = var_1;
            var_19 = (min(var_19, ((((var_9 + 9223372036854775807) << (((var_9 + 7330791986110620658) - 52)))))));
            var_20 ^= (((var_4 >> (var_6 - 13630))));
            arr_7 [i_1 - 1] [i_1] = (var_7 ? var_2 : var_9);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_21 = var_16;
                        var_22 = ((-(!var_16)));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_23 = ((!var_7) > var_12);
                            var_24 = (max(var_24, ((!((-var_10 < (var_2 ^ var_6)))))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_4] = (min(((1904182862 ? 64645 : 54866)), (~var_12)));
                            arr_24 [i_0] [i_2] [1] [i_4] [i_4] [i_4] = ((((min(var_0, var_16))) >> (54866 - 54862)));
                            var_25 = ((min(var_5, var_8)));
                            var_26 &= (!var_2);
                            var_27 = (54866 ^ 64645);
                        }
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            var_28 = (min(var_28, (((-(((var_10 / var_10) ? var_8 : var_11)))))));
                            var_29 ^= ((-1 ? 891 : 6125695174199635356));
                            var_30 = (max(var_30, (var_6 > var_12)));
                            var_31 = (max(var_31, ((((((~(~12023)))) ? (min(0, 6125695174199635356)) : 0)))));
                        }
                        var_32 = (-var_13 & (!var_3));
                        arr_27 [8] [6] [i_3] &= var_6;
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = (65535 < 891);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_33 = ((var_4 ? var_6 : var_2));
        var_34 &= var_11;
        var_35 &= ((var_12 * (((((-127 - 1) + 2147483647)) >> (-1 + 20)))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_36 ^= ((var_4 < (~var_4)));
        var_37 = (var_4 == -var_4);
    }
    #pragma endscop
}
