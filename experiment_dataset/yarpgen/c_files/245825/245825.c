/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((((-(arr_4 [i_0])))) ? (max(9223372036854775807, var_15)) : ((max(111, var_1)))))) ? (((~(arr_1 [i_0] [i_1 - 3])))) : ((-(4294967295 + var_2)))));
                var_16 = (min(var_16, ((((((arr_1 [24] [24]) ? var_6 : (arr_1 [14] [14]))) != (((var_14 > (arr_1 [24] [24])))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_2 [i_2]) ? (arr_2 [i_2]) : (arr_0 [i_2])));
        var_17 = ((9 ? ((4294967295 ? 87 : 7040861733654316317)) : 14));
    }
    var_18 |= ((var_1 ? (max(75, 4294967292)) : var_7));
    #pragma endscop
}
