/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] [20] = ((var_18 ? (max((max(var_8, var_14)), ((4294967277 ? 27517 : 18322171753398645978)))) : (((((max(var_4, var_8))) ? ((var_12 ? var_10 : var_9)) : var_10)))));
            var_20 *= ((((min(var_2, var_16)) >> (var_15 - 148))));
        }
        var_21 = ((((max(((var_0 ? var_10 : var_12)), ((((var_13 + 2147483647) >> (var_13 + 28677))))))) ? ((var_7 ? (max(var_12, var_0)) : ((var_6 ? var_0 : var_3)))) : (max(((max(var_18, var_2))), (var_1 & var_16)))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = (max((((max(27518, 7367755552735805539)) - var_13)), ((((max(var_18, var_7))) ? ((min(var_13, var_7))) : (var_0 / var_1)))));
        var_22 += ((((((((max(var_13, var_15)))) - (var_3 / var_8)))) * (max((var_7 | var_14), (max(27517, 12624002494361697535))))));
        var_23 = (min(var_23, ((max((max(var_10, var_16)), (max(var_1, var_14)))))));
    }
    var_24 = (max(var_24, ((min(2032, 27517)))));
    #pragma endscop
}
