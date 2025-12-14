/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 7;
    var_12 ^= ((((78 ? ((8118447259454837901 ? 1 : 50924)) : ((min(var_10, var_10))))) % 65525));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 *= (((((((arr_3 [i_0] [i_0]) || (arr_2 [i_0]))))) == ((18010000462970880 ? 3078796664347747770 : (arr_0 [8])))));
        arr_4 [9] = (arr_1 [i_0]);
        arr_5 [2] = ((var_4 * ((max(var_9, var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_9 [3] [i_1] = (((arr_1 [2]) ? (arr_1 [i_1]) : (arr_1 [i_1])));
        arr_10 [i_1] = ((1 ? var_10 : 0));
        var_14 *= (var_4 / 82);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_15 = var_7;
        arr_14 [i_2] = (max(((-((0 ? var_0 : (arr_0 [i_2]))))), (min((224 + var_0), var_9))));
        var_16 = var_2;
    }
    #pragma endscop
}
