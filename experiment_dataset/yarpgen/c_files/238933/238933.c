/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((~(arr_3 [i_0] [i_1] [i_1])));
                arr_4 [6] [i_0] = (max(var_5, var_10));
                arr_5 [i_0] [i_0] = ((~(((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
                var_18 += (((((32858 != -9040603749798897085) ? (max((arr_3 [i_1] [i_1] [i_0]), 923468556852757878)) : ((min(1085706715, 3)))))) ? (((((9884403989852623385 ? var_15 : (arr_2 [2])))) ? var_7 : ((var_8 ? 9884403989852623406 : var_16)))) : var_3);
            }
        }
    }
    var_19 = (min((min((min(9884403989852623383, 15)), ((max(204, var_11))))), (65535 != var_11)));
    var_20 = (min(var_20, var_11));

    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_21 ^= ((((((((3 ? 6649128274910520794 : (arr_2 [6])))) ? (min(var_15, var_16)) : (204 || 0)))) ? var_13 : (((arr_2 [0]) ? var_9 : (((((arr_2 [2]) && 230))))))));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = 4294967295;
            var_22 ^= (arr_8 [i_2]);
            var_23 -= (((arr_3 [i_3] [i_3 + 1] [i_3]) * (min((219965836 && var_2), 6))));
            arr_13 [i_2] [i_2] [i_2] = ((+(((!281474976710655) ? -6 : (!11)))));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_24 *= ((!((((arr_2 [8]) - var_3)))));
        var_25 *= var_5;
        var_26 *= (((((((((arr_15 [i_4]) ? (arr_2 [10]) : var_6))) ? var_6 : (max(var_3, (arr_10 [i_4])))))) ? ((-((((arr_11 [i_4] [i_4]) || (arr_10 [i_4])))))) : (!var_15)));
    }
    #pragma endscop
}
