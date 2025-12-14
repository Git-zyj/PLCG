/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] |= (arr_3 [i_0]);
                var_21 = (max(var_21, ((((arr_3 [i_0]) != (min(((1 ? (arr_1 [i_0]) : (arr_3 [i_0]))), (((var_11 ? -8186582119566653392 : 1606786416))))))))));
                var_22 = ((((((arr_0 [i_0]) | var_12))) ? ((((!(arr_0 [i_0]))))) : (((arr_0 [i_0]) << (4263516831873738719 - 4263516831873738672)))));
            }
        }
    }
    var_23 = (max(var_23, ((((!(-9223372036854775807 - 1)))))));
    var_24 = var_18;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_25 += (max((arr_10 [i_2]), (arr_13 [i_2 - 1] [0] [i_2])));
                var_26 = -2797950475129001445;
                var_27 = (max(var_27, ((((arr_6 [0]) ? (max((min(1454602701292125972, var_19)), 1)) : (((arr_13 [i_2] [18] [18]) ? (arr_13 [i_2] [4] [i_3]) : (arr_13 [i_2] [4] [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
