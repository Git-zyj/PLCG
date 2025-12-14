/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = (((arr_0 [8]) != ((31 ? 48 : 48))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = ((min(-48, 153)));
                                var_17 = (max(var_17, (((((arr_2 [i_0] [i_1]) && (arr_2 [i_0] [i_2])))))));
                                var_18 = ((((((arr_0 [i_3]) ? (arr_11 [i_0]) : (arr_3 [i_0])))) / (((~-49) ? (~48) : -1))));
                            }
                        }
                    }
                    arr_14 [i_2] [2] = ((+(min((arr_12 [i_0] [i_0] [14] [i_1] [i_1]), (arr_12 [i_0] [i_0] [i_1] [i_2] [11])))));
                    var_19 = -200230336;
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_20 = (0 - 31235);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = (max(var_21, (((((((arr_5 [i_0] [i_1] [i_0] [i_6]) ? (arr_15 [i_1] [i_5] [i_6]) : (arr_20 [1])))) ? 1229013216 : var_3)))));
                        arr_22 [i_6] [i_6] [i_5] [i_1] [i_1] [6] = -2147483647;
                        arr_23 [i_0] [i_0] [i_0] [i_0] = (31 ? var_14 : ((var_6 - (arr_5 [i_0] [i_1] [i_5] [i_6]))));
                    }
                }
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    arr_26 [i_7] [i_0] = (((arr_15 [i_0] [6] [i_7]) ? (arr_16 [i_7 + 2]) : (min(-29, ((1 ? (arr_11 [i_1]) : var_1))))));
                    var_22 = var_9;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [i_0] = (arr_11 [i_0]);
                            arr_33 [i_0] [i_1] [i_1] [i_9] = (arr_28 [2]);
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (((((var_6 / ((1466675491 ? 11611381329352838106 : -2147483647)))) * (((209 ? 0 : (-127 - 1)))))))));
    var_24 = (((min(((31 ? (-2147483647 - 1) : (-127 - 1))), var_11))) ? var_14 : 30536);
    var_25 = var_13;
    #pragma endscop
}
