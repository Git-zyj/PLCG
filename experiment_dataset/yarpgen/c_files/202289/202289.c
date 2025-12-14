/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min((var_2 != var_4), (var_0 != var_12)))), ((12782887866850310440 ? 12782887866850310426 : 12782887866850310440))));
    var_16 = (((min(-100, var_0)) - ((((!(var_13 != var_13)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_17 = (arr_1 [i_0]);
            arr_6 [19] = (arr_0 [9]);
        }
        var_18 |= ((arr_5 [i_0]) ? (arr_5 [i_0]) : (((arr_5 [i_0]) & (arr_5 [i_0]))));
        var_19 = (arr_4 [11] [i_0] [21]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_20 = (arr_5 [i_2]);
        arr_9 [i_2] [i_2] = ((!(arr_1 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_21 = (((arr_0 [i_3]) ? (arr_0 [i_3]) : 766));
        var_22 = (((arr_5 [i_3]) ? (arr_5 [i_3]) : (arr_7 [i_3] [i_3])));
    }
    #pragma endscop
}
