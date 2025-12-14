/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min(var_7, ((((-3213821709922762990 && 1505853729) == var_5))))))));
    var_20 = var_8;
    var_21 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_22 += (((((-(arr_1 [i_0 - 1])))) ? (((min(var_15, var_0)) >> (((arr_5 [i_0] [i_2 + 3]) + 1576115753)))) : (arr_3 [i_2 - 2] [i_0 - 2])));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_3] = (arr_6 [i_2 - 2] [i_0 + 2]);
                        var_23 = 1;
                        var_24 = (232 || -256452513612519302);
                        arr_13 [i_0] [i_0] = (arr_0 [i_0 + 2] [i_2 + 2]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] = -256452513612519302;

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_4] [i_4] [i_5] = ((var_11 && (((-(arr_7 [i_0 - 1] [5] [i_4] [i_4]))))));
                            arr_20 [i_4] [i_4] [i_4] = (((((arr_17 [0] [i_1] [i_2 + 1] [i_4] [i_5]) ? 402653184 : 18446744073709551608)) % (((max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))))));
                            var_25 = ((~((-(arr_18 [i_1] [i_4] [4] [i_4] [i_0 - 1] [i_4] [i_0 - 1])))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_26 -= (min(((((!-402653187) <= (arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [8] [i_0 + 1])))), -15));
                        var_27 = (min(var_27, 0));
                        arr_23 [1] [i_2 - 1] [i_2 - 1] [i_2] = (arr_11 [i_2] [i_6]);
                        var_28 = var_1;
                        var_29 = min((((!(~0)))), -var_3);
                    }
                }
            }
        }
    }
    #pragma endscop
}
