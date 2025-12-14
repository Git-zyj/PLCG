/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                var_12 = (max(((((min(4726841917840023501, (arr_2 [5]))) >= ((((arr_9 [i_2] [0] [i_2]) * -32745)))))), var_1));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [0] [i_3] [0] = var_9;
                            arr_18 [i_2] = (min(((~(arr_14 [i_0 + 1] [i_3] [10] [1] [0]))), (arr_8 [6] [6])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_13 += (((arr_8 [i_1] [i_5]) ? (arr_20 [i_0]) : var_7));
                var_14 = 127276539;
            }
            var_15 *= (((1 * (arr_10 [i_0] [5] [i_0]))));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_16 = (arr_26 [i_7] [i_7] [i_7 - 1] [i_6 - 4] [i_0 + 2]);
                            var_17 = ((!(arr_3 [i_0 - 1])));
                            var_18 = (arr_25 [i_6 + 2] [i_0 + 2] [i_7 + 1] [i_7]);
                            var_19 = arr_5 [i_0] [i_1] [i_0 - 1];
                            var_20 = (min(var_20, 1));
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 9;i_9 += 1)
                        {
                            var_21 += (arr_15 [i_9] [i_9 + 1] [i_6 - 2] [i_6] [i_0 + 2] [i_0 + 2] [i_0 + 2]);
                            var_22 = (var_0 ? (arr_9 [i_7 + 1] [i_0 + 1] [i_6]) : (arr_1 [i_6 - 4]));
                            var_23 = (!6075281248952994230);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] [4] = var_10;
                            arr_33 [i_9] [i_7] [1] [i_6] [1] [i_0] [i_9] = (17 != var_1);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_24 ^= (min(32745, (((!(arr_9 [i_0 - 1] [i_6 - 4] [i_6]))))));
                            arr_36 [i_10] = 16676931;
                        }
                        arr_37 [i_1] [i_1] [i_1] [i_1] [5] = (((min((arr_28 [i_0 + 1] [i_6 + 1]), (arr_28 [i_0 - 1] [i_6 + 2])))) ? (((arr_28 [i_0 + 2] [i_6 - 3]) ^ (arr_28 [i_0 + 1] [i_6 - 4]))) : (((arr_28 [i_0 + 2] [i_6 - 2]) / (arr_28 [i_0 + 1] [i_6 - 1]))));
                    }
                }
            }
            var_25 = 32745;
        }
        arr_38 [i_0] = ((((!(((30822 | (arr_26 [2] [i_0 + 1] [i_0] [8] [i_0])))))) || var_4));
        arr_39 [i_0 + 1] [i_0 - 1] = (arr_0 [i_0]);
        arr_40 [i_0] = ((!(arr_3 [i_0 + 2])));
    }
    var_26 = 1;
    var_27 = ((var_0 ? (~var_5) : var_9));
    var_28 = ((0 - (min(var_2, ((var_6 ? var_5 : var_9))))));
    #pragma endscop
}
