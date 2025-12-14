/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 51381;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (~19);
        arr_4 [6] = var_0;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_12 *= var_10;
                    var_13 ^= (((arr_9 [i_1] [i_2] [i_1]) + ((((max(7813, (arr_13 [2] [i_2] [i_2] [i_2]))))))));
                    arr_16 [4] [i_1] &= (arr_0 [i_2]);
                }
            }
        }
        arr_17 [17] = (((((arr_15 [i_1]) ? ((7813 >> (((arr_2 [i_1] [i_1]) + 2722753675412480097)))) : (arr_10 [i_1] [i_1]))) + (-7814 == var_10)));
        var_14 ^= (min((((arr_5 [i_1]) / (arr_5 [11]))), (((arr_5 [11]) ? 14659 : -8))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_15 = (max(var_15, ((((arr_24 [i_5 + 1] [i_5 - 1] [i_5] [i_7] [20]) == (arr_8 [i_6]))))));
                            var_16 = (max(((min((((arr_10 [i_1] [i_6]) - var_7)), (arr_13 [i_4] [i_4] [i_6] [i_7])))), ((-(arr_18 [i_4] [i_4] [i_4])))));
                        }

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [i_1] [i_4] = (max((((7814 ? -24 : -2))), (((arr_19 [i_4] [i_5 - 1] [i_8 + 2]) ^ (arr_19 [i_4] [i_5 + 1] [i_8 + 4])))));
                            var_17 = ((!((!(arr_27 [i_8 - 2] [i_1] [i_5] [i_1] [i_1])))));
                        }
                        var_18 |= (((max((((arr_24 [i_1] [i_5] [i_5] [i_5] [i_5]) + var_5)), (arr_10 [i_5 + 1] [i_5 + 1]))) ^ (arr_28 [i_1] [i_1] [i_4] [i_6] [i_4] [i_6])));
                    }
                }
            }
        }
        var_19 = (((((0 ? 0 : 26))) + (arr_2 [i_1] [i_1])));
    }
    #pragma endscop
}
