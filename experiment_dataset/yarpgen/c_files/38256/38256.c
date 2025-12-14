/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (min((((arr_8 [i_2 + 4] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? var_6 : (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 4] [i_2 + 3]))), ((((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 4] [i_2 + 2]) < (arr_8 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 4]))))));
                    var_13 = ((((min((((arr_0 [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_2]))), ((min(var_2, (arr_6 [i_0] [i_0] [i_1] [i_2 + 4]))))))) ? var_8 : var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (arr_8 [i_2] [i_2 - 1] [i_3 - 1] [i_4 + 1]);
                                var_14 = (((max(var_10, var_10)) || ((min((arr_11 [i_2 + 4] [i_3 - 2] [i_4 - 2]), (arr_7 [i_3 + 2] [i_3] [i_3 - 1] [i_3]))))));
                                var_15 = (((((arr_2 [i_3 - 1] [i_4 - 1]) && var_4)) ? (min((min(-43, 20)), (max(var_3, var_6)))) : ((((!((max(var_2, (arr_13 [17] [17] [i_3] [i_4]))))))))));
                                var_16 = (((((arr_11 [i_3 - 1] [i_3 - 1] [i_4 - 1]) || (arr_2 [i_3 - 1] [i_4 - 2]))) ? ((((min(var_8, var_7))) ? var_0 : (arr_12 [i_3 + 2] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3] [i_4 + 1] [i_4 - 1]))) : ((((arr_6 [i_3 + 1] [i_3 + 1] [i_3] [i_4 - 2]) && (arr_6 [i_3 - 2] [i_3 + 2] [i_4] [i_4]))))));
                                var_17 &= var_11;
                            }
                        }
                    }
                    var_18 = (min(var_0, ((606108026722447541 ? -21 : 4435))));
                    var_19 = var_7;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [i_5] = ((((max((arr_12 [7] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), var_3))) ? (((arr_11 [i_5] [i_5] [i_5]) - var_6)) : (((((arr_11 [i_5] [i_5] [i_5]) <= (arr_4 [i_5] [i_5] [i_5])))))));
        var_20 *= (((!-55) ? (max((arr_3 [i_5] [i_5] [i_5]), var_0)) : (((min((arr_6 [i_5] [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_21 = var_7;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {
                    arr_24 [i_8] [i_8] = (((arr_10 [i_8 - 2] [i_8 + 1] [4] [i_8 - 1]) ? (arr_15 [i_8 - 1]) : (arr_7 [i_6 - 1] [i_7 - 2] [i_8 + 1] [i_8 - 1])));
                    var_22 = ((var_11 != (var_12 || var_3)));
                }
            }
        }
        var_23 = (((((~(arr_18 [i_6])))) ? var_8 : var_11));
        arr_25 [i_6] = var_1;
    }
    #pragma endscop
}
