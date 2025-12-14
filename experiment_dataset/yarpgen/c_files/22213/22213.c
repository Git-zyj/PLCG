/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((((((var_14 ? var_3 : var_8))) ? var_9 : var_6))) ? (((!var_5) ? var_15 : (((var_8 ? var_11 : var_18))))) : (((((var_1 ? var_15 : var_18))) ? ((var_15 ? var_13 : var_15)) : (((var_18 ? var_6 : var_17))))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = ((arr_0 [i_0]) + (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_1]))));
            arr_4 [i_0] [i_0] [i_0] |= (((((arr_1 [i_1]) ? -1064061543 : 1064061526))) ? (arr_1 [i_0]) : (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1]))), (((!(arr_3 [i_0] [i_1] [i_1])))))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_21 = ((arr_0 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 + 1]));
            var_22 = (((arr_3 [i_0] [i_2] [i_2]) || (((((!(arr_6 [i_2]))) ? (arr_5 [i_2 + 1] [i_2 + 1]) : (arr_3 [i_2 + 1] [i_2 - 1] [i_2]))))));
        }
        arr_7 [i_0] = (min((((arr_2 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0]))), (arr_6 [i_0])));
    }
    #pragma endscop
}
