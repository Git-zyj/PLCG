/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_4));
    var_18 = (((((((var_5 ? var_15 : var_8)) > -var_11))) > var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = 64620;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_20 = (min((((-(27 & 3414388874)))), (((((var_2 ? (arr_7 [i_0] [i_2] [i_2]) : var_7))) ? (((arr_3 [i_0] [i_1]) ? (arr_8 [i_0] [15] [4]) : (arr_3 [i_1] [i_2]))) : (min((arr_8 [19] [19] [i_2]), (arr_3 [i_0] [i_1])))))));
                    var_21 += -1134446362;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_0] = ((1 ? (max(var_11, (min((arr_3 [i_0] [i_1]), 12211)))) : (((((max((arr_4 [i_0]), (arr_6 [19])))) ? ((min(var_3, 0))) : 10)))));
                    var_22 = (min(var_22, (arr_2 [i_0])));
                    arr_13 [21] = (max((59582 > 89), 201));
                }
            }
        }
    }
    var_23 &= ((var_7 ? (((0 > ((var_7 ? var_9 : var_12))))) : var_13));
    #pragma endscop
}
