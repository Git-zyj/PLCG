/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 |= var_6;
                        var_18 = ((var_1 ? var_8 : var_10));
                        var_19 = (min(var_19, ((((arr_8 [i_0] [i_0] [i_2]) >> ((((~(arr_1 [i_1]))) - 2907195525)))))));
                    }
                }
            }
            var_20 = ((~(arr_5 [i_0] [i_1])));
            arr_10 [18] [i_1] = (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_21 = var_12;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_22 = var_4;
                            var_23 = ((0 & (((!(-188828155 <= 0))))));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_24 = (arr_0 [5]);
                var_25 = ((((arr_6 [i_8] [i_0]) / (arr_6 [i_0] [i_8]))) << ((((3446965603231018932 << (8214 - 8213))) - 6893931206462037843)));
                var_26 = ((((min((((0 ? 65535 : 65535))), (arr_19 [i_8] [13] [3] [13] [13] [15])))) ? ((min((arr_11 [i_0] [i_0] [i_8]), (arr_11 [i_0] [i_4] [i_8])))) : (((!((min((arr_2 [i_0] [i_0]), var_10))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_27 = (arr_1 [i_0]);
                            arr_31 [2] [i_4] [i_4] [i_4] [i_4] |= ((var_3 > (min((arr_7 [i_9 + 2] [i_9 - 1] [i_9 + 4] [i_9 + 2]), (arr_19 [i_9] [i_9 + 4] [i_9 + 3] [i_9 + 2] [i_9 + 4] [i_9 + 3])))));
                            arr_32 [i_0] [i_4] [i_4] [i_0] [i_9] [i_10 - 3] = (min(22885, 130));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_28 = ((~(((((arr_28 [i_0] [i_4] [i_11] [4]) ? var_7 : 3576247752))))));
                        var_29 = (arr_19 [i_12] [14] [i_12] [i_12] [0] [i_12]);
                    }
                }
            }
            var_30 = ((((var_15 << (((min(20214, (arr_14 [i_0] [i_0]))) - 20198)))) >= (((arr_3 [i_0]) ? var_14 : var_11))));
        }
        var_31 = 7993300373451555486;
        var_32 = (max(((((arr_1 [i_0]) || (arr_1 [i_0])))), (arr_1 [i_0])));
        var_33 = (max(var_33, (!var_14)));
    }
    var_34 = (min((min(4294967295, (((var_5 >> (65535 - 65532)))))), var_15));
    #pragma endscop
}
