/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (max(((max(-114, var_8))), ((115 ? -106 : (max(var_1, -100))))));
                var_11 = ((var_6 ? (arr_3 [i_0 - 2]) : (!114)));
                arr_5 [14] [14] [1] = (arr_3 [i_0]);
                arr_6 [i_0 - 1] [i_0 - 1] = (((((+(max((arr_4 [i_0] [i_1]), var_5))))) ? (max(((var_4 ? -10022 : var_5)), ((min(-108, (arr_1 [i_1] [8])))))) : ((((arr_1 [9] [0]) + (arr_0 [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_12 = ((2668663381 ? var_7 : (arr_13 [i_2] [i_3] [i_3] [i_2])));
                    arr_14 [i_2] = (~var_5);

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_13 = (-8 == -118);
                        arr_18 [i_2] [i_2] [i_2 - 2] [i_2] [i_2] = 2668663377;
                        arr_19 [i_2] [i_3] = (var_7 ? (arr_16 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2]) : (arr_16 [1] [i_2 - 4] [i_2 - 4] [3] [i_2 - 2] [i_4]));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_24 [i_2] = (((~122) ? -var_3 : (arr_21 [i_2] [i_2] [14] [15])));
                        arr_25 [i_2 - 2] [i_3] [i_4] [i_4] [i_6] [12] &= (((arr_11 [i_2] [5] [i_2 + 2]) ? var_8 : var_0));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_29 [i_2] [i_2] = (arr_20 [i_7] [i_7] [i_4] [3] [i_2] [i_2]);
                        arr_30 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] = ((var_5 ? -125 : (arr_16 [i_2 + 1] [i_2 + 2] [8] [i_2 + 2] [i_2] [i_2])));
                        arr_31 [i_2] [6] [i_2] [i_2] [i_2] = ((var_5 ? var_8 : (arr_27 [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_14 += var_5;
                        arr_34 [i_2] [i_3] [i_4] [i_2] = (arr_23 [i_2] [i_2 - 4]);
                        var_15 = var_4;
                        arr_35 [i_4] [i_4] [i_4] [i_2] = (arr_16 [i_2] [0] [0] [i_4] [i_8] [i_2 - 3]);
                        var_16 = (72 && var_2);
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_17 = (min((arr_33 [i_2] [i_2 + 2] [i_2] [i_2] [1]), (min(var_3, (arr_20 [i_2 - 1] [8] [8] [i_2] [17] [i_3])))));
                    var_18 += ((((max(1171, 1626303915))) ? var_0 : (arr_11 [i_9] [i_9] [i_2 - 1])));
                    arr_39 [i_2] [i_3] [i_9] = var_0;
                }
                var_19 = ((~(arr_37 [i_2 + 1] [i_2 - 1])));

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_20 -= (max((arr_27 [i_3]), ((-126 ? (arr_36 [i_2 - 2] [i_2 + 2]) : 1))));
                    arr_43 [i_2] [i_2] [i_10] = (arr_32 [i_2] [14] [i_2] [i_2] [14]);
                }
            }
        }
    }
    #pragma endscop
}
