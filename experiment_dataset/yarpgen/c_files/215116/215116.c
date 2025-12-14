/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -25472;
    var_19 = ((((max((var_4 % var_3), (((var_13 ? var_11 : var_1)))))) && ((((((-2147483646 ? 15905042691282556695 : -2147483647))) ? (var_6 < var_11) : ((max(var_11, var_12))))))));
    var_20 = (((2147483647 >> ((((var_15 ? -6619466234542895327 : var_3)) + 6619466234542895371)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((((max(((max((arr_2 [i_0]), 32767))), (max(5947470481917245524, -6271904452060515408))))) ? ((((137385809 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : ((var_6 % (min((arr_2 [i_0]), (arr_3 [i_0])))))));
        var_21 -= (-(!-var_8));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_22 -= (((arr_8 [i_1] [i_2] [i_2]) + (arr_8 [i_2] [i_1] [i_1])));
            var_23 = (var_4 - 18446744073709551604);
            var_24 -= ((-6271904452060515416 | 6271904452060515415) ? (((-9223372036854775807 - 1) ? var_15 : var_9)) : (~100));
            var_25 = ((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2]));
            arr_11 [i_2] = ((~(arr_9 [i_1] [i_2])));
        }
        var_26 = ((~((var_3 ? (arr_9 [8] [8]) : (arr_9 [6] [6])))));
        var_27 = (min(((((-7244295129564964446 / 2147483623) ? ((var_11 ? (arr_8 [i_1] [i_1] [i_1]) : var_5)) : 137385833))), ((((min(var_7, var_12))) / (arr_10 [0])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_28 = ((~(max(((var_4 * (arr_14 [i_3]))), 1))));
        var_29 = (min(var_29, ((var_0 ? var_13 : (((((~(arr_0 [i_3] [i_3])))) ? ((-94 ? (arr_1 [i_3]) : (arr_1 [i_3]))) : (2119285579402144259 & 248)))))));
        var_30 += ((-((~((1 ? var_14 : -1369654307))))));
    }
    var_31 = ((((min(var_0, var_12))) ? -6271904452060515416 : 0));
    #pragma endscop
}
