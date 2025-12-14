/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (!var_0);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = (!34109);
        arr_2 [2] = (arr_0 [i_0 + 1]);
        var_14 ^= ((((((((var_3 ? 511 : (arr_1 [i_0 - 1] [i_0 - 1])))) ? (arr_0 [i_0]) : var_11))) > (min(4294967269, ((min(65017, 511)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [4] = ((~((0 ? 20 : 1))));
        var_15 = (max(var_15, ((+(min((arr_5 [i_1]), (arr_3 [i_1] [1])))))));
        var_16 = var_1;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 = ((~((((!(arr_9 [i_2])))))));
        var_18 = (max(var_18, (((((arr_1 [i_2] [i_2]) ? var_11 : 4397778075648))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((max(((min(1, 1))), (arr_10 [i_3])))) ? var_11 : 0))));
        arr_14 [1] = (((~(min(511, (arr_7 [i_3]))))));
    }
    #pragma endscop
}
