/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (0 + 3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = var_1;
                arr_8 [i_0] [i_0] = (8264953904208187710 > -399413212);
                var_19 = (((var_2 ? 8264953904208187710 : (arr_6 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 += (min((((-(arr_18 [i_2 + 1] [i_1] [i_1] [i_3 + 1] [i_4])))), (-8264953904208187738 / var_6)));
                                arr_19 [i_3] = 18446744073709551599;
                                var_21 = (min(var_21, (((~((((arr_14 [10] [i_2 - 3] [i_2] [i_3 - 1]) != 1))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_24 [i_1] |= (~((-(arr_21 [i_0] [i_1] [i_5] [i_6]))));
                            var_22 = (max(var_22, (arr_21 [i_0] [6] [i_5] [i_6])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_35 [i_7] = (arr_30 [i_7] [i_9]);
                    arr_36 [i_8] [i_9] = ((((((4294967292 ^ -8264953904208187710) ^ (-9223372036854775807 - 1)))) ? (arr_31 [i_7]) : -1));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_40 [16] [i_8] [i_8] [9] [i_10] = ((((min(0, 8264953904208187709))) && ((7387972498347218094 != (arr_25 [i_7])))));
                        var_23 -= var_5;
                        arr_41 [i_7] [i_8] [16] [i_10] [i_9] [i_7] = (min((arr_33 [i_7] [13] [i_7]), (var_11 ^ var_0)));
                    }
                    arr_42 [i_7] = -8264953904208187696;
                    var_24 -= ((((((arr_33 [i_7] [i_7] [i_7]) - -1))) == (((arr_33 [i_7] [1] [1]) / 8264953904208187706))));
                }
            }
        }
    }
    #pragma endscop
}
