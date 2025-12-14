/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!1) ? ((~((var_8 << (var_5 - 131))))) : (min(((var_4 >> (-1984347144149113022 + 1984347144149113025))), (2160312135 || var_4)))));
    var_11 = var_5;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = ((+((min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = (i_0 % 2 == zero) ? ((((-111 + 2147483647) << (((arr_2 [i_2 + 2] [i_0] [i_4]) - 60252))))) : ((((-111 + 2147483647) << (((((arr_2 [i_2 + 2] [i_0] [i_4]) - 60252)) - 1521)))));
                                var_13 = ((!(arr_4 [i_2 - 1])));
                                arr_16 [i_4] [i_1] [i_0] |= (min(((((min(188, 39960))) ? (min(4294967295, var_0)) : ((((!(arr_10 [i_0] [i_1] [i_2] [i_3]))))))), ((((var_8 / var_7) <= var_1)))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [1] = ((23790 ? (arr_8 [9] [i_1] [i_1] [i_1]) : 61917));
                }
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
