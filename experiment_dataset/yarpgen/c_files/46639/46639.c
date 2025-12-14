/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((!(((41627 + (arr_0 [i_0]))))));
        var_16 ^= ((var_8 ? (~1) : ((var_14 ^ (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((arr_3 [i_1]) ? var_2 : var_2)) % 23907));
        arr_7 [i_1] [1] = var_4;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = var_14;
        arr_13 [i_2] = ((-((0 ? (arr_8 [i_2 + 1] [i_2]) : var_0))));
        var_17 = 23908;
        var_18 = (min(var_18, (((((min((max(3, -1)), var_11))) + var_14)))));
        arr_14 [i_2] = (((~((min(0, 1))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_19 = (((arr_8 [i_3] [i_3 + 1]) >> (var_3 - 1202078901)));
        var_20 = -1;
        var_21 = var_14;
        var_22 = (((arr_16 [i_3]) ? 26 : 1));
    }
    var_23 ^= (0 ? var_4 : -var_2);
    var_24 = var_3;
    var_25 = (min((((-865738245 + 0) - ((1 ? -2081859595 : var_3)))), ((var_2 - ((var_8 ? var_2 : 41628))))));
    var_26 = (max(var_26, -var_14));
    #pragma endscop
}
