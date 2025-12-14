/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_15 = ((!(((var_2 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1]))))));
            var_16 = arr_0 [i_0];
            var_17 = (max(var_5, (arr_3 [i_1] [i_0])));
            var_18 = (max((((!(!0)))), (((var_12 + 9223372036854775807) << ((((var_12 ? 207 : (arr_1 [i_1]))) - 207))))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_2 - 2] = var_12;
            arr_7 [i_0] [i_0] [i_2 - 2] = ((!(max((arr_3 [0] [i_2 + 2]), (arr_3 [i_0] [i_2 + 2])))));
        }
        var_19 = (max((arr_0 [i_0]), var_12));
    }
    var_20 = var_12;
    var_21 = var_7;
    #pragma endscop
}
