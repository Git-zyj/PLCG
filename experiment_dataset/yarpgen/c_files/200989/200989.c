/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((var_13 / 3028) - var_10)))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_17 = (min(var_17, 3028));
        arr_2 [i_0] [i_0] = ((((((-14400 ? (arr_1 [i_0 - 2] [10]) : (arr_1 [24] [i_0 + 2]))) ^ -3026))) ^ (((arr_1 [i_0 + 2] [i_0 + 1]) | (250057197 / var_9))));
        arr_3 [i_0] = ((((((max(var_9, 8095386305181031305)) >= (((max((arr_1 [2] [i_0]), (arr_1 [1] [5])))))))) % (arr_1 [19] [i_0 + 1])));
        var_18 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_4 [i_1] [i_1]) + (max(((min(var_15, (arr_1 [i_1] [i_1])))), (3028 & 3017)))));
        arr_8 [i_1] [i_1] = (!(((arr_6 [i_1] [i_1]) <= (((-9223372036854775807 - 1) ? (arr_4 [i_1] [i_1]) : 44792)))));
        var_19 = ((((~(arr_5 [i_1] [i_1])) << (((max(var_9, 9223372036854775807)) - 9223372036854775778)))));
    }
    var_20 *= 188;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 = (max(var_21, var_4));
        var_22 -= -111;
        var_23 = (min(var_23, ((((arr_11 [i_2] [13]) ? ((3028 ? var_15 : (arr_0 [i_2] [i_2]))) : (arr_1 [i_2] [i_2]))))));
        var_24 = var_1;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_17 [i_3] = (arr_16 [i_3]);
        var_25 = (min(var_25, var_9));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_26 |= (arr_16 [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_27 = ((((var_3 ? ((-3012 ? 14 : 19841)) : 21046)) % ((1 ? 42 : -3000))));
                                var_28 -= (((!65511) >> (1521858335 - 1521858317)));
                                var_29 = 1;
                            }
                        }
                    }
                    var_30 += (((12 / 1) % 3608801335603343626));
                    var_31 = (max(var_31, ((((((((max(1366459985, var_4))) ? (18446744073709551615 > -3028) : (65531 / -72)))) < ((2869579595 ? 18446744073709551614 : 65535)))))));
                }
            }
        }
    }
    var_32 = var_1;
    #pragma endscop
}
