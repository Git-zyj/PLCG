/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 36152));
    var_11 += var_8;
    var_12 = (min(var_12, (((((max(var_2, 1))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [7] [7] |= (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [1])));
        arr_4 [i_0] = 1737512087409174498;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 ^= ((14568007432476579577 >> (((arr_5 [i_1]) - 3136751690))));
        var_14 = (max(var_14, ((((arr_1 [i_1] [i_1]) ? ((~(arr_8 [i_1]))) : (arr_0 [i_1] [i_1]))))));
    }
    var_15 = var_2;
    #pragma endscop
}
