/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [4] [i_2] [4] [i_1 - 1] = (((var_5 / -var_1) / ((((min(3118301055, var_9))) * (min(1, 2223526102898558301))))));
                                var_17 = min((max((((arr_9 [i_4] [i_1]) & var_7)), (min(var_1, 15)))), (((-(max(var_7, 2588500215343250496))))));
                                var_18 = (min(var_18, ((max((max((((~(arr_7 [5])))), (~var_1))), (((~((~(arr_6 [i_2])))))))))));
                                var_19 |= (max((((~1176666238) * (var_5 || var_16))), (((!(arr_6 [i_0]))))));
                            }
                        }
                    }
                }
                var_20 = (min(((+((((arr_8 [i_0] [6] [1] [6]) == var_15))))), (237 && 97)));
                var_21 = (min((min(((~(arr_6 [i_1]))), 1)), (min((((!(arr_11 [5])))), (arr_0 [i_0] [1])))));
            }
        }
    }
    var_22 = ((~(max(-var_4, (!var_10)))));
    #pragma endscop
}
