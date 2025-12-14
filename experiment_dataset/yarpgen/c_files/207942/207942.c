/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_4 ? (var_13 && 89) : (min((var_9 <= var_12), ((var_10 << (var_5 - 62)))))));
    var_15 = -39;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 *= ((((min((!1), ((169 ? 528150056 : (arr_1 [i_0] [i_1])))))) || (((max(-528150065, 62))))));
                arr_4 [i_0] [i_1] = ((75 << (((arr_1 [i_0] [i_0]) - 3961922716259029828))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 += (1 * 68);
        arr_7 [i_2] [i_2] = max((max((61702 / -528150063), 1)), 1);
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        arr_10 [i_3] = ((((min((arr_8 [i_3] [i_3]), (var_4 > 528150055)))) ? ((((!(arr_8 [i_3 + 1] [i_3 + 1]))))) : (arr_9 [i_3 + 1])));
        arr_11 [i_3 - 1] [i_3] = (((((var_8 ? (arr_8 [i_3 + 1] [i_3 + 1]) : (arr_8 [i_3 + 1] [i_3 + 1])))) ? (((arr_8 [i_3 - 1] [i_3]) ? (arr_8 [i_3 + 1] [i_3 + 1]) : 2450653909)) : 53));
        arr_12 [i_3] [i_3] &= var_8;
        var_18 = (-((1 ? 6 : 2737899492)));
        var_19 = (max(((((arr_9 [i_3]) / (((arr_9 [i_3 + 1]) ? var_12 : (arr_9 [i_3])))))), (min(75, (min(var_0, var_4))))));
    }
    var_20 |= (min((((-var_12 > (max(7979272142990742734, var_11))))), var_11));
    #pragma endscop
}
