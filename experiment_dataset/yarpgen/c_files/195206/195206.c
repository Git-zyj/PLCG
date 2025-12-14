/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((1747457699275755188 ? ((max(var_4, var_17))) : var_10))) ? var_0 : ((88 | ((60427815 ? var_15 : var_6))))));
    var_20 = ((16699286374433796427 ? 255 : 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = arr_2 [18] [18];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [18] &= (((((((var_9 ? (arr_7 [i_0]) : var_8))) ? (arr_11 [i_3] [i_1] [i_1] [i_0]) : (((arr_4 [20]) ? var_10 : 255)))) << ((((-60427815 != 255) || (~-14230))))));
                            arr_13 [i_1] [i_2] [i_2] [i_3] = (((((((var_4 ? var_5 : var_10))) || ((((arr_9 [i_1] [i_1]) ? (arr_8 [i_3] [17]) : var_6))))) && var_13));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                arr_21 [i_4] = (((((-(arr_14 [i_4])))) ? (22403 >= 4782935164012766500) : 1));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_31 [i_4] [i_5] [i_6] [i_4] = (min((max(((var_12 ? -1 : var_5)), var_11)), ((((((32764 ? 255 : 1))) ? (arr_14 [i_4]) : (~60427792))))));
                                var_22 = 3797182943;
                                var_23 |= ((((min((arr_24 [i_4] [i_4]), (arr_29 [i_4] [i_4] [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4])))) ? (arr_14 [8]) : ((14778 ? ((max(8191, 25574))) : ((min((arr_19 [0]), (arr_22 [i_6] [i_4] [i_6] [i_7]))))))));
                                var_24 = ((((((arr_26 [i_4] [i_6] [i_8]) ? 254 : (((-1551318937 + 2147483647) >> 1))))) ? var_12 : var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
