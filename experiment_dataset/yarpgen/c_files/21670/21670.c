/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((1553049691407353020 ? 60 : 2)) - 98)) < -5));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min(229, 0))) <= (arr_3 [i_0]));
        arr_5 [i_0] = (min(89, -2));
        arr_6 [i_0] = (min((1 ^ 18446744073709551612), (((14 | ((82 ^ (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_9 [i_1] &= ((var_2 ? 189 : ((((((1 >> (((((-2147483647 - 1) - -2147483640)) + 18))))) && 244)))));
        arr_10 [i_1] = ((~((((((arr_8 [i_1]) + (arr_7 [i_1])))) ? (~12949977186155717512) : (((min((arr_8 [i_1]), var_7))))))));
        arr_11 [i_1] = 18446744073709551615;
    }
    var_21 = (max((((-(3 / var_16)))), (min(((min(var_2, var_3))), ((var_9 ? var_18 : 440189232036154144))))));
    var_22 = (((((!var_1) < -414253743)) ? (((((var_13 ? var_7 : 30))) ? 1 : 1)) : var_10));
    #pragma endscop
}
