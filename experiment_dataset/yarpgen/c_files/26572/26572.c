/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] = (arr_0 [i_0]);
            var_15 += ((1 || (arr_1 [i_0])));
        }
        var_16 = (arr_2 [i_0]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 -= 124;
        arr_8 [i_2] = ((var_6 & (((arr_2 [i_2]) ? (arr_0 [i_2]) : (arr_1 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 = ((((!(((var_3 ? (arr_0 [6]) : var_14))))) ? (((((((arr_0 [i_3]) ? (arr_5 [i_3] [i_3]) : var_11))) && (var_3 && var_2)))) : (((arr_3 [i_3] [i_3]) ? 1 : ((((arr_1 [10]) || (arr_2 [i_3]))))))));
        arr_11 [i_3] [i_3] = ((min(-14678, 1)));
        arr_12 [i_3] [i_3] = ((min((!var_11), (arr_1 [i_3]))));
    }
    var_19 += (124 + 1);
    #pragma endscop
}
