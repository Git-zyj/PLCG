/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;
    var_12 ^= var_7;
    var_13 = (max(var_13, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((~((-118 ? 2948623271 : -115)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 12;i_4 += 1)
                            {
                                var_15 *= (1182478924 ? 1879406356 : 1346344006);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(-3621665084, 2313027356));
                                var_16 *= (max((arr_5 [i_2] [i_3] [i_4 + 3]), (((arr_1 [i_0] [i_0]) ? (-82 || 2948623299) : (!3621665058)))));
                                var_17 = 513426432;
                                var_18 |= -8;
                            }
                            for (int i_5 = 3; i_5 < 12;i_5 += 1)
                            {
                                var_19 = (((arr_8 [i_1] [i_2 + 2] [i_3 + 3] [i_5 + 3]) ? ((~(arr_8 [i_2] [i_2 + 1] [i_3 + 2] [i_5 - 3]))) : ((((arr_15 [i_3 + 2] [i_3] [i_3]) <= (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                                var_20 = (-114 | 72);
                                arr_18 [i_0] [14] [i_0] [6] [i_0] [i_0] [i_0] = ((+(((arr_17 [i_5] [i_5 - 3] [i_3 + 3]) * -115))));
                            }
                            var_21 = (~-100);
                        }
                    }
                }
                var_22 *= (-73 || 2642483923);
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_23 = (max(var_23, (((((4294967290 ? 1652483373 : var_1)) <= 42)))));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_24 = (((arr_25 [i_6] [i_8 - 3] [i_9 + 2]) ? (arr_25 [i_6] [i_8 - 3] [i_9 - 2]) : var_4));
                            var_25 = (max(var_25, (arr_10 [i_6] [i_10] [i_8 - 1] [i_9] [i_10] [i_8 - 1] [7])));
                        }
                    }
                }
            }
            var_26 &= 1652483373;
        }
        var_27 = (max(var_27, (~var_9)));
        arr_30 [i_6] = ((var_2 < (((((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]) < 110))))));
    }
    #pragma endscop
}
