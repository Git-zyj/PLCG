/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 *= (min(((var_8 ? var_11 : -32767)), var_10));
                            var_17 = ((~((max(-16, var_1)))));
                            var_18 = (max(var_18, ((min(((((((-2147483647 - 1) + var_1))) ? var_3 : (max(1180687084, (arr_5 [i_2] [i_2] [i_2]))))), ((32767 ? ((var_3 ? (arr_5 [i_0 - 2] [i_0 - 2] [i_3]) : var_14)) : (((((arr_3 [i_0] [i_0 - 2] [i_0]) <= 62612)))))))))));
                            arr_11 [i_3] = (min(-32754, (max(-126, 12978093900652431369))));
                            var_19 = (-52 | 37540);
                        }
                    }
                }
                arr_12 [i_0] [i_1 + 1] = (!-18038158881000472242);
                arr_13 [i_0] = (arr_6 [i_1 + 1] [i_1 + 1] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 22;i_6 += 1)
                            {
                                var_20 = -1180687084;
                                var_21 = (max(var_21, ((var_15 | (~4294967274)))));
                                var_22 = (+-3129559540);
                                arr_22 [i_0 - 1] [i_5] [i_5] [i_0 - 1] [i_5] [i_0 + 1] [i_0 + 2] = ((!(((2147483630 ? var_13 : (7297817139855170395 * 54704))))));
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                arr_25 [i_7] [i_7] [i_7] [i_7] [i_5] = (-32746 ? 4294967295 : 20282);
                                arr_26 [i_0] [i_0 - 2] [i_5] [i_0] [i_0] = 20272;
                            }
                            arr_27 [i_5] = (min((((50 << (922447133647035300 - 922447133647035294)))), ((min(((var_9 ? (arr_23 [i_1]) : (arr_19 [i_0 - 2] [i_0 - 2]))), ((max((arr_20 [i_0 - 1] [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_0 - 1] [i_5] [i_5]), 1))))))));
                            var_23 *= ((((!((!(arr_10 [i_0 - 1] [i_1 + 1] [i_4 - 1] [i_0 - 1] [i_1 + 1]))))) ? ((((!((((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? var_2 : var_12))))))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])));
                            arr_28 [i_0] [i_0 - 2] [i_0 + 2] [i_5] [i_0 + 1] [i_0 + 2] = (((min(-18997, 3114280208)) ^ ((((arr_6 [i_0] [i_1 + 1] [i_0]) & (arr_6 [i_5] [i_0 - 2] [i_0 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (var_15 ? (((var_12 ^ var_10) ? 2914 : var_12)) : var_1);
    var_25 = var_5;
    #pragma endscop
}
