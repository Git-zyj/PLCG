/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((max(-54118033014544502, var_0))) ? var_0 : 124)) & (max(var_4, var_5))));
    var_11 = var_9;
    var_12 = (((!var_6) || var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (!var_4);
                            var_14 ^= ((((var_0 ? ((var_4 ? (arr_8 [i_0] [i_1 + 2] [i_0] [i_1]) : 1013007286)) : 35466)) >> (((arr_7 [i_0]) ? (!var_8) : ((var_8 ? 5066 : var_1))))));
                            arr_9 [0] [i_2] [i_1] [i_0] [i_0] = ((var_8 ^ ((((((var_1 ? 17073 : 7729857318648698950))) ? (arr_8 [i_0] [i_1] [i_3 - 1] [i_3]) : (arr_7 [i_3]))))));
                            var_15 = (((((var_8 ? ((29431 ? var_4 : (arr_4 [i_3] [i_2]))) : var_2))) ? (((612304257 ? var_3 : -16293))) : (((((var_3 ? var_6 : var_9))) ? (var_6 != 1) : (((1 <= (arr_1 [i_1]))))))));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_16 ^= (((!0) << (248 - 243)));
                                var_17 &= (((-1638253801 ? ((var_0 ? var_1 : 1228797720329408316)) : ((((arr_6 [i_0] [i_0]) ? var_1 : var_0))))));
                                var_18 |= 3412220639;
                                var_19 = ((((-1013007281 ? 35823 : 107))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_20 = -131231429;
                                var_21 = -166;
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                arr_19 [i_1] [i_1] = ((var_1 * (((!(arr_1 [i_0]))))));
                                var_22 ^= 447174632;
                                var_23 = 36;
                                arr_20 [i_0] [9] |= (min((((arr_7 [i_1 - 1]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_2]))), var_1));
                                var_24 = ((min((arr_4 [i_2] [i_3 - 1]), (!var_2))));
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_25 = ((((!(arr_8 [1] [i_1] [5] [i_3 - 2])))));
                                var_26 = -880793690;
                            }
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    var_27 ^= var_7;
                    arr_25 [i_0] = var_0;
                }
                var_28 = (min(((((min(var_3, 93))) & 1)), (arr_24 [i_0] [i_1] [17])));
                arr_26 [i_0] = (((((((((arr_13 [i_0] [i_1] [i_0] [i_1 - 1] [i_1] [i_0]) ? var_5 : 2471468000))) ? ((var_2 ? (arr_10 [i_0] [i_0] [20] [i_1]) : (arr_15 [i_0] [1] [i_0] [i_0] [i_0]))) : var_2))) ? (min((arr_15 [i_1] [i_1 - 1] [9] [i_1 + 3] [i_1 - 1]), var_0)) : (((((arr_11 [i_1 + 1] [i_0]) ? 6426 : -972311994)) << (((!(arr_3 [i_1]))))))));
            }
        }
    }
    var_29 = (((1760064842 || 17455) ? (var_1 - 7588277508244788638) : ((((((var_1 ? var_6 : var_2))) ? (148 | 758947170) : (~-2228247347120966938))))));
    #pragma endscop
}
