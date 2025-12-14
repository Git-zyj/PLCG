/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 56615;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += (min((((!1) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (min((arr_1 [i_0]), var_1))));
        var_17 = (max(var_17, ((((-(arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_2] [i_3] = (min((62203 | 13872), 4456844688178574817));
                        var_18 = ((var_7 ? 1 : (((((6130115293835367467 ? -19103 : var_13))) ? (0 * 4088) : (((53 / (arr_0 [i_3]))))))));
                        var_19 += (((((224 ? (min(var_5, 2397367068006784072)) : (((-2397367068006784084 ? (arr_5 [i_1] [i_2]) : 1)))))) && ((min(((-(arr_3 [i_0] [i_1] [i_0]))), ((-(arr_5 [i_0] [i_0]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_11 [i_4] [i_4] = -2147483625;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_17 [i_4] [i_5] [i_6] |= 7929922596208828281;
                    var_20 = (max(var_20, ((((((((min((arr_15 [i_6] [i_5] [i_5] [i_4]), 2147483647))) ? 142 : ((min(127, 1)))))) ? var_8 : (arr_14 [i_4]))))));
                    var_21 = (min((min((arr_0 [i_4]), (arr_9 [i_5]))), (min((arr_0 [i_6]), (arr_9 [i_4])))));
                }
            }
        }
        arr_18 [i_4] [i_4] = (((arr_13 [i_4] [i_4] [i_4]) == (min(var_4, ((var_0 ? (arr_14 [i_4]) : var_12))))));
        var_22 ^= ((!((((1 && (arr_12 [i_4] [i_4] [i_4]))) && ((min((arr_10 [i_4] [i_4]), var_1)))))));
        var_23 = (-9223372036854775807 - 1);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_24 ^= ((1 ? (arr_7 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((arr_15 [i_7] [i_7] [i_7] [i_7]) ? (-2147483647 - 1) : var_4))));
        var_25 *= ((1073741312 ? (arr_5 [i_7] [i_7]) : -3844350504087092436));
        var_26 = ((var_2 / (arr_9 [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_27 [i_7] [i_7] [i_9] [i_9] = (((arr_1 [i_8]) && (arr_1 [i_7])));
                    var_27 = ((arr_25 [i_7] [i_7]) ? 22 : var_11);
                }
            }
        }
        var_28 *= (arr_3 [5] [i_7] [i_7]);
    }
    #pragma endscop
}
