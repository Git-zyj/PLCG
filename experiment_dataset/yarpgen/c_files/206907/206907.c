/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = var_3;
        var_15 = (~121);
        var_16 = ((~(arr_0 [i_0])));
        var_17 |= (((arr_0 [2]) * (((var_4 ? (arr_1 [i_0] [i_0]) : -83)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_18 = ((-81 ? ((((arr_13 [i_1] [i_2] [19] [1] [i_1] [i_2] [11]) ? (arr_6 [i_2] [i_1]) : (arr_6 [i_2] [7])))) : (arr_14 [i_1] [i_2] [i_3] [0] [i_2])));
                                var_19 = ((-(arr_8 [i_2 - 1])));
                                var_20 = 35;
                                var_21 = ((106 % ((var_11 / (arr_7 [i_2])))));
                            }
                        }
                    }
                    var_22 = 1;
                    var_23 = (((arr_9 [18] [i_2] [i_2] [18]) * (arr_9 [i_2 - 1] [i_2] [i_3 - 1] [i_2])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_19 [i_2] = (((arr_5 [i_2]) & (arr_12 [i_2] [i_2] [i_2] [i_2 - 1])));
                    var_24 = (~-2304766217375944951);
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_25 &= 124;
                            arr_27 [i_1] [i_2] [i_1] = ((~((~((~(arr_25 [i_1] [i_2] [i_2] [i_1])))))));
                        }
                    }
                }
                var_26 = (max(var_26, (((-82 ? (arr_22 [i_2 - 1]) : (((arr_22 [i_2 - 2]) ? (arr_22 [i_2 - 1]) : (arr_3 [i_2 + 1] [i_2 - 1]))))))));
                var_27 *= (((~255) ? (((!(arr_9 [i_1] [22] [22] [i_2])))) : 7));
                var_28 = (((32752 ? (arr_17 [i_1] [i_2 - 2] [i_2 - 2] [i_1]) : (arr_17 [i_1] [i_2 - 1] [i_2] [i_1]))) > (arr_17 [i_1] [i_2 + 1] [i_2 + 1] [i_2]));
            }
        }
    }
    var_29 = (max(var_29, (((((~(max(var_6, 3451050958976648056))))) ? var_4 : ((((var_9 < 0) == -1235808246)))))));
    #pragma endscop
}
