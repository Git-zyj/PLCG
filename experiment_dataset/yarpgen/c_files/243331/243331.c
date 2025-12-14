/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(76, (!175)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = 175;
                                var_16 = (!-32760);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0 - 2] [i_1] [i_2] [3] [0] = (((((arr_7 [i_2 - 1] [16] [i_2 - 1]) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) <= (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 1]) : 4437271632960737844))));
                                arr_22 [18] [i_1] [18] [14] = ((((!(arr_9 [i_0] [i_1] [i_2] [i_0] [i_2]))) ? ((((min(var_8, (arr_4 [i_0])))) ? var_12 : (arr_11 [19] [i_1] [i_2] [i_5] [7] [i_6]))) : ((((!((!(arr_13 [14] [i_1] [16] [2] [i_6])))))))));
                                arr_23 [7] [i_1] [i_2 - 1] [i_2 - 1] [1] = (((((-4437271632960737844 ? 1008 : (~-17575)))) ? (-32767 - 1) : (1 <= -1841507721361433175)));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (~13312)));
                        var_18 = (arr_9 [i_0] [i_0] [i_1] [i_2] [i_7]);
                        arr_28 [i_0] [i_0] [i_1] [13] [6] [14] = arr_13 [3] [1] [i_1] [i_1] [i_0];
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [i_2] [6] = ((25 >> (14986174008460238020 - 14986174008460237991)));
                        arr_34 [i_0] [i_1] [3] [i_2] [i_8] = ((+(((arr_29 [i_0 + 2] [i_1] [i_2] [i_8]) ? var_6 : 3819229414))));
                    }
                    var_19 = ((max(11427, var_11)));
                    var_20 = min(var_5, -39);
                }
            }
        }
    }
    #pragma endscop
}
