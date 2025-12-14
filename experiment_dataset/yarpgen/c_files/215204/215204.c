/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = ((-(arr_0 [i_0])));
        var_21 = (max((((var_7 + (arr_1 [i_0])))), (((var_16 * (arr_3 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 *= (((arr_5 [6]) && ((((arr_5 [4]) ? (arr_2 [i_1]) : (arr_1 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    var_23 = (-var_19 ^ 30356);
                    var_24 = (max(((~(((arr_9 [i_3]) ? var_2 : (arr_5 [i_1]))))), (((arr_10 [i_3 + 1] [i_1] [i_3]) ? (max((arr_9 [i_1]), (arr_7 [i_1] [23]))) : ((((!(arr_6 [i_1])))))))));
                }
            }
        }
        var_25 = (~var_4);
        var_26 = (max(var_26, (((~(max((arr_0 [1]), (arr_0 [0]))))))));
        var_27 = (max(((max(((~(arr_7 [i_1] [i_1]))), (arr_11 [i_1] [i_1])))), (max(var_2, (~var_10)))));
    }
    var_28 = var_5;
    #pragma endscop
}
