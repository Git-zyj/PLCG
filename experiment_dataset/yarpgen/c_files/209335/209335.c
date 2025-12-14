/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((min(var_9, ((min(0, 133169152)))))) ? ((var_3 & (((var_3 ? var_7 : var_0))))) : var_3));
    var_18 = 108;

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0 + 2] = (min(var_7, (((arr_3 [i_0 + 1] [i_1 - 1] [i_1]) ^ (arr_3 [i_0] [i_0 + 2] [i_1])))));
            var_19 = (arr_3 [i_0 + 1] [i_0] [i_1 + 2]);
            arr_5 [i_0 + 2] [i_1 + 1] = (((!1574351907) / (((arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 1]) ? (arr_2 [i_0] [i_1] [i_1 + 2]) : (arr_0 [i_0 - 1])))));
        }
        var_20 = ((((((~(arr_3 [i_0] [i_0] [i_0])))) ? 2147483647 : (((arr_2 [i_0] [i_0] [i_0]) - (arr_0 [i_0 + 2]))))) + ((((arr_2 [i_0 - 1] [i_0 + 2] [i_0 - 1]) >= (arr_1 [i_0 + 2])))));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = ((((min(var_8, (arr_0 [i_2])))) ^ (arr_6 [i_2 - 1] [i_2])));
        var_22 = (((((!((min((arr_7 [i_2]), 1574351907)))))) != 1574351907));
    }
    var_23 = (((var_14 + 2147483647) << (((var_8 + 142320542) - 13))));
    var_24 = ((((!var_13) ? (~var_16) : var_1)));
    #pragma endscop
}
