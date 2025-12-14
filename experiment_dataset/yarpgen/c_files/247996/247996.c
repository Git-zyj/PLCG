/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min((arr_1 [i_0]), (((arr_1 [12]) | ((2986669047 ? 1308298251 : (arr_0 [19])))))));
        var_13 = (arr_0 [i_0]);
        var_14 = 3209377841014872333;
        var_15 = var_6;
        var_16 = (max(-1308298249, (9329140578176958826 >= 9117603495532592811)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (((((-(arr_3 [i_1])))) ? (arr_2 [i_1]) : ((var_5 ? 2986669059 : var_10))));
        arr_4 [i_1] = ((-(arr_2 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_18 = ((-45 ? 9329140578176958819 : (arr_7 [i_2])));
        var_19 = (((((var_0 ? var_5 : -2101212495))) ? (var_3 / 1308298249) : -9117603495532592822));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = ((-(((arr_3 [i_3]) ? (arr_3 [i_3]) : (arr_3 [i_3])))));
        var_21 = (min((min(1410051886150583519, (arr_5 [i_3] [i_3]))), (arr_5 [14] [i_3])));
    }
    var_22 += ((-((var_2 ? ((var_2 ? var_9 : var_8)) : var_4))));
    #pragma endscop
}
