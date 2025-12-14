/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((max((max(var_1, -10)), (((134217727 ? var_4 : var_7)))))) | var_2)))));
                    var_14 = (arr_6 [i_2] [i_1] [i_1] [i_0]);
                    arr_7 [i_2] = ((0 & ((((((arr_3 [i_0] [i_1] [i_2]) ? -12 : 583180720)) == 2872373660637707561)))));
                }
            }
        }
    }
    var_15 = ((var_6 && ((min((34125 <= var_7), var_5)))));

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] = (max(((var_8 ? 255 : var_2)), (arr_9 [i_3] [i_3])));
        var_16 -= ((((max((min(24, var_2)), (((19 ? 4294967274 : var_0)))))) ? ((((var_12 ? var_1 : var_12)) % ((min(var_4, 4294967290))))) : (((max(82, -25874))))));
        var_17 = 210;
        arr_12 [i_3] [i_3] = (((((((((arr_10 [i_3]) && 4294967274))) % (min(-349358355, (arr_8 [i_3] [i_3])))))) ? (0 <= 71) : (arr_10 [i_3])));
        var_18 = (max(var_18, ((((((71 ? var_1 : var_11)) << (((arr_8 [i_3] [i_3]) - 63)))) | 1))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] = ((21 ? 5629487014884876263 : var_8));
        var_19 = (5 ? (arr_13 [i_4]) : 24);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_20 = (max(var_20, var_4));
                arr_22 [i_5] [i_5] [i_5] = (((arr_17 [i_6] [i_5]) ? (arr_17 [i_6] [i_5]) : ((min(var_9, (arr_19 [i_5]))))));
                var_21 *= ((((((arr_21 [i_5] [i_5]) & (arr_21 [i_5] [i_5])))) ? var_0 : (((arr_19 [i_5]) ? 18509 : -1599243758))));
            }
        }
    }
    var_22 ^= max(-270579946, 22325);
    #pragma endscop
}
