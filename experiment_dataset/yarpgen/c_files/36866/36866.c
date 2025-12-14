/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((max((min(var_9, var_6)), var_2)))));
    var_11 = var_5;
    var_12 = (min(var_12, (min((((58130 ? 2925022394 : 10961018))), (min(-9223372036854775805, 1369944901))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        arr_3 [i_0] = (~1369944916);
        arr_4 [3] = var_4;
        var_13 = 35;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (min((((var_3 > (arr_5 [i_1])))), (max(var_5, (var_4 & var_8)))));
        arr_9 [4] [i_1] = var_8;
        var_14 -= (min(2925022394, 2925022380));
        var_15 = 13;
        arr_10 [i_1] = (min((((!(arr_6 [i_1 + 2])))), ((13 ^ (arr_6 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] = arr_11 [i_2] [i_2];
        var_16 = (i_2 % 2 == 0) ? ((((~-36) >> (((min(8628702715412901302, (arr_11 [i_2] [i_2]))) - 127368990))))) : ((((~-36) >> (((((min(8628702715412901302, (arr_11 [i_2] [i_2]))) - 127368990)) - 18383446)))));
        arr_14 [i_2] [i_2] = var_2;
        arr_15 [i_2] [i_2] = (max(var_9, (var_6 <= 35)));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_17 = (~-var_2);
        var_18 = (min(((+((var_6 ? (arr_17 [i_3]) : var_2)))), var_6));
        arr_19 [i_3] = (max(((-(arr_17 [i_3 - 2]))), (39 && 4311704639516419507)));
        var_19 = 2925022394;
    }
    #pragma endscop
}
