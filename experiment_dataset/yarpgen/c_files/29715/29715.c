/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-(min(var_15, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (arr_2 [i_4] [i_1] [i_0]);
                                var_18 = 16383;
                                arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_1] = ((-(((((arr_7 [i_4]) - (arr_1 [i_0]))) / -9))));
                            }
                        }
                    }
                }
                var_19 = (max((((!(arr_3 [i_0] [i_0] [14])))), (min((arr_2 [i_1] [i_1] [i_1]), (((!(arr_2 [i_1] [i_1] [i_1]))))))));
                arr_13 [i_0] [i_0] [i_0] = (max((arr_3 [i_1] [i_1] [i_0]), (((~((max((arr_2 [i_0] [15] [i_0]), (arr_5 [7] [i_1])))))))));
            }
        }
    }
    var_20 = (min(var_20, ((max(((((var_10 && 16383) || (18446744073709535233 || 65514)))), (max(var_1, var_4)))))));
    #pragma endscop
}
