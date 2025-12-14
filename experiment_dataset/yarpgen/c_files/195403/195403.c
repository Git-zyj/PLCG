/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(((var_2 << (var_10 - 156253863))), var_2)) >> ((((((-1769696098 ? 2863340730 : 3741603266223233328)) | var_6)) - 2931760556))));
    var_16 = var_6;
    var_17 = (((!var_8) ? (!var_12) : ((max(var_9, (!var_14))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 = (min(var_18, (((1769696087 | (var_6 & var_2))))));
        arr_3 [3] = ((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 1]) : var_11);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = (-8561909150109489651 <= 3741603266223233328);
        var_20 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 = var_1;
            var_22 = (max(var_22, ((((arr_4 [i_3] [11]) && ((((arr_7 [i_3]) | (arr_8 [6] [6])))))))));
            arr_13 [i_2] [i_3] = ((!(arr_6 [13])));
        }
        arr_14 [6] [i_2] = ((217 * (arr_9 [i_2])));
    }
    #pragma endscop
}
