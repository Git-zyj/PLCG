/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 += ((max((max(var_15, var_4)), ((min(0, var_14))))) > var_16);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((+(min((max((arr_3 [20]), -119292472)), 890263277)))))));
                    arr_9 [i_1] [i_1] = ((~((var_10 ? (arr_5 [i_0] [i_1]) : -59))));
                    arr_10 [i_1] [8] [1] = (min(((((((arr_4 [i_0 + 1] [i_1] [i_2]) / (arr_4 [i_0 - 1] [i_1] [i_2])))) ? (arr_1 [i_0 - 2]) : ((var_5 ? var_11 : var_8)))), ((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : -27390)))));
                    var_22 = (min(var_22, 2060993100));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] = (min(2557835728, 1));
        var_23 &= ((arr_6 [i_3]) ? (min(var_8, ((((arr_4 [i_3] [i_3] [i_3]) < 268630194))))) : -184);
        arr_16 [i_3] = (max(((((arr_2 [i_3]) ? (arr_11 [i_3]) : (min((arr_3 [15]), 3734735367))))), ((+((var_13 ? (arr_14 [i_3]) : (arr_4 [i_3] [i_3] [i_3])))))));
    }
    #pragma endscop
}
