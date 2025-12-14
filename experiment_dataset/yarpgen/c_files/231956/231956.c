/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [22] = (((((arr_2 [i_0 + 1]) || (arr_5 [i_0 - 1] [i_0 - 2]))) ? ((((((arr_3 [17]) ? var_13 : (arr_0 [i_0 - 2] [i_1])))) ? ((17847 ? var_13 : -24961)) : (max(var_7, var_3)))) : (((var_1 ? var_10 : (var_8 || var_1))))));
            var_15 = (min((((((var_5 || (arr_1 [i_1]))) && (((var_8 ? var_13 : var_3)))))), ((((((arr_4 [i_1] [i_0]) ? (arr_3 [i_1]) : var_6))) ? var_13 : var_0))));
            var_16 = (max(var_16, (((-((max(var_0, 18))))))));
        }
        var_17 ^= ((((((arr_3 [i_0 - 2]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 1])))) ? (18 || 234) : (arr_3 [i_0 - 1])));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 21;
        var_18 = (max(var_18, ((max((((((min(var_1, var_1))) || ((max(var_12, var_11)))))), (((((26 ? 21 : 208))) ? var_4 : var_3)))))));
    }
    #pragma endscop
}
