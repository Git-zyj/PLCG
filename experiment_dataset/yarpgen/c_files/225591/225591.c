/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = var_17;

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_21 = ((((198 / (arr_9 [i_2 + 1] [i_2 + 1] [i_3 - 1]))) * ((max((arr_9 [i_2 - 3] [i_2 + 2] [i_3 - 1]), 179)))));
                        var_22 = ((-(arr_10 [i_2 - 2] [i_2] [i_2] [i_2])));
                        arr_12 [i_0] [9] [i_2] [i_2 + 4] = 182;
                        var_23 = 166;
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] = arr_11 [i_0];
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_2] [i_1] [i_2] [i_4] = (((((130 != 178) ? 167 : ((-(arr_3 [i_4] [i_1] [i_0]))))) ^ ((-((205 ? 57 : (arr_4 [i_4 - 1])))))));

                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_24 = (min((((arr_17 [i_2 - 2] [i_4 + 1] [i_4 - 2] [i_5] [i_5 + 1]) | ((min((arr_2 [i_0] [i_1]), var_12))))), ((-(((arr_8 [i_0] [i_1] [i_2] [i_5]) | 65))))));
                            var_25 = 154;
                            var_26 = (max(((209 << (var_9 - 151))), (arr_14 [i_1] [i_2 + 4] [i_4 - 1] [i_5])));
                            arr_19 [i_2] [i_1] [i_1] [i_2 + 1] [i_2] [i_4 - 1] [i_2 + 1] = (max(((((max((arr_11 [i_4]), (arr_6 [i_5] [i_1] [i_2])))) - ((min((arr_7 [i_0] [i_0]), (arr_2 [i_2] [i_2])))))), (max(((48 ? 179 : (arr_4 [i_0]))), (48 ^ 0)))));
                            var_27 = (min(((-(255 ^ 242))), ((((arr_18 [i_0] [i_5 + 1] [i_2 - 3]) < var_7)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_28 = ((var_4 ? 57 : (arr_2 [i_2 - 2] [i_4 - 2])));
                            var_29 = 204;
                        }
                    }
                    arr_23 [i_0] [i_1] [i_2] [i_2] = var_3;
                    var_30 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_31 = ((-(arr_10 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 1])));
                                arr_38 [i_7] [i_8] [i_9 - 2] [i_7] [i_10] [i_10] [i_11] = ((!((min((arr_15 [i_7] [i_7] [i_7] [i_7]), (arr_26 [i_8]))))));
                                arr_39 [i_8] [i_9 - 1] [i_7] [i_11] = ((-((max((arr_31 [i_7] [i_8] [i_9 - 1] [i_10]), (max(198, 247)))))));
                            }
                        }
                    }
                }
                var_32 = ((-((min(255, (min(var_0, var_5)))))));
                var_33 = (((((~(arr_0 [i_8])))) ? (((!(arr_27 [i_7] [i_8] [5])))) : ((+((max((arr_37 [i_7] [i_8] [i_7] [i_7] [i_8]), 81)))))));
                var_34 = ((((min((arr_26 [i_7]), (arr_36 [i_7] [i_7] [i_8] [i_8])))) ? (((arr_7 [i_7] [i_8]) ? (arr_7 [i_7] [i_8]) : 198)) : 78));
            }
        }
    }
    var_35 = var_7;
    var_36 = (~var_1);
    #pragma endscop
}
