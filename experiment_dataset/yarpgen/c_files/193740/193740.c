/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(-7705, (var_3 * var_10))), var_1));
    var_13 = -235;
    var_14 = (0 ? (!8218) : ((((max(var_0, var_6))) ? (~7884313534238313969) : (~var_8))));
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] = (arr_9 [i_0] [i_3] [i_3] [i_0]);
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] = 248;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_22 [i_4] [i_5] [i_5] [i_6] [i_7] = ((-(arr_14 [i_7] [i_5])));
                            var_16 -= var_2;
                        }
                    }
                }
            }
            var_17 = (233 || 235);
        }
        var_18 = (min(var_10, ((+(((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_9 : 1))))));
    }
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_19 = (min(((-(arr_25 [i_8 + 1]))), (arr_23 [i_8 - 2])));
        var_20 = 9;
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_34 [i_8] [i_11] [i_10] [0] = ((((!((((arr_26 [i_8] [i_9] [i_10]) ? (arr_33 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9]) : 248))))) ? ((((arr_33 [i_10] [9] [i_10] [i_9 + 1] [i_8 + 2] [i_8 + 1]) * (arr_26 [i_8 - 1] [i_10] [i_11])))) : ((((((arr_31 [i_8] [i_9] [i_10] [i_11 + 1]) ? (arr_27 [i_9]) : 23))) ? (((arr_27 [i_9 + 1]) ? (arr_25 [i_8 - 2]) : (arr_24 [i_8]))) : (arr_32 [i_9] [i_9] [i_9] [i_11])))));
                        arr_35 [i_8 + 1] [i_9 - 1] [i_11] [i_11] [i_8] = (min(1, 24));
                    }
                }
            }
        }
        arr_36 [i_8] [i_8] = (min(((-(arr_27 [i_8 + 1]))), (24 || 1)));
        var_21 = (arr_28 [i_8] [6]);
    }
    #pragma endscop
}
