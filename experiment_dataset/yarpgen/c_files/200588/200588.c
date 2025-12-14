/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 ^= (~var_9);
    var_16 = var_12;
    var_17 = (var_7 || 1589831723);

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((var_13 ? var_5 : var_4) - var_6)));
        arr_3 [i_0] = ((+(((arr_0 [i_0 - 3] [i_0 + 1]) ? var_10 : (arr_0 [i_0 - 2] [i_0 - 2])))));
        var_18 = (3215813850 ? 1589831723 : 300939014198109416);
        arr_4 [i_0] = (((arr_1 [i_0 - 2]) ? var_4 : (((~var_1) ^ (arr_0 [i_0] [i_0 - 3])))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = ((((min(228, -1589831717)) + 2147483647)) << (arr_0 [i_1 - 1] [i_1 - 1]));
        arr_7 [i_1] [i_1] = (arr_1 [2]);
        var_20 &= (+-113);
    }
    #pragma endscop
}
