/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_21 = (min((((((min(-12391, (arr_0 [i_0])))) >= ((~(arr_1 [i_0])))))), ((~(~2251799679467520)))));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = (((var_5 * (arr_6 [i_1] [i_1] [i_1]))));
            var_23 = (((18446744073709551615 ? (arr_4 [i_1]) : var_4)));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_24 = (arr_10 [i_1] [i_1] [i_3]);
            var_25 = ((-(arr_8 [i_1] [i_1] [1])));
            var_26 -= ((7 | var_4) <= (((0 >> (250 - 236)))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] = (((-7 + 2147483647) >> (-3002762689532677509 + 3002762689532677525)));
            var_27 = 50331648;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_28 = (8866358938995996496 <= var_2);
            arr_18 [i_1] = (arr_7 [i_1] [i_1]);
        }
        var_29 = ((8866358938995996499 ? 2147483644 : 47021));
    }
    var_30 = 114;

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_31 = ((((168 << (-32766 + 32784))) < var_18));
        var_32 *= var_13;
        var_33 = (arr_14 [i_6] [i_6] [i_6]);
        var_34 = (var_9 * var_18);
        arr_21 [i_6] [i_6] = (min((min(153, 2251799679467502)), (((-(arr_1 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_35 = var_15;
        var_36 = var_1;
        var_37 = -2599299487217766867;
    }
    var_38 = var_11;
    #pragma endscop
}
