/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 65535;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (~-1141114784);
                    var_15 = ((~(arr_1 [i_0 - 1])));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = var_3;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_1] [8] [8] [i_1] = -1141114784;
                            var_17 = (arr_10 [i_2]);
                            arr_15 [i_2] [i_1] [i_1] [i_2] [i_3] [i_0 - 1] [i_2] = (arr_0 [i_0]);
                            var_18 = var_3;
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = 222337877;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_19 = ((~(arr_13 [i_1] [i_1] [i_3] [i_5 + 2] [i_5 + 1] [i_5] [i_2])));
                            var_20 = ((~(((arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]) - -1141114776))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_21 *= (max((36113 | 4294967277), (~var_9)));
                            var_22 = (min(((8263296207696756992 >> (((~var_1) + 1663884063)))), ((min(((var_2 ? 4072629419 : 222337877)), (~var_5))))));
                        }
                    }
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_23 *= ((~(1 > 4072629393)));
                        var_24 = (((((arr_1 [i_0 - 1]) || (arr_0 [i_7 + 1]))) ? 18 : (arr_0 [i_7 + 1])));
                        arr_27 [i_2] [i_1] [i_2] [i_2] [i_2] = arr_25 [i_2] [i_2];
                    }
                }
            }
        }
    }
    #pragma endscop
}
