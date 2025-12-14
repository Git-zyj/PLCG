/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = -1813299779;

                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            var_12 = (max(var_12, ((((((min((!0), (max(var_3, (arr_2 [i_0]))))))) != (((arr_12 [i_0 - 4]) ? (((var_5 % (arr_11 [8])))) : (min((arr_7 [i_0] [i_1]), var_5)))))))));
                            var_13 = (-32758 ? (arr_10 [4] [i_3 - 1] [i_2] [i_3] [i_4] [i_0 - 3] [i_0]) : ((((max(-98, 1))) ? (!var_6) : (arr_4 [2] [i_1] [i_2]))));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_1] [i_1] = (min((arr_3 [i_0 - 3] [i_1] [i_3 - 1]), (arr_13 [i_0] [i_1])));
                            var_14 = (!1);
                        }
                        arr_17 [i_0 - 4] [i_1] [i_0 - 4] [i_3 - 1] = (((((max(4084454854, (arr_8 [i_0]))))) ? 1 : (max((arr_12 [i_0]), (arr_9 [i_0 - 4] [i_1] [i_2])))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_22 [i_0] [i_6] = ((!(arr_0 [i_0])));

            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                arr_25 [i_0] [i_6] [i_7] [i_6] = max(1, 1);
                var_15 = ((1 * (max((((1 > (arr_24 [i_0] [1])))), (~3)))));
                arr_26 [i_7] [i_7] [i_7 - 2] [i_0] = ((-(((((var_10 ? var_3 : (arr_24 [i_0] [i_6])))) ? (((min(214, 17301)))) : (max((arr_23 [i_0 - 2] [i_7 + 2] [i_7] [i_6]), 216))))));
            }
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                arr_29 [i_0] [2] [i_8] [i_8 + 1] = var_3;
                var_16 = (((max((arr_7 [i_6] [i_0 + 1]), (arr_20 [i_8] [i_6] [i_8 + 1]))) * (((24297 ? (((max(0, 42)))) : (max(var_8, 829426162)))))));
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    {
                        var_17 ^= ((((max(1, (1 >= 8969450152064229751)))) > ((((arr_0 [i_0]) <= ((((arr_24 [i_0] [i_6]) || (arr_2 [i_0])))))))));
                        var_18 = max((((arr_4 [i_0] [i_0] [i_0]) ? ((((!(arr_28 [i_0] [i_0] [i_9] [i_10]))))) : ((2853890256970844900 - (arr_9 [i_0] [i_6] [4]))))), 0);
                        arr_34 [i_0 - 2] [i_6] [i_9] [i_10] [i_6] [i_6] = ((((arr_10 [i_9] [i_6] [i_9] [i_10] [7] [i_10] [i_0 - 4]) ? (arr_33 [i_0] [i_6] [1] [i_10] [i_9]) : (((arr_9 [i_0 - 1] [i_9] [i_9]) ? -8522435261100076387 : 9385)))));
                        var_19 = (max(var_19, ((((min(var_0, (max((arr_31 [i_0 - 3] [i_0 - 3] [i_9]), (arr_0 [i_0]))))) << (((min((arr_2 [i_6]), (max(8292018448896455863, 53922)))) - 1)))))));
                    }
                }
            }
        }
    }
    var_20 = 2213789096;
    var_21 &= ((((max(1, var_10))) && (!-6967479371547080886)));
    var_22 = ((((-((var_8 ? var_10 : -8522435261100076387)))) < var_8));
    #pragma endscop
}
