/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((-(250 / var_6))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min((((var_7 ? (arr_1 [i_1] [i_1]) : var_8))), ((~((var_15 ? 1 : var_6))))));
                    arr_6 [i_0] = (min(var_6, (max((13299 || 699128552), (max(21120, var_18))))));
                    arr_7 [i_2] [i_1] [i_0] = ((var_2 == (arr_5 [i_0] [i_0])));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((((min((var_15 + var_7), ((min((arr_4 [i_0] [i_1] [i_0]), var_15)))))) ? (((((arr_3 [i_0] [i_1] [i_0]) ? var_12 : 6)) / var_10)) : ((((arr_3 [i_1 - 4] [i_0 - 1] [i_0 + 1]) - (arr_3 [i_1 - 3] [i_0 - 1] [i_0 + 4]))))));
                }
            }
        }
    }
    #pragma endscop
}
