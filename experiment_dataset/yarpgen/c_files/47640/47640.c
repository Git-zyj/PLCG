/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((arr_3 [i_0 - 3] [i_0 - 4]) ? (min(var_9, (arr_5 [i_0]))) : (arr_1 [i_0 + 1] [i_1 + 1])))) ? (((arr_4 [i_1 + 2] [i_0 - 1]) ? ((-945862706285750812 ^ (arr_1 [i_0 + 2] [4]))) : var_9)) : 1))));
                arr_6 [i_0] = (min(((max((arr_3 [i_0] [i_0 + 2]), (arr_3 [i_0 + 3] [i_0])))), (min((max(var_11, (arr_1 [i_0] [13]))), (max(var_0, (arr_0 [i_1])))))));
                arr_7 [16] [i_1] = (((((480 ? (arr_3 [i_0 + 1] [i_0 - 3]) : (arr_5 [i_0 + 1])))) ? (((max((arr_3 [i_0 - 3] [i_0]), (arr_3 [i_0 - 4] [8]))))) : (max((arr_3 [i_0 - 2] [i_0]), (arr_5 [i_0 + 2])))));
            }
        }
    }
    var_16 = var_14;
    var_17 = ((((((min(var_6, 1))))) - ((-var_12 ? var_4 : (var_9 + var_14)))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (min(((((arr_2 [i_2]) < (arr_3 [i_2] [i_2])))), ((((max(116, (arr_1 [i_2] [i_2])))) ? var_4 : (var_0 + var_1)))));
        arr_11 [i_2] = ((-((((arr_4 [i_2] [i_2]) < var_1)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_18 += (((arr_16 [i_2] [i_2] [i_4]) * (((!(arr_16 [i_2] [i_2] [i_2]))))));

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_19 += ((((arr_8 [14] [18]) ? 1 : (arr_19 [8] [i_5] [i_3 + 1] [i_4 + 2] [i_6] [i_6 + 1]))) >= (min((arr_19 [i_3] [i_5] [i_3 + 1] [i_4 + 2] [i_5] [i_6 + 1]), (arr_8 [i_3 - 1] [7]))));
                            arr_23 [i_2] [11] [i_4] [i_5] [i_6] [1] = ((~(max((!var_12), (arr_3 [i_2] [i_5])))));
                            arr_24 [i_2] [i_6] [i_4] [i_5] [i_6] [i_5] [i_3 - 1] = 1028773456;
                        }
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_20 *= ((~(((arr_19 [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4] [i_4]) ? (((~(arr_19 [i_2] [i_4] [i_3 + 1] [i_4] [i_7] [i_7])))) : var_5))));
                        arr_28 [i_2] [i_4] [i_7 - 1] = ((~((var_4 ? (~28) : (min(var_5, 0))))));
                    }
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        arr_32 [i_4] [i_3] [i_2] = (max(((max((arr_3 [i_3 - 1] [i_3]), (arr_3 [i_3 - 1] [i_3])))), ((min(var_12, 2451714234)))));
                        var_21 = (max(((((((var_14 ? 4294967295 : (arr_3 [i_8 + 3] [i_2])))) || var_9))), (((((21229 & (arr_18 [i_2])))) ? ((var_7 ? (arr_2 [i_3]) : 480)) : (arr_22 [i_8] [i_4 - 2] [i_3 - 1] [i_3 - 1] [18] [i_3])))));
                        var_22 = (max(var_22, 0));
                    }
                    arr_33 [i_2] [i_3 - 1] = (~var_9);
                    arr_34 [4] = var_0;
                }
            }
        }
    }
    var_23 = 4294967294;
    #pragma endscop
}
