/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [3] = (((!-26317) ? (arr_2 [i_0] [7]) : ((-26317 ? (arr_0 [i_0]) : 26316))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_8 [4] = (~0);
            arr_9 [i_0] [i_1] = ((~((-26317 ? (arr_2 [i_0] [1]) : (arr_6 [i_0] [11] [1])))));
            arr_10 [i_0] [i_1] [i_1] = (((~15128) * ((50273 - (arr_0 [3])))));
            var_12 = (((arr_5 [i_1 - 2]) ? (arr_5 [7]) : (arr_2 [i_1 - 2] [i_1 + 1])));
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    {
                        var_13 = (((arr_2 [i_2] [6]) * (arr_17 [i_2] [4] [7])));
                        var_14 = ((((50264 ? (((arr_5 [6]) ? (arr_13 [0] [i_5]) : 536869888)) : ((-(arr_16 [9] [i_3] [8] [i_3]))))) % (-2147483647 - 1)));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_15 = 50284;
                            arr_23 [i_3] [1] [i_3] [i_5 - 2] [2] = (max(244, 96));
                            var_16 = (max(var_16, -69));
                            arr_24 [i_5] [4] [1] [i_6] [8] &= ((1551272385 - (((((arr_18 [i_2]) >> (((arr_0 [i_5 - 2]) + 67)))) / ((5055973961321624127 ? (arr_16 [i_2] [i_2] [0] [i_5]) : -123))))));
                            arr_25 [i_3] [i_3] [i_4] = 31;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, ((min(((4194303 ? 50275 : 50273)), (arr_19 [i_5 - 1] [i_5] [i_5] [0]))))));
                            var_18 = (((-2147483647 - 1) & 14056076874801515220));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_19 ^= (((10815 / 569200112) >> ((((27374 ? (-32767 - 1) : 49624)) + 32784))));
                            var_20 |= (((((((arr_16 [i_2] [i_3] [i_3] [i_2]) - (arr_4 [9] [i_5]))) + 2147483647)) >> (((1 == (arr_28 [i_8] [0] [0] [0] [i_5 - 2] [i_8] [i_8]))))));
                            var_21 = (((arr_29 [i_2] [i_2] [i_4] [1] [i_5 + 1] [i_8]) + (arr_17 [i_5 + 1] [i_5 + 1] [10])));
                        }
                    }
                }
            }
        }
        var_22 = (min((((((244 ? 18 : -26317))) ? (((arr_2 [i_2] [8]) ? 26337 : 225)) : (arr_2 [8] [i_2]))), ((min((arr_17 [i_2] [i_2] [7]), (arr_28 [i_2] [i_2] [8] [i_2] [4] [4] [i_2]))))));
    }
    var_23 = ((((max(((0 ? 2 : var_1)), 173716592))) || ((((0 % var_6) ? 150 : ((min(32767, var_5))))))));
    var_24 = (((((~6294409867916449446) & (-1569802550 ^ 814163862))) < (((4294967295 ? -37 : 18)))));
    #pragma endscop
}
