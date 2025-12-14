/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_18 = (arr_0 [i_0]);
        var_19 = (max((max((arr_0 [i_0]), (arr_0 [i_0]))), (arr_1 [i_0] [i_0])));
        var_20 = arr_0 [i_0];
        var_21 ^= ((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) < (min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [9] = ((((max((arr_0 [i_1]), (arr_0 [i_1])))) ? (arr_1 [i_1] [i_1]) : ((min((arr_2 [i_1]), (arr_2 [i_1]))))));
        arr_7 [i_1] = ((56010 ? -7833601623383451216 : 8114891915606636059));
        arr_8 [i_1] = (arr_2 [i_1]);
    }
    var_22 = (min(var_22, (min((((!(52 & 7833601623383451224)))), ((var_16 / (min(var_3, var_12))))))));
    var_23 = (max(var_15, var_14));
    #pragma endscop
}
