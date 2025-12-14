/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0 - 1] = var_7;
        var_13 = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_14 += (min((((((var_9 ? (arr_5 [i_1]) : 172)) << (!var_11)))), (((var_7 ? 13086909441924961873 : 16)))));
        var_15 = ((-1 ? ((((!172) != -4594992884448743751))) : (((((var_7 ? var_4 : var_2)) != var_0)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = var_6;
        var_16 = (min(var_16, ((((((((var_9 < var_2) < 8514345022633780661)))) != (min(var_7, ((var_0 ? (arr_7 [1] [6]) : 498910556)))))))));
        arr_9 [i_2] [i_2] = (min(((min((((20507 ? (arr_1 [i_2]) : (arr_2 [i_2])))), -1662295721))), (((((var_0 ? var_4 : var_2))) ? ((max(var_9, 135))) : (min(var_2, (arr_0 [14])))))));
    }
    #pragma endscop
}
