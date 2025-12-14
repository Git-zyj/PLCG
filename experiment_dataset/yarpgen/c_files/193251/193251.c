/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 = (max(((((min(var_4, var_0))) ? (var_7 | 1) : (1 ^ var_1))), var_0));
        arr_2 [i_0] &= max((3323356866 ^ 971610421), (min((971610437 >= 12045017536361186250), var_0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_11 = (var_3 != ((((arr_4 [i_0 + 3]) ? var_7 : (arr_4 [i_0 + 3])))));
                                var_12 = (min(var_12, (arr_9 [i_0 - 1] [i_1] [i_0 - 1])));
                                var_13 = (max(var_13, ((min((arr_7 [i_3]), (((var_8 ? ((((arr_9 [i_0 + 3] [i_2] [i_4]) > (arr_11 [8] [i_1] [i_2] [8] [i_3] [i_4])))) : (arr_13 [i_0 + 3])))))))));
                                arr_14 [i_1] [i_2] &= ((var_6 != ((-(16777216 || 10842459304839109377)))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] &= (max((max(var_7, (min(var_9, (arr_12 [i_4] [i_3] [i_2] [i_0]))))), ((((-1 ? var_5 : var_5))))));
                            }
                        }
                    }
                    var_14 = ((((((((arr_1 [i_1] [i_0]) ? -363665971 : (arr_1 [i_1] [i_0])))) - var_9)) ^ ((var_1 ? (var_3 % var_6) : ((-11 ? var_9 : var_4))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_21 [8] [i_5] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_15 -= ((((min((min(-914350392628217220, (arr_11 [i_8] [i_7 - 3] [0] [i_6] [i_5] [i_0 + 3]))), (((-1332250162 ? 971610426 : 876104689)))))) | ((var_2 ? (~var_6) : 1683232393743885488))));
                                var_16 = (min(var_6, ((((-6 ? var_5 : 5397480894018544372))))));
                                var_17 = ((((((max(var_7, (arr_27 [i_0] [i_5] [i_0] [i_0] [i_7] [i_5]))) << (((max(3525275714837242658, var_8)) - 3525275714837242658))))) ^ -2016));
                            }
                        }
                    }
                    var_18 = (arr_8 [i_0] [3] [3] [i_0]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_19 = (min(var_19, (((((((arr_28 [i_9]) ? (!2940155790) : var_0))) ? var_4 : (((((((arr_28 [i_9]) ? -5397480894018544376 : var_1)) <= 2672539467)))))))));
        var_20 = -5397480894018544392;
        var_21 = (min(var_21, (arr_29 [i_9])));
    }
    var_22 |= (var_4 / var_6);
    var_23 = (min((13549084026332562079 | 18446744073709551594), ((((max(var_8, var_4))) ? (var_9 <= 18446744073709551608) : ((2 ? var_3 : 13549084026332562084))))));
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    var_24 = (arr_28 [i_10 + 1]);
                    arr_38 [i_11] = (((arr_30 [i_10 + 1]) <= ((15495703669813976203 ? 876104684 : 270669911448824569))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((var_1 ? ((((var_0 % var_4) & var_4))) : (min(var_9, var_9)))))));
                                arr_45 [i_12] [i_13] [i_13] = var_8;
                                var_26 = (min(var_26, (arr_40 [i_11] [i_11] [i_13])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
