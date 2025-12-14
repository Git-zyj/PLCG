/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (var_15 && 16383);
        arr_2 [i_0] [i_0] = ((-880295833 ? 10058 : (arr_1 [i_0])));
        var_17 = (min(var_17, (((((((((-(arr_1 [i_0])))) ? (((arr_1 [4]) + (arr_0 [i_0]))) : ((((arr_1 [i_0]) ? var_8 : (arr_0 [i_0]))))))) ? (((((arr_0 [i_0]) >= (((arr_0 [16]) ? (arr_0 [i_0]) : var_11)))))) : (arr_0 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (arr_3 [i_0] [10])));
            var_19 += (arr_3 [4] [1]);
            arr_5 [i_0] [i_0] [i_1] = 0;
            var_20 = (((arr_1 [i_0]) - (arr_1 [i_0])));
            var_21 = (!5868852983531545609);
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_22 = var_12;
            var_23 = 65535;
            arr_8 [i_0] [6] [i_2] = (arr_3 [i_0] [i_0]);
        }
    }
    var_24 = ((var_11 && ((min(var_13, 6738573877443330049)))));
    #pragma endscop
}
