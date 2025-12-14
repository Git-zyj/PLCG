/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (min((max((arr_1 [i_0]), (arr_1 [i_0]))), -31631));
        arr_2 [i_0] = (min(((((((1994170786 & (arr_0 [i_0] [i_0])))) ? (arr_0 [9] [i_0]) : ((max((-32767 - 1), (arr_0 [i_0] [i_0]))))))), (~300303621)));
        arr_3 [i_0] = (((((10678 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? ((1 ^ (var_9 | var_6))) : (((((((min((arr_1 [i_0]), (arr_1 [0])))) + 2147483647)) << ((((6233242871179455281 ? 32767 : (arr_1 [i_0]))) - 32767)))))));
        arr_4 [i_0] = ((((min(6233242871179455296, (~var_9)))) ? (min(((var_7 ? var_1 : (-32767 - 1))), (((arr_1 [i_0]) ? -32748 : (arr_1 [i_0]))))) : 0));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (min(23, ((((3854857118 ? var_3 : (arr_0 [i_1] [i_1]))) ^ 143))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_11 = (arr_15 [i_1] [i_1] [i_1]);
                    arr_17 [13] [12] [i_3] = 32767;
                    var_12 = (max((max(6434, 233)), ((max((((arr_12 [i_1] [i_1] [i_1]) ? (arr_1 [i_1]) : (arr_7 [i_3]))), ((min(var_9, (arr_7 [i_1])))))))));
                }
            }
        }
    }
    var_13 = var_5;
    var_14 = ((((((6233242871179455276 / var_5) ? (((78 ? 78 : var_4))) : (max(5428, var_5))))) ? ((max(var_6, 0))) : var_3));
    var_15 = (((max(var_1, (max(1, var_1))))));
    #pragma endscop
}
