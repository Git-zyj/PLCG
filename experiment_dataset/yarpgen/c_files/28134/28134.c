/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_3 ? 62 : var_9)) ? ((-7700358422400538051 ? var_10 : -465974525933055933)) : var_10))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_12 -= ((((((max(15599674298612687946, var_1)) + (463052864 + var_2)))) ? ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0 + 1])))) ? (min((arr_0 [i_0]), (arr_2 [i_0 + 2]))) : (~var_8))) : (((((arr_2 [i_0]) ? var_1 : (arr_2 [i_0]))) >> (((-1459766533 && (arr_2 [1]))))))));
        var_13 ^= ((((((((arr_2 [i_0]) == (arr_0 [i_0]))) && ((!(arr_0 [i_0])))))) <= (((!(arr_2 [i_0 + 2]))))));
        var_14 = (max(var_14, ((((((((((arr_0 [i_0]) & (arr_2 [i_0])))) && (arr_1 [i_0])))) >> (((((((~(arr_2 [i_0])))) ? (arr_1 [i_0]) : ((((arr_0 [i_0]) ? var_0 : var_0))))) - 189)))))));
        var_15 = ((!(((arr_0 [i_0 + 2]) && (arr_2 [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = ((var_9 ? (~var_0) : ((465974525933055926 ? -9076547649753091538 : var_9))));
        var_17 = (((arr_3 [i_1] [i_1]) || ((!(arr_4 [i_1] [i_1])))));
        arr_5 [i_1] = ((477922911 ? (((arr_4 [11] [i_1]) ? -5580818545647974900 : (arr_3 [i_1] [i_1]))) : -465974525933055933));
        var_18 = (((arr_4 [i_1] [i_1]) ? 7708659572824553783 : (((((arr_4 [i_1] [i_1]) && (arr_4 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_4 [i_2] [i_2]);
        arr_10 [i_2] [4] = ((((((((arr_6 [19]) ? 3817044393 : 477922903))))) | (min((arr_8 [i_2]), (arr_7 [i_2])))));
        var_19 = (((((var_0 <= 1702607262) ? ((((arr_4 [19] [19]) ? (arr_3 [2] [i_2]) : var_9))) : ((-465974525933055933 ^ (arr_8 [i_2])))))) ^ (arr_7 [i_2]));
        var_20 = (((((~(((arr_7 [i_2]) ? (arr_8 [i_2]) : 36))))) * (((arr_6 [i_2]) ? (arr_7 [16]) : var_2))));
    }
    var_21 = (((((-(max(var_10, var_0))))) ? ((var_3 ? ((var_3 ? var_10 : var_8)) : (((var_4 ? var_2 : var_0))))) : 40459));
    var_22 = (((min(25077, var_8))));
    var_23 = ((((((var_8 && var_4) / ((var_10 ? var_3 : var_8))))) ? var_10 : (((var_0 ? (-1702607263 && var_7) : (min(var_9, var_4)))))));
    #pragma endscop
}
