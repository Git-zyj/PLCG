/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((min(((max(var_15, var_2))), var_14)) + 9223372036854775807)) << (((((((var_14 ? var_12 : var_13))) ? (max(-1235239204, var_0)) : ((max(262143, var_5))))) - 18446744072474312412))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] &= arr_3 [i_1];
            var_18 = ((!((max(-262143, (arr_0 [i_1] [i_0]))))));
            var_19 = (((((+((((arr_2 [i_1]) <= var_3)))))) ? ((max((max(var_9, 262148)), (arr_0 [i_0] [i_1])))) : ((-(arr_3 [i_1])))));
        }
        var_20 = (max(var_20, ((min(((min(((!(arr_1 [i_0]))), ((!(arr_0 [i_0] [i_0])))))), (((arr_0 [i_0] [i_0]) ? (max((arr_1 [i_0]), (arr_3 [i_0]))) : ((((!(arr_5 [i_0] [i_0]))))))))))));
        var_21 = (min(var_8, ((max((min(17599, 262142)), 1)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 = (max(var_22, var_10));
        var_23 = (arr_1 [i_2]);
    }
    var_24 = (min(var_24, ((var_2 ? (!-10) : (((max(262147, 642422724)) + var_6))))));
    #pragma endscop
}
