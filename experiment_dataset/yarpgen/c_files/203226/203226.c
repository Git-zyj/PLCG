/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_3] = ((!(arr_6 [i_0] [i_0 - 4])));

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_19 *= (var_14 * 0);
                            arr_13 [i_3] = (arr_0 [i_3 - 2]);
                        }
                        arr_14 [i_0] [i_1] [20] [i_3] = (!0);
                        arr_15 [i_1] [i_3] [i_1] = (arr_6 [i_0 + 3] [i_0 - 3]);
                    }
                    var_20 = ((17261185510010940535 >= var_0) + (((arr_0 [i_0 - 2]) - (arr_0 [i_0 + 2]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_21 = (((((1 ? var_13 : (arr_19 [i_5])))) && (var_9 < var_0)));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_22 = ((-((max(11357905314727909867, (min((arr_7 [i_6] [2] [i_6] [16] [i_6]), var_4)))))));
                                arr_29 [i_7] [i_8] = (max(((min(var_4, 1232089386226485687))), (((!((max(2803706998, 1145659778))))))));
                                var_23 -= ((((max(var_3, (arr_22 [i_0] [i_7 - 1] [i_6] [i_0 + 1] [i_5 + 3])))) != (min((arr_24 [i_7 - 1] [i_5 + 1] [i_0 - 4] [i_5 + 1]), var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 4; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_24 = max(((min(((16951 << (var_9 - 6434289069222254614))), -0))), (max((min(3844742298, 13362565968104206850)), (arr_17 [i_9] [i_9] [i_9]))));
        var_25 = (min(var_25, (((((arr_1 [i_9 - 4]) * (arr_22 [i_9] [i_9] [i_9] [i_9] [i_9 + 3])))))));
        arr_32 [i_9] [i_9] = ((!(13362565968104206850 && 5084178105605344764)));
        var_26 = var_3;
        var_27 = ((((arr_20 [8] [16] [i_9 + 1]) > -1232089386226485688)));
    }
    var_28 &= var_2;
    #pragma endscop
}
