/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((0 - (min(var_8, var_9))))) && ((min(-1, (max(13, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((-((-1318944429 / (max(-31037, -1318944458))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_14 |= ((var_6 ? (((65522 ? var_11 : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))) : (((arr_8 [i_3] [i_2] [i_0]) - (arr_5 [i_0] [i_1])))));
                                var_15 = (max(var_15, (((var_5 ? (arr_13 [i_0 + 4] [i_2] [i_0 + 1] [i_3]) : 32762)))));
                                arr_16 [i_0 + 3] [i_2] [i_1] [i_1] [i_4] = ((((var_2 ? 768628366 : var_9))) ? ((((arr_0 [i_3] [i_4]) == (arr_3 [i_0] [16] [16])))) : var_0);
                                arr_17 [i_0 + 4] [i_2] [i_2] [i_2] [i_2] = (~(arr_13 [i_1] [15] [i_2] [15]));
                                arr_18 [i_0 - 3] [i_2] [i_2] [i_2] [i_4] [i_0] [i_0] = (((123 ? 0 : 113)));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 17;i_5 += 1)
                            {
                                arr_23 [i_0 + 3] [i_0 + 3] [i_2] [5] [5] = (((15326510870136407659 ? 6971252414945165381 : -2147483636)));
                                arr_24 [i_0 + 4] [i_0] [i_0 + 3] [i_0] [i_0] = (arr_20 [i_5] [i_3] [4] [i_0 - 1] [i_0 - 1]);
                                var_16 = arr_4 [i_2] [i_1];
                                var_17 = var_9;
                                var_18 = ((-23354 ? (!1) : 31));
                            }
                            var_19 = (min((arr_12 [i_3] [i_2] [i_2] [i_1] [i_0]), (((max(var_6, 65504))))));

                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_20 = (max(((!(arr_15 [i_0 + 3] [i_0 + 4] [i_1] [i_0 + 3] [i_1] [i_3] [i_6]))), ((((min(var_9, 4))) || var_0))));
                                arr_29 [i_2] = ((((0 ? (arr_5 [i_0 - 3] [i_0 - 3]) : (-127 - 1))) - 1));
                            }
                            arr_30 [i_0] [i_1] [18] = var_7;

                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 17;i_7 += 1)
                            {
                                arr_35 [i_0 - 2] [i_1] [i_1] [i_3] [i_7] [i_7] [i_7] = 0;
                                arr_36 [i_7 - 2] [8] [i_0] = (((arr_11 [i_0 - 3]) ? (arr_21 [i_7 - 3] [i_7] [i_3] [i_3] [i_0 + 1]) : 1701350491));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
