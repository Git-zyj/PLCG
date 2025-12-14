/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((var_1 ? 16874262939361185303 : 3704224808359908220))));
    var_17 = ((((var_14 ? -1709047796 : var_8))) != (1158042363 | var_15));
    var_18 *= (((~var_15) | (((-1989802438 ^ 1) ? ((var_10 ? var_2 : var_8)) : var_12))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, -1));
        arr_3 [i_0] [i_0] = -1;
        var_20 = (44 ^ -8218578710632358397);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1 - 2] [i_1] = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    var_21 = ((-((~(var_7 / var_7)))));
                    var_22 = (757818469 != -974294275);
                    var_23 = (18446744073709551615 ? (arr_8 [i_3] [i_4]) : ((87 * (255 / 253))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_24 |= (2126881104 && 3583432151);
                            var_25 = (arr_12 [i_1] [i_2] [i_3]);
                        }
                    }
                }
                arr_19 [i_1] [i_2] [i_3] [i_2] |= ((-((+((((arr_4 [i_2]) > var_9)))))));
                arr_20 [i_1] [i_1] [i_3] [i_3] = (974294271 && -var_4);
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_24 [i_1] [i_1] [i_1] [i_1 + 1] = (max((((38897 ? 1989802438 : 281474976710655))), (min((arr_2 [i_7]), (((arr_2 [i_1]) ^ 1))))));
                arr_25 [i_2] [i_1] = var_4;
            }
            arr_26 [i_1] [i_2] [i_2] = (min((arr_14 [i_1 + 2] [i_1 + 2]), (arr_1 [i_2])));
            arr_27 [i_1 - 1] [i_2] |= (((min(233, 3010357918652440695))) ? (((-(arr_7 [i_1] [i_1 - 1] [i_1])))) : 2702520850292954825);
            arr_28 [i_2] = (min(249, ((3445249276 ? 1 : 2199023255551))));
            var_26 = (((((var_12 ? ((min(-1698405481, (arr_11 [i_2])))) : (65535 * 18446744073709551615)))) ? -1698405495 : ((-2484472400147266148 ? 1413123843161927387 : 4108071337))));
        }
        arr_29 [i_1] [i_1] = ((((~(arr_8 [i_1] [i_1])))) | (((-(arr_16 [i_1])))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 ^= (4294967295 & -0);
        var_28 = (min(var_28, -6852432341157303429));
        var_29 = (((arr_1 [i_8]) ? (~39360) : 9));
    }
    var_30 -= (((~var_5) ? var_10 : ((min(3700354941, 12)))));
    #pragma endscop
}
