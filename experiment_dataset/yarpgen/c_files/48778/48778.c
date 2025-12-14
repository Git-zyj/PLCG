/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(((var_2 >> ((((var_9 >> (((arr_3 [i_0]) - 17529756075644420440)))) - 116349)))), (min(var_9, -var_8))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 = (((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1]))) > (max((arr_0 [i_2 - 1]), var_0))));
                            arr_9 [i_0] [i_0] [i_2 - 1] [i_3] = var_5;
                            arr_10 [i_3] [i_1] [i_3 - 2] [3] [i_2] = ((((((var_7 == var_7) - (arr_0 [i_0])))) ? (((!(6 && 0)))) : var_7));
                            arr_11 [7] [i_2 - 1] [i_2 - 1] [i_1] [i_0] [i_0] = (max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]), (max(var_1, (arr_5 [i_3 - 2] [i_2 + 1] [i_0])))));
                        }
                    }
                }
                var_13 -= ((~((min((arr_4 [i_0] [i_0] [8] [i_1]), 21232)))));
                arr_12 [i_1] = (max((((max(var_1, (arr_0 [i_1]))) >> (((!(arr_5 [i_0] [i_0] [8])))))), 2305843009213693952));
            }
        }
    }
    var_14 = (min(var_14, 44305));
    #pragma endscop
}
