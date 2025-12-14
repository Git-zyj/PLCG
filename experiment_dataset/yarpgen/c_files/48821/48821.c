/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 2101897154;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] [8] = ((!((min(43, (min(0, 9223372036854775807)))))));
                var_20 += ((0 ? -4232415749 : 3903268702670389251));

                for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_21 = ((-2039195361975730441 % (arr_6 [i_0 + 3] [i_0 - 2] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 - 1] [i_0 + 2] [i_0] [10] [i_3] [i_4] = (((arr_4 [i_0]) ? (~var_10) : (arr_1 [i_0 + 4])));
                                arr_17 [i_0] = (min((max((min((arr_10 [i_4] [i_4] [i_4] [18]), var_7)), (arr_10 [i_0] [i_1] [i_2 + 1] [i_3]))), (arr_5 [i_0])));
                                arr_18 [i_0] = ((!((((arr_9 [7] [i_2 + 1] [i_3] [i_4 + 1]) - (((7 ? var_15 : 2307113878))))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((((((-(max((-9223372036854775807 - 1), 31151))))) ? (((111 ? ((min(34, var_14))) : (((arr_9 [i_0] [i_1] [i_1] [i_2]) ? (arr_7 [20] [12] [20]) : 181))))) : (min((arr_12 [i_0 + 1] [i_2 - 1] [i_2 - 1] [16] [i_2]), (arr_10 [i_0 + 3] [1] [1] [1]))))))));
                    var_23 ^= ((((min(9223372036854775807, (arr_1 [i_2 - 1])))) ? var_7 : (arr_1 [i_2 + 1])));
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0 + 2] [i_0] = (max((((arr_4 [i_0]) - (arr_15 [i_0] [i_1] [i_0] [i_5 + 1] [i_1]))), ((min((arr_15 [i_0] [i_1] [8] [i_5 + 1] [i_0]), (arr_4 [i_0]))))));
                    arr_23 [16] [i_0] = ((~((((((arr_5 [i_0]) | (arr_1 [i_1])))) ? (((arr_11 [2] [2] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) ? var_11 : 2416400322)) : (((133 ? (arr_5 [i_0]) : (arr_4 [i_0]))))))));
                    arr_24 [2] [i_0] = ((var_1 ? ((((!(((1987853419 ? 3903268702670389251 : var_8))))))) : ((-64 ? 3903268702670389251 : 2307113878))));
                }
            }
        }
    }
    #pragma endscop
}
