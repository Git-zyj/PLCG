/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 = var_1;
        arr_2 [1] [1] |= 4324219519213452295;
        var_19 |= -var_12;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_14;
        var_20 = (((((((arr_4 [i_1] [i_1]) - 151)) > (arr_4 [1] [1]))) ? (arr_0 [i_1]) : (arr_4 [i_1 + 1] [i_1 + 1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {
                    var_21 = (arr_9 [i_4 + 2] [i_4 + 2] [i_2 + 2]);
                    arr_12 [1] [i_3] [i_3] [i_2] = (((max((min(536870911, var_0)), (~var_14))) >= (arr_9 [i_2] [i_3] [i_4])));
                    arr_13 [i_2 + 2] [i_3] [i_4] [i_4] = (((var_10 | (arr_6 [i_2 + 2]))));
                    var_22 = (max(-96, 8191));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_19 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1] [11] [1] [11] = ((49152 ? (arr_15 [i_2] [i_3] [i_4] [i_5]) : (arr_7 [i_4] [i_4])));
                                var_23 |= (!var_13);
                                var_24 |= (arr_14 [i_2]);
                                arr_20 [i_2] [i_2] [4] [i_2] [4] [i_2] [i_2] = ((min((arr_15 [i_2] [i_3] [i_4 - 1] [i_5 - 3]), var_15)) | (arr_8 [6] [i_3]));
                                var_25 = 8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_15));
    #pragma endscop
}
