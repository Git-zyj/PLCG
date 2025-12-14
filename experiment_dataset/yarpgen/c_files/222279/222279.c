/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((19 ^ 19) ? var_18 : (((((~var_7) > 4183184981520512653))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = 3222598040381416326;
        var_22 = ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = ((var_19 >= (!var_4)));
        var_24 += ((((((arr_4 [i_1] [i_1]) ? 2147483632 : (arr_4 [i_1] [i_1])))) || (arr_4 [i_1] [i_1])));
        var_25 = var_4;
        var_26 = (arr_2 [i_1]);
        var_27 = (min(var_27, ((((((arr_3 [i_1] [i_1]) ? (arr_1 [i_1]) : var_17))) ? (arr_3 [i_1] [i_1]) : ((~(arr_2 [1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = (arr_2 [i_2]);
        var_28 = (((((arr_0 [i_2]) > (arr_0 [i_2]))) ? ((((4183184981520512671 && (arr_3 [i_2] [i_2]))))) : var_5));
        var_29 = 76;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_30 = (arr_3 [i_3] [i_3]);
        arr_11 [i_3] [i_3] = (arr_2 [20]);
        arr_12 [i_3] = (arr_9 [i_3] [5]);
        var_31 = (((!-15377) ? ((min((arr_10 [i_3]), (arr_10 [i_3])))) : -123));
        var_32 = (min(var_32, (((((((max((arr_6 [i_3] [i_3]), (arr_7 [i_3])))) ? ((((arr_0 [1]) == (arr_2 [i_3])))) : (arr_9 [i_3] [6]))) >> ((((~((((arr_7 [3]) || var_2))))) + 26)))))));
    }
    #pragma endscop
}
