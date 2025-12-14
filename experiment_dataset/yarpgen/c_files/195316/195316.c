/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~21653);
    var_15 = (min((var_13 < var_6), var_8));
    var_16 = (((((var_0 & ((var_1 ? var_3 : var_0))))) ? (((-21653 ? 14333 : var_9))) : ((((!(1 & var_12)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [5] [i_0] = (((((var_10 != (arr_1 [i_0] [i_0]))) ? (min(158, 12733115572254088762)) : (!var_6))));
        var_17 = (min((((arr_0 [i_0]) | ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_0))))), (min(3163270661203164190, 15283473412506387425))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 |= ((arr_1 [i_1] [i_1]) ? ((((arr_0 [i_1]) ? 32226 : (arr_4 [i_1])))) : (arr_0 [i_1]));
        var_19 = (((arr_4 [i_1]) ? ((max(((min((arr_4 [i_1]), var_9))), (max((arr_4 [20]), 21653))))) : ((max((((!(arr_0 [1])))), (arr_4 [i_1]))))));
        arr_5 [20] [i_1] &= 12260;
        var_20 = (max(var_20, (arr_3 [i_1])));
    }
    #pragma endscop
}
