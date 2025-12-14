/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((0 & (-2147483647 - 1))) + (((arr_0 [i_0]) ? 1329191441444145758 : 1329191441444145749))));
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = ((((((var_4 >= 438040356) ? (min((arr_1 [i_0] [i_0]), var_5)) : (438040356 >= 0)))) <= 18446744073709551615));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [1] = (arr_1 [6] [6]);
        var_15 = 1638404189;
    }
    var_16 = (min(((var_2 ? ((18446744073709551612 ? 7024 : 17117552632265405854)) : var_0)), var_5));
    #pragma endscop
}
