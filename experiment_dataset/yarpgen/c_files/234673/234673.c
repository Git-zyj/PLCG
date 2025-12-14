/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = (min(var_5, (((max(var_12, -6602878414090560254)) ^ var_2))));
                        var_20 = (((((((var_17 | (arr_0 [i_0]))) << (88 - 67)))) || ((min((arr_9 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 + 1]), (arr_6 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2]))))));
                        var_21 &= ((-(min((((arr_6 [10] [3] [i_1] [0]) ? 0 : (arr_5 [13] [i_1] [i_2] [2]))), ((min(var_9, (arr_8 [i_0] [5] [10] [i_2] [i_3]))))))));
                    }

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_22 = (((((arr_10 [i_0] [i_0]) ? (arr_4 [12] [i_0] [i_2 - 2]) : (((arr_7 [i_0]) | 0)))) >> ((min((arr_13 [i_2 + 2] [i_2 - 2] [i_4 + 1] [i_4 + 1]), (arr_5 [i_1] [i_2 + 1] [i_4 + 1] [i_4 + 1]))))));
                        var_23 = ((((((arr_11 [i_2] [i_2] [i_2 + 2] [i_2]) && (arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_4])))) != (((arr_11 [4] [i_1] [i_2 + 1] [i_4]) ? (arr_11 [6] [8] [i_2 + 2] [i_4]) : (arr_11 [i_0] [i_1] [i_2 + 1] [1])))));
                    }
                    var_24 = (arr_11 [i_2] [i_2 + 1] [i_2 - 2] [i_2]);
                }
            }
        }
    }
    var_25 = (((((-(var_13 & var_1)))) ? (((1 && var_13) ? var_4 : (!var_0))) : (((max(var_15, (var_7 || 1850459499191804067)))))));
    var_26 = (max(var_26, ((((min(var_1, -var_2))) ? (((((172 ^ var_18) > (var_4 != 109))))) : (((0 & -22) ? (var_0 ^ var_4) : (var_8 && var_9)))))));
    #pragma endscop
}
