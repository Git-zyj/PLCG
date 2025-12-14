/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 -= var_4;
    var_13 = (((((0 ? (1 | 1) : 1072664626))) ? (((1 >= (~var_4)))) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((0 ? ((((arr_2 [i_0]) ? (arr_0 [14]) : var_3))) : (arr_2 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (!var_7);
                                arr_13 [2] [6] [4] [i_2] [6] [i_0] &= 8176;
                                arr_14 [i_0] [i_1] [19] [i_0] [i_4] = (arr_2 [i_1]);
                                var_16 += 15907440711506041644;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = (((((~31069) + 2147483647)) >> (14319331978454298684 != 16383)));
                                var_18 = 15907440711506041644;
                            }
                        }
                    }
                    var_19 = ((~(arr_5 [i_2 + 1])));
                    arr_20 [i_0] = var_9;
                    var_20 = (min(var_20, (~109)));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        arr_23 [i_7] = min((((((8150 ? 16407 : -7))) && 114)), (min(var_1, (!2147450880))));
        var_21 = (arr_21 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_28 [i_8] = ((~(arr_27 [i_8])));
        var_22 = (2082876063 != 8178);
        var_23 = (((~6) ? var_2 : -8179));
        var_24 = (((arr_24 [i_8]) ? var_0 : var_6));
        var_25 += 21826;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_26 ^= ((~(min((~8180), (max(131071, 43709))))));
        arr_31 [i_9] = ((((arr_26 [6]) >> (-20366 + 20389))));
        var_27 = ((~(((!((min(-1, (arr_7 [i_9] [i_9] [i_9] [i_9])))))))));
    }
    var_28 = 4294836238;
    #pragma endscop
}
