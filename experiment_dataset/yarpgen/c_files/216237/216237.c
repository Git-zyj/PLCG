/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = max((max((max(-6824183270827875707, (arr_3 [i_2]))), (min(-7851961955417938552, (arr_1 [i_0] [i_1]))))), (arr_0 [i_0 - 1] [i_0 + 3]));
                    var_21 = (((var_5 + (arr_6 [i_0] [i_0 + 4]))) / 2568211131721744032);
                }
            }
        }
    }
    var_22 = var_2;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_23 = ((max(var_2, (arr_8 [i_3]))) | ((~(arr_8 [i_3]))));
                    arr_14 [4] [i_4] |= (~var_4);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_21 [0] [10] [10] |= ((arr_20 [i_7 - 1] [i_7 - 1] [14] [i_7 - 2]) ? ((~(arr_13 [i_3] [8] [i_6] [10]))) : (arr_10 [i_7 - 1] [i_7 - 2] [2]));
                        var_24 = ((arr_13 [i_7] [i_7] [i_7 - 2] [i_3]) ? (~1673518731089315327) : (arr_11 [4]));
                    }
                    var_25 = ((!(!var_2)));
                    arr_22 [i_3] [i_3] = (i_3 % 2 == zero) ? (((((arr_9 [i_3] [i_3]) >> (((arr_19 [i_3] [i_4] [i_6] [i_3]) + 2889629293853053055)))) | (arr_20 [i_3] [i_4] [i_3] [i_3]))) : (((((((arr_9 [i_3] [i_3]) + 9223372036854775807)) >> (((arr_19 [i_3] [i_4] [i_6] [i_3]) + 2889629293853053055)))) | (arr_20 [i_3] [i_4] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_26 = (min(var_26, var_0));
                                var_27 = (arr_15 [i_3]);
                                var_28 = ((((216030760272062991 ? 1673518731089315325 : var_0))) ? (arr_16 [i_8 - 2] [i_8 + 3]) : ((-1673518731089315328 ? -25 : -1)));
                                arr_29 [i_3] [6] [i_6] [i_8 - 1] [i_8] = ((var_3 ^ (arr_18 [7] [i_6] [i_4])));
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    arr_33 [8] [i_4] [8] |= (!-var_6);
                    var_29 = ((!((max((arr_30 [i_10 + 1] [i_10 - 1] [i_10] [i_10]), (arr_30 [i_10 - 1] [i_10 - 1] [i_10] [12]))))));
                }
                var_30 = (~(max(var_6, var_5)));
                var_31 = (i_3 % 2 == zero) ? (max((((((~(-9223372036854775807 - 1)))) ? (max(var_15, (arr_23 [i_3] [5] [i_3]))) : 4692524658400179880)), ((var_13 - (arr_9 [i_3] [i_3]))))) : (max((((((~(-9223372036854775807 - 1)))) ? (max(var_15, (arr_23 [i_3] [5] [i_3]))) : 4692524658400179880)), ((var_13 + (arr_9 [i_3] [i_3])))));
            }
        }
    }
    var_32 = var_18;
    #pragma endscop
}
