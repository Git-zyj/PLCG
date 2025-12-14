/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (var_6 / -15);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = (arr_1 [i_0]);
            arr_5 [i_0] = (((arr_4 [i_0]) ? ((-(arr_4 [i_0]))) : 0));
        }
        arr_6 [16] [i_0] = (((arr_2 [i_0]) != 248));
        arr_7 [i_0] = (((arr_3 [i_0]) ? 15 : ((var_3 ? (arr_0 [i_0] [i_0]) : 1))));
        var_16 = (arr_3 [i_0]);
        var_17 += ((1 ? -9 : 5));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 += ((-((~((1 ^ (arr_9 [i_2] [i_2])))))));
        var_19 = (min(var_19, (((((min(((((arr_8 [i_2]) ? 230 : var_10))), (((arr_9 [i_2] [i_2]) ? 1686249544 : (arr_9 [i_2] [15])))))) ? (((-6283 ? 30824 : 2940558713))) : (((138 ? (((!(arr_9 [i_2] [i_2])))) : (arr_9 [i_2] [1])))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 6;i_3 += 1)
    {
        var_20 = ((-(arr_2 [i_3])));
        var_21 += 5572202003154401272;
        var_22 = (max(var_22, (arr_0 [1] [i_3 - 1])));
        arr_14 [i_3] = (1 * 0);
    }
    var_23 = (min(1, (((1 ? -var_5 : ((max(154, 15))))))));
    #pragma endscop
}
