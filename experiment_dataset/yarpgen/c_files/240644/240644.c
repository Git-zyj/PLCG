/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_9, (((var_9 ? 469209273310743852 : var_1))))));
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (min((((!(arr_5 [i_0 + 1] [i_1 - 1])))), ((var_3 ? (arr_1 [i_0]) : ((255 ? 65516 : (arr_5 [i_0] [i_1])))))));
                arr_8 [i_0] = (((!(arr_2 [i_0]))));
                var_12 -= ((((((((arr_3 [14]) > (arr_6 [18] [18] [i_1 - 1]))) ? (max(65516, 13827718481213003891)) : var_0))) ? ((min((max((arr_3 [14]), (arr_2 [10]))), (((arr_0 [12]) - (arr_5 [3] [i_1])))))) : (max((arr_4 [1]), (arr_4 [6])))));
                var_13 &= (((arr_0 [10]) ? (min(var_0, (arr_2 [14]))) : (((-(arr_0 [6]))))));
            }
        }
    }
    var_14 = (var_8 ? (min((20 - 1152921504606846975), -20)) : ((((!(((var_3 ? var_1 : 65516))))))));
    var_15 ^= (((26566 ? var_9 : (var_5 > 865246513))));
    #pragma endscop
}
