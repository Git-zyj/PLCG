/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_9, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        var_17 += (arr_2 [i_0]);
                        var_18 &= 34;
                        arr_12 [i_1] [i_1 - 1] = (arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_0]);
                        arr_13 [i_0] [i_1] [6] [i_3 + 1] [i_0] [i_3] = ((((((arr_1 [i_0] [i_2]) ? 69 : 2147483647))) ? (arr_1 [i_2] [i_3 - 1]) : (((arr_7 [i_0] [i_2]) & (arr_7 [i_0] [i_0])))));
                        var_19 = (((((arr_7 [i_2] [i_2]) != 2951751782481676776)) ? ((-7 ? ((((arr_3 [i_0]) >= (arr_0 [i_0] [i_0])))) : (((!(arr_9 [i_0] [i_1] [i_2] [i_0])))))) : (arr_1 [i_0] [i_0])));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_20 *= var_11;
                        var_21 = (max(var_21, (((max(var_12, (~-4)))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = ((-(arr_15 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 2])));
                        var_23 = (((~(arr_0 [i_0] [i_0]))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_24 = (max(var_24, (((-(((((arr_2 [i_0]) || 7)) ? ((min((arr_10 [i_6]), (arr_18 [i_0] [0] [i_6] [0] [10])))) : (arr_18 [i_1 - 1] [i_1 - 1] [i_6] [0] [i_1 - 1]))))))));
                        arr_22 [i_1 + 2] [i_1] = (arr_21 [i_2] [i_6]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_25 |= (min(((49 + (((arr_15 [i_0] [i_7] [i_2] [i_8] [i_8] [i_7 - 3]) / -7)))), var_9));
                                var_26 += (max(((~(((var_8 != (arr_11 [i_0] [i_0] [i_2] [i_0])))))), (((!0) ? ((((arr_0 [i_1] [i_1]) || var_10))) : ((-(arr_14 [i_0] [i_8] [i_2] [i_0] [i_8] [i_2])))))));
                                var_27 -= ((((((max(var_9, (arr_24 [i_0] [i_1] [i_7 - 1] [i_8])))) >> (var_7 - 47133))) ^ ((-(arr_18 [i_8] [i_7 - 4] [i_8] [i_1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_11;
    var_29 = (-((((max(0, 11)) >= var_15))));
    #pragma endscop
}
