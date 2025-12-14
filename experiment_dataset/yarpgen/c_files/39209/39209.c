/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (min(var_14, ((((var_7 <= 13542) <= 52007)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_15 *= ((((((16128 * (arr_0 [6]))) == 52007)) ? ((((13525 != (arr_5 [12] [i_1 + 1] [i_1 - 1]))))) : (((((3674103972108080766 ? var_2 : 255))) ? (min(0, 17910059504886858129)) : ((((arr_4 [2] [2] [2]) % 118)))))));
            var_16 = (min(var_16, ((((arr_1 [i_1 + 3] [i_1 + 2]) ? (arr_1 [i_1 + 3] [i_1 + 2]) : (((arr_1 [i_1 + 3] [i_1 + 2]) ? (arr_1 [i_1 + 3] [i_1 + 2]) : (arr_1 [i_1 + 3] [i_1 + 2]))))))));
        }
        var_17 = (min(var_17, ((min((arr_0 [14]), (((arr_0 [14]) ? ((var_1 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))))))));
        arr_6 [i_0] [i_0] = (((arr_3 [16] [i_0] [i_0]) ? (max(118, (arr_4 [i_0] [i_0] [i_0]))) : (!3596912459)));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = 181;
        var_19 = (((var_12 ? (arr_9 [i_2]) : (arr_9 [i_2]))) | (arr_9 [i_2]));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_20 = ((((arr_13 [i_3]) ? 0 : var_10)));
        var_21 = 32;
    }
    var_22 = var_7;
    var_23 = var_1;
    #pragma endscop
}
