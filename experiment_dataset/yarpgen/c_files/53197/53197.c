/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 5662558101370465107;
        arr_3 [10] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (~248)));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = ((-22943 ? 15 : (arr_4 [i_1])));
        arr_8 [i_1] [9] = ((~(((arr_4 [i_1 + 3]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 2])))));
        arr_9 [i_1] [i_1] = (arr_6 [i_1 - 1]);
    }
    var_16 = ((~(((((22935 ? 7 : var_2))) ? (30887 * -17) : var_7))));
    var_17 = ((var_1 / (var_14 == var_14)));
    var_18 = (max(var_18, (((var_4 ? var_13 : (((((11 ? 4007460593 : 1))))))))));
    #pragma endscop
}
