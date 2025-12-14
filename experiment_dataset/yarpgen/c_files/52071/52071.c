/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (((31 ^ 26) ? (~-36) : (((((var_9 ? 70 : var_1))) ? -41 : (var_10 | var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((var_6 ? ((((((arr_0 [10] [i_1]) ? (arr_6 [i_0]) : var_9)) == (arr_3 [i_1])))) : ((min(var_7, var_13))))))));
                arr_7 [6] [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? ((min(-17, var_11))) : (((!(arr_6 [i_0]))))))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_17 &= ((!((((((var_4 ? var_3 : (arr_11 [20])))) ? ((((arr_8 [i_2]) || 2))) : (arr_11 [20]))))));
        var_18 = ((!((min(var_5, (((arr_9 [i_2]) | var_4)))))));
    }
    #pragma endscop
}
