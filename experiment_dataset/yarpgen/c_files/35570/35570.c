/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (((((var_12 ? var_4 : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = (((arr_0 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (arr_3 [i_0])));
            var_19 = ((((var_4 ? (arr_0 [i_0] [i_0]) : (arr_3 [i_1]))) & (var_14 && var_2)));
        }
        var_20 -= ((!(arr_1 [16])));
        arr_4 [i_0] [i_0] = ((!(arr_2 [i_0] [i_0] [i_0])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = (((((!(!-7590494376059119867)))) != (arr_6 [i_2] [i_2])));
        arr_7 [i_2] [i_2] = ((!((((arr_6 [i_2] [i_2]) | (arr_6 [i_2] [i_2]))))));
    }
    var_22 = (max(((((var_13 & var_2) + (!var_12)))), (((!var_9) - ((var_3 ? -257309194874655000 : 1))))));
    var_23 = var_16;
    var_24 = ((131509468 ? -1290367546 : 22202));
    var_25 -= ((!(((var_8 ^ (var_3 && var_7))))));
    #pragma endscop
}
