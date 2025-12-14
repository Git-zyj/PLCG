/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [16] [i_0] = var_0;
        var_10 = var_2;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_11 = (max(var_11, 0));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_1 + 1] [i_2 + 3] [i_1] [i_4] [i_1 + 1] = -23;
                            var_12 = (max(var_12, (((((((((arr_11 [i_1] [i_2] [i_5]) || 1))) - (((0 <= (arr_3 [i_2])))))) * ((((var_7 >= 230) || (((var_3 ? 2396900558 : (arr_10 [i_4 + 1] [12]))))))))))));
                            var_13 = ((+((max((arr_4 [i_4] [i_4 - 2]), (arr_10 [i_4 + 1] [i_1]))))));
                            var_14 = 0;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_2 - 2] [i_1] [i_6] = (((max((((var_0 ? (arr_21 [i_1 + 1] [15] [12]) : (arr_6 [i_4] [i_1] [i_4])))), (var_8 % 1536))) < 3799573059));
                            arr_23 [i_1] [i_2] = (arr_9 [i_2] [i_2] [12]);
                            var_15 = (arr_21 [i_1] [i_1 + 1] [i_1 + 1]);
                            var_16 = ((791596460 ? ((((arr_10 [i_1 + 2] [i_1]) ? (arr_10 [i_1 + 2] [i_1]) : (arr_10 [i_1 + 2] [i_1])))) : (arr_0 [i_6])));
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_17 = (arr_24 [i_1] [i_2 + 3] [15] [i_1] [i_3] [15] [i_7]);
                            var_18 -= arr_12 [i_1] [16] [i_3] [i_7];
                            var_19 = ((min(((arr_7 [i_1] [i_2 + 1]), ((9 ? (arr_25 [i_1] [i_2 + 1] [i_2 + 3] [i_3] [i_4] [i_1]) : var_9))))));
                            arr_26 [i_1] [i_2 - 1] [i_7] [i_2] [i_1 + 2] [i_1] = ((75 ? 13 : 9289));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [i_1] [i_1] [i_2] [i_2] [i_1] [13] [i_8] = 1;
                            arr_32 [i_1] [i_1] [i_1] [i_1] = ((-(arr_7 [i_1] [i_3])));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_39 [i_9] [i_10] [i_10] = (arr_13 [10] [i_10] [i_10] [i_10] [18] [i_10]);
            var_20 = (arr_25 [i_9] [i_9] [10] [i_10] [i_10] [i_9]);
        }
        arr_40 [i_9] = ((34182 << ((((((var_9 & (arr_35 [i_9])))) && (arr_36 [i_9]))))));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_21 = (((~var_0) | (((min(var_3, 1))))));
        var_22 = 1969809818;
    }
    var_23 = var_6;
    #pragma endscop
}
