/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (arr_3 [i_0]);
                    arr_8 [i_1] = var_4;
                    arr_9 [i_1] = ((0 - -2) % (max((arr_5 [i_2 - 1] [i_1] [i_0 + 1]), var_13)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_0] [i_0] [i_0] [8] = ((+(((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_3]) : var_9))));

                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        var_17 = 5;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0 + 1] = ((((max((arr_15 [i_0] [i_0] [i_0 + 1] [i_5 - 1]), (arr_12 [i_5 - 1] [i_4] [i_0])))) & 15679187171654266613));
                            arr_24 [i_0] [i_0] [9] [i_6] [i_3] [2] [i_6] = 16417;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_28 [i_7] [0] [i_0] = (arr_14 [i_5 + 1] [i_0 + 1] [i_0 - 1]);
                            var_18 = 15679187171654266613;
                            arr_29 [i_0] [i_0] [i_4] [i_5] [i_3] [i_5] [i_0] = (((((var_16 ? 49221 : 32))) || (arr_25 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_19 = (min(150, (((arr_4 [i_5 + 2]) / (arr_27 [i_0 - 1])))));
                            var_20 = (max((((var_5 ^ var_11) ? ((-44 ? 15679187171654266611 : var_14)) : ((((arr_25 [4] [4] [i_4] [4] [i_8]) ? 0 : (arr_2 [i_4])))))), (arr_0 [i_0 + 1] [i_5 - 2])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_35 [i_0] [i_4] [i_4] [i_5] [i_0] = var_10;
                            var_21 = -760558397315997470;
                            arr_36 [i_0] [i_0] [i_0] [i_5] [i_0] = ((-50 ? (arr_2 [i_3]) : (arr_27 [i_0 - 1])));
                        }
                        arr_37 [i_0] [i_0] [i_0] = ((((arr_13 [i_5 + 3]) != -100638700085096650)));
                    }
                    arr_38 [i_0] [i_3] = 8108893604613042348;
                }
            }
        }
        var_22 = -6083453572867928010;
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] = (arr_39 [i_10]);
        var_23 = (max((((arr_39 [i_10]) ? (((min((arr_40 [i_10]), var_3)))) : (arr_39 [i_10]))), var_0));
        var_24 = ((((27842 | (arr_39 [i_10]))) * (((4284856904581290044 ? 0 : 1653973212)))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        arr_45 [i_11] = (((((44559 || -6083453572867928022) ? -44 : -10)) != ((((arr_42 [i_11]) ? (arr_40 [i_11]) : ((((arr_40 [i_11]) < (arr_43 [i_11] [i_11])))))))));
        var_25 = ((((((arr_42 [i_11]) ? 5499012953185805498 : (arr_39 [i_11])))) ? var_8 : ((((~(arr_44 [16] [i_11]))) >> (33554431 - 222)))));
    }
    var_26 -= var_1;
    #pragma endscop
}
