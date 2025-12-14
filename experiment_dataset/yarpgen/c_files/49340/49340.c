/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((-6130318212139335317 ? -456239211011900293 : -1866411884674810553));
                var_19 *= (max((max(-1866411884674810553, 134)), (((var_17 || ((min(var_6, 37225))))))));
                arr_5 [i_1] [i_1] [i_1] = ((1 ? 134 : (((arr_3 [i_1]) ? (min(141, (arr_1 [i_0] [i_1]))) : (max((arr_0 [i_0]), 536862720))))));
                var_20 = ((-536862721 ? (0 + 2087056186221567841) : (((arr_1 [i_1] [i_0]) ? 1071644672 : 764487339))));
            }
        }
    }
    var_21 = (((((var_3 ? (max(28324, -623493171393987522)) : -764487335))) || 28310));
    var_22 = var_2;

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_23 = ((-((~((var_12 ? (arr_6 [2] [i_3]) : (arr_7 [i_2])))))));
            var_24 = (min((((~(arr_7 [i_3])))), ((((var_11 ? -2058665332267153299 : 229)) * (arr_7 [i_2])))));
            var_25 = (arr_7 [i_3]);
        }
        var_26 += (~(((!(arr_6 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_27 = (arr_10 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_28 = (min(var_28, (((arr_16 [i_4] [1] [i_6] [i_4]) ? -1866411884674810554 : (((28310 ? 212 : (arr_12 [18]))))))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_29 = var_10;
                        var_30 ^= 120;
                    }
                }
            }
        }
        var_31 = ((~((-2058665332267153299 ? 37226 : 2058665332267153308))));
    }
    #pragma endscop
}
