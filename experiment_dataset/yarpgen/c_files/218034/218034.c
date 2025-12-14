/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!var_2) - var_11);
    var_16 = (max((!var_13), ((var_12 ? var_11 : (min(-1895585322827744818, var_4))))));
    var_17 = (+(min((var_6 / var_13), var_3)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((63 >> (var_5 - 1157)))));
        arr_2 [i_0] = ((((var_11 ? (!var_9) : var_10)) > (arr_1 [i_0])));
        var_19 = (min(((((-1 + 2147483647) >> (-1 + 7)))), (min((var_3 / var_11), ((11707 ? var_8 : var_1))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_20 &= 11701;
        var_21 = ((((((var_13 >> (-30408 + 30418))))) ? ((min(var_5, (arr_1 [i_1])))) : var_3));
        arr_7 [i_1] = -11708;
    }
    #pragma endscop
}
