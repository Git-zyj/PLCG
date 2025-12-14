/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_7;
    var_13 = (min((((var_6 == ((min(var_0, 21641)))))), ((var_0 ? 576179277326712832 : 2378869525))));
    var_14 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = -13753;
                    var_16 = (max(var_16, 21637));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 ^= (var_4 <= -13604);
                        arr_10 [i_2] = (max(var_1, ((2378869535 ? -21627 : 13584))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [i_2] = ((~((~(arr_0 [i_1 - 1] [1])))));
                        var_18 = var_11;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_2] [5] = ((var_6 ? (arr_7 [i_2]) : (((arr_2 [i_0]) * var_6))));
                            var_19 = (max(var_19, var_8));
                            var_20 = (3569063315 + 21637);
                            var_21 = (arr_8 [i_2] [1] [i_2] [1] [2] [i_2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [2] [i_2] [i_6] = (arr_14 [i_0] [i_1] [i_2] [i_4] [i_1 + 2]);
                            var_22 *= var_8;
                            arr_21 [i_0] [i_2] = (!var_6);
                        }
                    }
                    arr_22 [i_2] [i_2] = (arr_4 [i_0] [1]);
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    arr_26 [i_0] [i_7] [0] = (8788 == 18446744073709551615);
                    var_23 = (arr_18 [i_1] [i_1] [i_1] [i_1]);
                    var_24 = var_6;
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_8] [i_9] = (max(((var_1 ? var_0 : (arr_2 [i_1 - 1]))), (min((arr_27 [i_1 - 2] [i_1] [i_0] [i_0]), (arr_3 [i_0])))));
                        var_25 = (max((min((arr_4 [i_0] [i_0]), 13603)), (arr_7 [i_0])));
                        arr_32 [i_0] [1] [i_0] [i_0] [1] [i_0] = (max(48008, -21647));
                    }
                    var_26 *= (max((min(((13006987848148723268 ? (arr_11 [i_8] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0]))), ((min((arr_2 [i_1]), 1026284686))))), 1026284678));
                    var_27 += 65508;
                    arr_33 [i_1] = (min((arr_24 [2] [2] [i_8]), ((-21559 ^ ((var_10 ? (arr_25 [i_0]) : var_1))))));
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    var_28 = (max(var_28, (((((max((arr_8 [i_1 - 1] [i_1] [i_1 + 1] [i_10] [i_10] [i_1]), var_11))) ? (2378869505 + 49602) : ((-(max((arr_14 [i_0] [i_1 + 2] [i_10] [i_10] [i_0]), var_9)))))))));
                    var_29 &= ((-8 ? 1 : 127));
                    arr_36 [i_0] [i_0] = (arr_6 [i_10 + 1] [i_1 + 2]);
                    var_30 = (min(0, (max(1916097788, 1617123438))));
                    var_31 = (max((arr_2 [i_10]), 13779693583318036738));
                }
                var_32 = (arr_3 [i_0]);
                var_33 = (min(var_33, (min((arr_35 [12] [i_1] [i_1]), (arr_9 [i_1 + 1] [i_0] [8])))));
            }
        }
    }
    #pragma endscop
}
