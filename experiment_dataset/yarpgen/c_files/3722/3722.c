/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = ((((((arr_2 [i_0 - 2] [i_0 - 3]) ? var_2 : 16384))) ? (min(((var_10 ? var_6 : var_1)), (var_3 | var_8))) : (((((min(var_3, var_4)))) | ((var_4 ? var_1 : var_9))))));
        var_12 = (((min((var_4 < var_0), (var_2 < var_8))) ? (max(((var_0 ? var_1 : var_1)), var_10)) : (((var_6 ? var_2 : ((var_1 ? var_10 : var_8)))))));
        arr_4 [i_0] [i_0] = ((((min((var_1 % var_10), ((max(var_9, var_8)))))) ? ((((max(var_10, var_0))) + (max(var_10, var_1)))) : ((((var_8 ? var_10 : var_10))))));
        var_13 = (((((-(arr_3 [i_0 + 1] [i_0 - 1])))) % (((!var_1) ? (((max(var_9, var_9)))) : (max(var_4, var_1))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = ((((((var_4 < var_8) % (arr_0 [i_1 - 1])))) | (min((((var_9 ? var_9 : var_10))), (min(var_10, var_6))))));
        arr_7 [i_1] = (((((var_7 ? 2807159965 : var_3))) ? (max(0, 1487807330)) : ((var_2 + (arr_3 [i_1 - 2] [i_1 - 1])))));
        var_15 -= (((((min(var_4, var_8)))) && ((((((var_9 ? var_4 : var_1))) ? var_10 : var_7)))));
        var_16 += (max((max(((var_10 ? var_7 : var_1)), (((var_10 ? var_10 : var_9))))), (max((min(var_4, var_7)), ((var_9 ? var_10 : var_7))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_17 = ((((((min(var_5, var_10))) ? ((var_3 ? var_10 : var_6)) : (var_4 && var_7))) % ((max(1191222586, ((min(var_4, var_9))))))));
        arr_10 [i_2] = (~var_0);
        arr_11 [i_2] = ((!((((~var_0) | (~var_6))))));
    }
    var_18 = ((((min(((var_10 ? var_10 : var_3)), var_4))) || ((((var_3 ? var_9 : var_4)) < var_0))));
    var_19 += var_0;
    var_20 = ((((((((var_9 ? var_6 : var_3))) ? (((var_9 ? var_5 : var_3))) : (min(var_7, var_2))))) ? var_5 : (max((max(var_4, var_7)), (!var_8)))));
    var_21 = (min(var_21, ((min(var_3, var_8)))));
    #pragma endscop
}
