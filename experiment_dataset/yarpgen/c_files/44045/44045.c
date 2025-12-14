/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] = ((!(var_9 != var_9)));
                            var_20 = (min(var_20, ((((-18 < -32752) && ((((arr_8 [i_2 + 2] [i_1] [i_2 + 1] [i_3] [11]) << (((arr_8 [i_2 + 2] [i_1] [i_2] [i_3] [i_2]) - 7947534920190153955))))))))));
                            arr_10 [i_3] [i_2] [0] [i_0] = (!536870911);
                            arr_11 [i_0] [7] [i_2] = (-32767 - 1);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_4] [i_4] [i_4] = (arr_7 [i_4] [i_0] [i_0] [i_0]);
                    arr_16 [i_0] [i_0] [i_0] [i_4] = ((!(~var_3)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_19 [i_0] [3] [i_5] = ((var_2 ? (arr_4 [i_5] [i_1] [i_0]) : (~-29670)));
                    arr_20 [i_5] [i_1] [i_1] [i_0] = -32756;

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_21 = (arr_8 [6] [6] [6] [6] [i_5]);
                        arr_23 [i_0] [i_0] [i_0] [i_6] = (0 ? (!-32752) : 144110790029344768);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_22 = (max(var_22, (((-((var_16 ? var_13 : (-32767 - 1))))))));
                            var_23 -= ((32752 ? (arr_13 [i_0] [i_6] [i_5]) : 6301501537166173188));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_29 [i_1] [i_5] [i_6] [i_1] = (arr_13 [i_0] [i_0] [4]);
                            arr_30 [9] [i_1] [i_1] [i_1] [i_8] = -14868;
                            var_24 = var_13;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_25 = (-(arr_1 [i_5] [i_9]));
                            var_26 = (min(var_26, (((73140939521138738 ? -10697 : 32767)))));
                            arr_35 [i_0] [i_0] [i_9] [i_6] = 32752;
                            arr_36 [i_0] [i_1] [i_5] [i_6] [i_1] [i_9] = var_7;
                            arr_37 [2] [i_5] [i_9] [i_9] = (((arr_31 [i_9]) ? (arr_31 [i_9]) : (arr_31 [i_9])));
                        }
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            var_27 = (min(var_27, (arr_34 [i_0] [i_0] [i_6] [i_0] [i_0] [10])));
                            var_28 *= (((arr_4 [i_0] [i_1] [i_5]) << (var_10 - 8859695078341325119)));
                            var_29 &= (((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]) && ((((-32767 - 1) ? -7168 : 15360)))));
                            arr_40 [i_0] [i_0] [i_1] [i_0] = (8589901824 ^ (arr_21 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10] [i_10] [i_10]));
                            var_30 -= ((~(arr_12 [i_10 + 1] [11] [i_10 - 2])));
                        }
                        arr_41 [i_0] [i_0] [i_0] [i_0] = ((~(arr_22 [i_6] [i_0])));
                    }
                }
            }
        }
    }
    var_31 = 32756;
    #pragma endscop
}
