/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((14036462924842938518 * var_8) ? (14583604421997396111 / var_2) : (min(var_4, 4410281148866613111)))) - var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (((((!(arr_3 [4] [7] [i_0])) ? (min((arr_0 [i_0]), (arr_1 [i_0] [i_1 - 2]))) : 5092129731328394040))));
                var_16 = (min((arr_2 [i_0] [i_0] [i_1]), ((0 ? var_7 : ((min(-13319, 26319)))))));
                arr_4 [i_0] [1] = (((((((min((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_1]))))) <= 17)) || ((max((((var_1 ? var_13 : var_2))), (min(var_11, 0)))))));
            }
        }
    }
    #pragma endscop
}
