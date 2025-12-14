/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((~(min(var_9, ((min(var_4, var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = 3692981793821138730;
                    var_12 |= (((((~12) + 2147483647)) >> (((~var_8) + 4))));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] = (((((-(arr_11 [i_3 + 2] [i_3 - 1] [i_1] [i_3 - 1])))) ? (arr_3 [i_1] [i_0]) : 375442208));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = max(((min((arr_6 [i_1]), (arr_6 [i_1])))), (((arr_6 [i_1]) / (arr_6 [i_1]))));
                        var_13 = (min(var_13, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        arr_14 [i_1] [i_1] [i_3] = 18446744073709551615;
                        var_14 = (max(var_14, (arr_9 [i_0] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] = (min((arr_5 [i_0] [i_2]), (((arr_2 [i_0]) - (arr_2 [i_0])))));
                        var_15 -= (max((-8471349356218341246 / var_1), (arr_15 [i_0] [i_1] [i_2] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_1] [i_2] [i_5] [i_0] [i_1] = (max(var_6, ((var_7 ? ((3237286287 ? (arr_3 [i_0] [i_1]) : 2)) : 3919525112))));
                        var_16 = max(var_8, ((min(var_4, (arr_7 [i_0] [i_1] [i_2] [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (max(0, (arr_11 [i_0] [i_0] [i_1] [i_6])));
                        var_17 = ((((!(0 == 255)))));
                        var_18 -= (max(25, (min(((var_3 ? 3237286284 : var_1)), 0))));
                        arr_25 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0] = 9975394717491210390;
                    }

                    for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_1] = (!((!((max(1828269706093960327, 8471349356218341228))))));
                        var_19 = (~9975394717491210370);
                    }
                    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_1] [i_1] [i_1] = (arr_27 [i_1] [i_1] [i_2] [i_1]);
                        var_20 ^= var_5;
                    }
                }
            }
        }
    }
    var_21 = ((var_3 ? (min(2577232176, 8471349356218341225)) : var_9));
    #pragma endscop
}
