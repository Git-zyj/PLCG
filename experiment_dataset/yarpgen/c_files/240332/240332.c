/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min((((((var_1 ? var_14 : var_5))) ? ((var_6 ? var_1 : var_14)) : var_4)), (((var_4 % var_6) ? (!var_12) : (var_13 / var_13))))))));
    var_16 = (((((141 < 185) % 22)) + ((~(var_10 < var_2)))));
    var_17 -= var_14;
    var_18 -= (min((max((6 ^ 65533), -var_14)), var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = ((var_12 ? var_13 : (((var_9 ? var_7 : (arr_2 [i_0] [i_0]))))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = (((arr_10 [i_0] [i_0] [9] [i_0]) == ((var_6 ? (arr_4 [i_0] [i_2] [i_0]) : var_6))));
                    }
                }
            }
        }
        arr_13 [i_0] = var_5;
        arr_14 [i_0] = (((arr_1 [i_0]) ? ((var_10 ? (arr_11 [4] [i_0] [i_0] [i_0]) : var_14)) : var_3));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_22 [5] [i_0] [i_4] [i_5 - 2] [i_6] [i_6] = (65533 / 65514);
                        var_20 |= var_3;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_21 &= var_5;
        arr_25 [i_7] [i_7] = ((!(!572251313041797985)));
        arr_26 [i_7] [i_7] = (((arr_24 [i_7]) == ((((arr_24 [i_7]) || (var_0 || var_10))))));
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        arr_30 [i_8] = ((((max(((var_7 ? var_1 : (arr_3 [i_8] [i_8]))), (((arr_6 [i_8]) ? var_1 : (arr_16 [i_8] [i_8])))))) ? (arr_24 [i_8]) : var_4));
        arr_31 [i_8 - 2] = (((((var_0 ? ((var_7 ? var_7 : var_7)) : (var_11 / var_13)))) ? (((((var_11 ? var_11 : var_6))))) : (max((arr_10 [1] [7] [9] [1]), ((var_14 ? (arr_4 [i_8] [i_8] [i_8 - 2]) : var_7))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_34 [i_9] |= (min((((var_11 == (var_14 / var_6)))), (~var_5)));
        var_22 = min((((var_10 && (((23 ? 4544022272223594429 : 4)))))), (((17874492760667753646 - 60) ? (var_10 + var_8) : ((8396244211321449060 ? (-2147483647 - 1) : 65532)))));
        arr_35 [i_9] = (((((+(((arr_33 [21] [i_9]) ? (arr_33 [i_9] [23]) : var_4))))) ? ((((~(arr_33 [i_9] [i_9]))) / (arr_33 [i_9] [i_9]))) : ((((arr_33 [i_9] [i_9]) ? var_10 : var_14)))));
    }
    #pragma endscop
}
