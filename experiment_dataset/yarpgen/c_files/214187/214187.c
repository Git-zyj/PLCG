/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_4 >= (((var_0 ? (!var_8) : (max(var_9, var_8)))))));
    var_11 = (max(var_11, (((2935925260131500800 ? var_1 : -var_8)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((81 << (var_9 - 2940152638519293323)));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_12 = (min(var_12, (((((max(((var_1 && (arr_1 [i_0] [16]))), (!9934162508162236338)))) ^ (~var_3))))));
        var_13 = ((~(var_8 / var_3)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_14 ^= ((min(9934162508162236338, (-9223372036854775807 - 1))));
        arr_6 [i_1] &= (((107 >> (8512581565547315277 - 8512581565547315261))));
        var_15 = (((((max(var_4, var_3))) ? var_2 : (((arr_5 [i_1] [2]) ? var_7 : 88)))));
        var_16 = (max(var_16, ((max(((max((arr_0 [12]), var_2))), (((arr_0 [18]) ? (arr_0 [6]) : (arr_0 [6]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_2] [i_2]);
        var_18 = 3691651601618285307;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = (arr_15 [i_2] [i_3 - 1] [i_2] [i_4]);
                        var_20 = var_1;
                        arr_17 [i_2] [i_2] = (i_2 % 2 == zero) ? ((((arr_11 [i_3 + 2] [i_2] [i_3 + 3]) >> (((arr_11 [i_3 - 1] [i_2] [i_3 + 3]) - 5516155016842945319))))) : ((((arr_11 [i_3 + 2] [i_2] [i_3 + 3]) >> (((((arr_11 [i_3 - 1] [i_2] [i_3 + 3]) - 5516155016842945319)) - 17776356209234473415)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_21 += var_7;
                                var_22 *= var_5;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_23 = ((~(arr_11 [i_2] [i_2] [i_3 - 2])));
                        arr_24 [i_2] [i_4] [i_2] [i_3] [1] = ((var_6 ^ (~var_5)));
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_27 [i_9] [i_9] = ((var_6 ? ((((!((max(var_6, var_3))))))) : (var_2 ^ var_1)));
        arr_28 [i_9] = (~(((arr_8 [i_9]) + (arr_7 [i_9]))));

        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_24 = var_2;
            var_25 = (max(var_25, (((((((arr_25 [i_10 - 1] [i_10 + 1]) | (arr_18 [1] [i_10 - 1] [1] [i_10 + 2] [i_10 - 1] [i_10 + 1])))) ? (max((arr_25 [i_10 - 1] [i_10 + 1]), var_0)) : ((((!(arr_18 [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 2] [i_10 + 2]))))))))));
        }
        var_26 -= ((var_2 ? var_8 : (var_3 >= var_0)));
    }
    var_27 = (max(-3366, 1594914623497021584));
    #pragma endscop
}
