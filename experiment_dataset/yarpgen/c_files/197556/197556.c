/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = max((min(-1269834719, (arr_2 [i_1]))), 1269834719);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 += min((max(var_4, ((~(arr_5 [i_0]))))), (((114 < -2058518750) / (~30))));
                        arr_11 [i_1] [8] [8] = ((((max(var_0, -2022512720))) + 11));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [2] [3] [i_4] [i_1] = (33 ? (arr_4 [10]) : 1052917046);
                        arr_15 [i_0] [i_1] [i_1] [i_1] [7] [i_4] = (((arr_5 [i_0]) >> (((arr_5 [i_1]) - 688475661))));
                    }
                    var_22 *= (min(var_0, (((arr_5 [i_2]) >> (-452276109 + 452276140)))));
                    var_23 = (min(var_23, ((max((((var_11 > (((159 && (arr_10 [i_0] [i_0] [i_0] [i_2]))))))), (((arr_5 [i_1]) >> (((arr_5 [i_0]) - 688475650)))))))));
                    var_24 = 110;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_6] [6] = (arr_19 [i_1] [i_5] [i_5] [i_5]);
                                var_25 |= (((arr_20 [i_0] [i_0] [i_7] [i_6]) != (arr_20 [i_0] [i_0] [i_5] [i_6])));
                            }
                        }
                    }
                    var_26 *= ((((5 ? 1269834719 : -1269834719)) >> ((((arr_0 [i_1]) == 160)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_27 += (!-1);
                    var_28 |= 221;
                    var_29 = ((93 & ((-2147483645 ? (arr_27 [2] [i_8]) : -291415855))));
                }
            }
        }
    }
    var_30 &= var_8;
    var_31 = (max((min(((var_7 >> (48 - 21))), ((var_10 ? var_4 : 384)))), var_19));
    var_32 = (((((var_11 ? var_0 : var_0)))) ^ var_4);
    #pragma endscop
}
