/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~-15015646928718095);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_4;
        var_17 = (252 && 1957434567);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [8] [i_3 + 1] = (((arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_4 - 2]) ? (arr_11 [i_3 + 1] [i_3 - 2] [1] [i_3 - 1] [i_3] [i_4 + 1]) : (arr_11 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1] [8] [i_4 - 1])));
                                var_18 = (min(var_18, var_3));
                                arr_13 [i_2] [i_1] [i_2] [i_3 - 2] [i_3] = ((((32767 ? var_11 : (arr_8 [i_1] [i_1] [i_3] [i_4 + 1])))) ? (arr_1 [i_3 - 1]) : ((var_15 ? 15015646928718097 : var_12)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((var_1 <= (arr_0 [i_3 - 1])));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 - 2] [i_3 - 2] &= ((12445355352430101247 ? -68 : 1));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = ((var_9 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_1] [i_2])));

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_19 = ((15015646928718110 ? 15015646928718094 : 14));
                        arr_19 [i_0] [i_1] [i_5] [i_0] = -1351508010;
                        arr_20 [i_5] [i_5] = ((-8343528411837791777 ? (arr_11 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]) : (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                    }
                    var_20 = (max(var_20, (((-15015646928718092 ? (arr_1 [i_2]) : (((var_3 ? (arr_17 [i_0] [i_1] [i_1] [i_1] [i_2]) : var_13))))))));
                }
            }
        }
        arr_21 [i_0] = (!var_9);
        arr_22 [i_0] = (((((var_13 ? var_6 : (arr_9 [i_0] [i_0] [i_0])))) ? (arr_18 [i_0]) : var_0));
    }
    #pragma endscop
}
