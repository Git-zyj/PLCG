/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = (min(var_20, (((((~(max(2439219146, var_17)))) * (((((max(62640, 14226))) ? (!var_2) : (!var_8)))))))));
    var_21 = var_11;
    var_22 |= -var_7;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_23 = ((!(((max((arr_1 [i_0]), (arr_1 [i_0 - 1])))))));
        var_24 = (arr_1 [i_0]);
        arr_3 [i_0] = ((-((-(arr_2 [i_0] [i_0])))));
        var_25 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((!(((((max((arr_0 [i_1]), (arr_1 [i_1])))) ? (((-(arr_4 [11] [11])))) : (((arr_5 [2]) ? (arr_1 [i_1]) : (arr_0 [16]))))))));
        var_26 += max(((max((arr_0 [i_1]), (arr_5 [12])))), ((((max(var_4, (arr_5 [i_1])))) ? (arr_2 [i_1] [i_1]) : ((((arr_5 [i_1]) * (arr_4 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_27 += arr_4 [i_2] [i_2];
        var_28 = ((((!(((-(arr_2 [i_2] [i_2]))))))));
    }
    #pragma endscop
}
