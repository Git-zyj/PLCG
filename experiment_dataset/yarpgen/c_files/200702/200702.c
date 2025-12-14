/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_12;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] |= (((~32767) != (max(65535, 11141166901716141672))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 *= ((!(8589934591 <= 11141166901716141672)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_19 = (((var_4 / (min(var_14, var_0)))));
                            var_20 += ((!(~8589934591)));
                            arr_12 [i_2] = (min(65535, 1894683920));
                            arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] [i_4] = ((((max(1894683925, 65535))) ? -288230376151449600 : (-57 < 15550)));
                            var_21 = var_13;
                        }
                        arr_14 [i_3] [i_2] = var_4;
                    }
                }
            }
            var_22 = ((-(arr_4 [i_1] [i_1])));
        }
        var_23 = var_2;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    var_24 -= (max(65535, (((((max(65535, 1342286014))) != 8024284245233022142)))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 += 1617765104;
                        var_26 = (var_15 & 65535);
                        var_27 = (var_13 + var_15);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_28 = (((arr_23 [i_5]) ? (min((max(3663318076, var_11)), (~30969))) : (min((1 & 1), (min(var_12, var_6))))));
                        var_29 = (min(var_29, (((179 ? 288230376151449620 : 2983994124)))));
                        var_30 = (min(var_30, ((max(2, ((-48 ? ((516096 ? (arr_25 [i_9] [i_7]) : var_10)) : 41)))))));
                    }
                }
            }
        }
        arr_28 [i_5] = ((20 ? (((((16747551063443497558 & 0) < var_6)))) : (((215 ? var_10 : 1602973874)))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_31 = -5;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_41 [i_13] [i_13] [i_11] [i_10] [i_5] [i_13] [i_5] = (~4294967295);
                                arr_42 [i_13] [i_12] [i_11] [9] [i_13] = 59;
                                arr_43 [9] [i_10] [i_11] [i_12] [i_13] [5] = (arr_29 [i_13] [i_12] [i_5]);
                                var_32 |= (1 * 4294967295);
                                var_33 = (min((max(192, (arr_34 [i_10 + 1] [i_10 - 1] [i_10]))), var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
