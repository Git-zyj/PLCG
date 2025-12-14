/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 >> var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = (min((min(((12188010654710603062 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (arr_1 [i_0]))), 68719476735));
        var_12 = (((min(21, 496))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 = 44;
        arr_4 [i_1] [i_1] = (max((0 | var_7), ((((arr_3 [i_1]) ? var_0 : (arr_2 [i_1]))))));
        arr_5 [i_1] = (((16383 - 44) + (arr_0 [i_1] [i_1])));
        var_14 = (max((((arr_1 [i_1]) ^ 6975663658480931007)), ((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
    }
    var_15 *= ((var_1 << ((((-(var_4 && 8))) + 22))));
    var_16 = var_1;
    var_17 += ((((var_5 == var_5) ? var_8 : (min(var_0, 7)))));
    #pragma endscop
}
