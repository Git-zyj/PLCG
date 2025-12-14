/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 - 3] = (max(((((min(var_4, (arr_1 [7])))) ? ((((!(arr_0 [i_0 + 1]))))) : var_9)), (arr_2 [i_0] [i_0])));
        var_13 -= ((arr_1 [i_0]) < (((min((arr_1 [i_0]), (arr_1 [0]))))));
        var_14 = ((max(25144, (min((arr_1 [i_0]), -8508509315945325741)))));
    }
    var_15 = var_10;
    var_16 = ((var_12 ^ (!var_6)));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                arr_8 [i_2] [i_2] = ((((-8508509315945325741 <= (((25144 ? 12581 : var_7))))) ? (arr_4 [i_2] [i_1 - 2]) : -8508509315945325741));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_17 = ((min(32767, (((arr_13 [i_1] [i_2]) * 0)))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_18 ^= 7;
                            var_19 = (-237 ? (((arr_12 [i_1 + 1] [i_2]) ? (arr_12 [i_1 - 2] [i_2]) : (arr_12 [i_1 - 1] [i_2]))) : (arr_12 [i_1 + 1] [i_2]));
                        }
                        var_20 = (((arr_15 [i_4 - 2] [i_4 + 1] [i_2] [7]) <= (!9753)));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_21 = (max(var_21, (arr_6 [i_1 + 1] [i_1] [i_6 - 1])));
                        var_22 = ((arr_10 [i_2] [i_1 - 1] [i_2 + 1]) >= (((!(arr_11 [i_1 + 1] [i_1 + 1] [16] [13] [13] [i_2 + 1])))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 = var_11;
                            var_24 ^= ((-(arr_5 [i_1 + 1] [i_1 + 1])));
                            var_25 = 2278139121;
                        }
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_26 = (((arr_23 [i_8 - 1] [i_2] [i_1 + 1] [i_8] [i_8]) == (0 && 68719476735)));
                            var_27 = (arr_10 [i_2] [i_2] [i_3]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_28 = 2278139136;
                                arr_31 [1] [i_2] [i_2] [i_9] [12] [i_2] [i_3] = ((((-((((arr_10 [i_2] [i_3] [i_9]) <= var_6))))) * (arr_19 [7] [i_2] [i_2] [i_2] [6] [7])));
                                var_29 ^= ((((~((~(arr_25 [i_1 - 1] [i_2] [i_3] [i_10] [i_1 - 1] [14])))))) ? ((((arr_17 [0] [i_2 + 1] [i_10] [0]) <= (arr_27 [i_1] [5])))) : (((!((((arr_12 [i_1] [i_1]) ? 1 : 1)))))));
                                var_30 ^= (((arr_26 [i_1] [i_1 - 1] [i_2 + 1] [i_10 - 1]) ? 255 : (((min((arr_22 [i_1 - 2] [4] [i_3] [i_3] [4] [i_10 + 1] [i_10]), 8508509315945325741))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (--18446744073709551615);
    #pragma endscop
}
