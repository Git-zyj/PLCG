/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((27 != 18446744073709551589) ? ((var_10 ? 17 : var_10)) : (!var_0))), var_3));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [12] = ((((!(arr_1 [i_0] [i_0]))) ? (arr_0 [i_0]) : (~-32758)));
        arr_4 [3] &= 32744;
        var_13 = (min(var_13, ((((arr_0 [i_0]) ^ 1)))));
        arr_5 [17] = (arr_1 [5] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_1 [22] [1]);
        var_15 = (arr_8 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_13 [23] = ((-32759 ? ((~(((arr_6 [20]) % 59187)))) : ((18446744073709551612 ? (arr_2 [i_2] [i_2]) : (((2421604108 && (arr_0 [i_2]))))))));
        arr_14 [1] = (!32765);
    }
    #pragma endscop
}
