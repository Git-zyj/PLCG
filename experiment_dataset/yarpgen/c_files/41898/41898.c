/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(0, -2136900732779743823));
    var_21 = var_6;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = var_18;
        var_22 ^= (((((((9223372036854775807 ? var_18 : var_11))) ? (arr_1 [i_0]) : (((((arr_0 [i_0 - 4]) <= var_18)))))) - ((((((arr_2 [14] [14]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0])))) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        var_23 = ((2411235045 >> (589050702 - 589050695)));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [i_3] = (((!2411235044) ? 18446744073709551593 : ((max(var_11, var_12)))));
                    var_24 = min((((var_14 | var_15) ^ (((arr_9 [i_2 + 3]) ? var_5 : (arr_12 [i_1]))))), ((-51 ? 1883732250 : 4294967284)));
                    var_25 = ((((!((((arr_2 [i_3] [i_3]) ? (arr_2 [i_3] [i_3]) : (arr_12 [i_1])))))) ? var_4 : (((var_14 ? var_19 : ((~(arr_7 [i_1]))))))));
                    arr_16 [i_1] [i_1] = ((((arr_1 [i_1]) ? ((var_13 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_1] [i_1]))) : var_18)));
                }
            }
        }
    }
    #pragma endscop
}
