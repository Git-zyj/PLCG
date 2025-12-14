/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = 2666461726861748527;
            var_20 = (((((var_11 ? (arr_1 [i_1]) : var_17))) && (((var_6 ? 65529 : (arr_0 [i_0]))))));
            arr_6 [i_0] = ((-(arr_4 [i_0])));
            var_21 -= (((arr_1 [i_1]) ? (-32767 - 1) : var_6));
            var_22 = ((~((var_3 ? var_1 : (arr_3 [i_0])))));
        }
        var_23 = (arr_4 [i_0]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_24 ^= (min((!-252053183), (var_17 <= -29)));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_25 += ((max(1932488356486157395, (arr_12 [i_3]))));

                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            arr_18 [i_2] [i_3] &= 3401;
                            arr_19 [i_2] [11] [i_2] [2] [i_6 + 2] = ((((min(var_14, (((-(arr_7 [i_2] [i_2]))))))) ? (arr_13 [4] [8] [i_4] [i_4] [i_4]) : 1060876874));
                            arr_20 [16] [i_2] = (min((-4964855501154400710 != -5919), (arr_13 [i_2] [i_3 - 4] [i_4 + 1] [i_5] [i_2])));
                        }
                        var_26 = (!162432278523429296);
                        var_27 += ((((((~65523) ? (28615 > 1320871706) : 64))) == ((-var_16 ? -5823780693679366893 : (arr_15 [i_2] [i_3] [1] [0] [1] [i_5] [i_5])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_30 [i_2] [i_7 + 1] [i_7] [i_8] [i_2] [i_7] = ((((1 ? (arr_21 [1]) : 2147136949)) >= ((0 ? (arr_28 [i_9] [i_9] [i_8] [i_7] [i_2]) : var_2))));
                        var_28 = (min(var_28, 26771));
                        arr_31 [i_2] [i_7 + 1] [15] [i_9] [i_2] = 1511925872;
                        var_29 = (max(var_29, (arr_17 [i_9] [i_8] [i_7] [i_7] [13])));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_30 *= (((((arr_7 [i_7 + 1] [i_7 + 1]) / (arr_17 [i_7] [5] [i_7 + 1] [i_7] [i_7 + 1])))) ? (((((((arr_13 [i_10] [i_2] [i_7] [i_2] [i_2]) ? 1 : 1))) ? (max(59120, 2548721225)) : (!101)))) : 6331816258018910189);
                        arr_34 [i_2] [i_2] = max((~var_17), (-8658624167638812519 < 1));
                    }
                    var_31 = (min(var_31, (((-((((var_12 ? 1216020914 : -1976440901)))))))));
                    var_32 *= (arr_33 [i_2] [i_2] [i_2] [i_8] [i_2]);
                    arr_35 [i_2] [i_2] [i_7] [i_8] = var_7;
                }
            }
        }
    }
    var_33 = ((-6767 || (((((min(var_13, var_5))) ? (2870100864 == var_14) : var_11)))));
    #pragma endscop
}
