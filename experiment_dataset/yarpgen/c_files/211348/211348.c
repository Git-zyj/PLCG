/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_14 | 48232), 115));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((17514 ? (max(var_11, ((((arr_3 [i_0]) % 111))))) : (var_2 > 50801))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((348153061 ? ((min(348153061, 60224))) : (((var_13 % 9089355517153510156) & (((115 ? var_4 : var_3)))))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_3] = var_14;
                            }
                        }
                    }
                    var_18 -= (((((arr_7 [i_2] [22] [22] [i_0]) != 107)) ? ((max((arr_7 [i_0] [i_1 - 1] [6] [i_1 - 1]), 0))) : (!0)));
                    arr_15 [i_2] [i_2] = ((!((((var_9 ? (arr_4 [i_2] [i_1] [i_0]) : (arr_9 [i_2] [i_2])))))));
                    var_19 = (var_1 ? ((max((arr_7 [i_0] [i_1 + 2] [i_2] [i_1 + 2]), var_3))) : (((9089355517153510166 == (arr_2 [i_2])))));
                    arr_16 [i_2] [i_1] [i_0] [i_2] = ((((((arr_5 [i_0]) ? var_10 : -1041314812))) ? 28 : (((var_14 < -7408) ? (var_7 == var_7) : var_12))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_0] [i_1 + 2] [i_5] = min(((44412 ? 0 : 0)), (arr_18 [i_5] [i_5] [i_1 - 1] [i_0]));
                    var_20 = (min((((arr_4 [i_0] [i_1 + 1] [i_5]) ? var_3 : 9292)), ((max(25, var_9)))));

                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        var_21 ^= var_15;
                        var_22 = (((arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1]) ? var_15 : (((!(((var_5 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_2 [i_0])))))))));
                        arr_22 [i_6] [i_1 + 2] [i_5] [i_6] = (((min(var_6, (arr_11 [i_0] [i_6] [i_6])))));
                    }
                    arr_23 [i_0] [i_1] [i_5] = var_4;
                }
                var_23 = ((+(min((1017630991 != var_14), var_0))));
            }
        }
    }

    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        var_24 = (((arr_3 [i_7]) || 15852821292059488658));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_25 = ((1017631004 ? ((((arr_3 [i_7 - 1]) == ((var_14 ? 9089355517153510159 : 14734))))) : (-8185809285414182025 >= var_6)));
                    arr_33 [i_9] = (!var_9);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_26 = (((((25 < 4990696596019825813) ? (var_4 * -5333) : var_9)) & (min((14743 || var_0), ((var_9 ? var_6 : 5339))))));
                                arr_39 [i_10] [i_10] = var_15;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    arr_45 [i_7] [i_7] [i_13] [i_13] = (((((var_8 ? (arr_24 [i_7 - 2]) : var_11))) && 4083062629));
                    var_27 = min((((((var_4 ? var_7 : var_14)) < var_8))), var_2);
                    var_28 = ((~(min(-227, ((var_3 << (1041314806 - 1041314798)))))));
                }
            }
        }
        var_29 = (arr_2 [i_7]);
    }
    var_30 ^= var_3;
    var_31 = (max(var_11, var_10));
    #pragma endscop
}
