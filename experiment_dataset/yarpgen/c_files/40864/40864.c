/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= max((min((~var_5), (-1152921504606846976 / 96))), var_8);

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_11 = (((-127 - 1) ? -100 : -44));
        var_12 = (min(var_12, (arr_0 [i_0] [i_0])));
        var_13 ^= (arr_1 [i_0] [i_0]);
        var_14 = (max(var_14, (arr_1 [i_0] [i_0])));
        var_15 = 120;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_16 &= (((min(-124, -9223372036854775789)) > (arr_3 [7])));
        var_17 = (((((!(arr_4 [i_1])))) - ((min(0, var_0)))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_18 = (min(var_18, (arr_4 [i_2])));
            var_19 = ((2097136 && ((min((-127 == 42), (max((arr_2 [i_1] [i_2]), var_3)))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_20 = (max(4789247607486502838, ((var_8 ? (max(0, -1102232501403900683)) : 77))));
            var_21 = (-(((110 ? -2800354070757269461 : 0))));
            var_22 = ((((max(var_9, var_7)))) / var_6);
            var_23 = (max(var_23, (((((min(((var_0 ? (arr_7 [i_1] [1] [i_3]) : -1)), ((max((arr_8 [i_1]), var_4)))))) ? ((max(112, (!125)))) : 15)))));
            var_24 = (max((arr_7 [i_1] [i_1] [i_3]), (((arr_7 [i_1] [i_1] [i_1]) ? 9223372036854775807 : (arr_7 [i_1] [i_3] [i_3])))));
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_25 *= (((arr_11 [i_4] [i_4]) ? 108 : ((var_7 >> (max((arr_15 [i_4]), var_2))))));
        arr_16 [5] = ((!(((-20 ? -114 : -88)))));
        arr_17 [i_4] [i_4] = ((-8 ? (arr_7 [i_4] [i_4] [i_4]) : (((!(((112 ? (arr_10 [18]) : var_3))))))));
        arr_18 [i_4] = ((((arr_12 [i_4] [i_4]) ? (arr_12 [i_4] [i_4]) : (arr_12 [i_4] [i_4]))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = (((min(var_3, (arr_9 [i_5] [i_5] [i_5]))) / ((((arr_9 [i_5] [i_5] [i_5]) ? (arr_9 [i_5] [i_5] [i_5]) : var_9)))));
        var_26 ^= -var_2;
        arr_24 [8] = ((!(((((min(-34, var_1))) ? (~17) : var_3)))));
        var_27 = ((8 >> (((((((max((arr_13 [i_5] [i_5]), (arr_14 [i_5] [i_5]))) + 9223372036854775807)) << (var_3 - 8634128454722271479))) - 8801798217956285065))));
        var_28 = arr_21 [i_5] [i_5];
    }
    var_29 = min((((((max(var_3, var_8))) ? var_0 : var_9))), (max(-57, 7867606984812528402)));
    #pragma endscop
}
