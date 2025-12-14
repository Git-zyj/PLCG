/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 3));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (((arr_1 [i_0]) <= (((arr_9 [i_0 - 1] [i_2 + 2]) - (arr_9 [i_0 + 1] [i_2 + 3])))));
                        var_22 -= (max((max((arr_7 [i_2 - 1] [i_3] [i_0 + 1]), (arr_7 [i_2 - 1] [i_1] [i_0 + 2]))), (arr_7 [i_2 - 1] [i_3] [i_0 - 1])));
                    }
                }
            }
            arr_13 [i_0 - 1] [i_1] [i_0] = max(((min(230, 22))), ((26 * (((min((arr_0 [i_0]), var_4)))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_4] [i_0] [i_4] = ((var_13 * ((max(5749, 1747)))));
            arr_18 [i_0] [i_0] = 59797;
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0 + 1] [i_0 + 2] = (arr_21 [i_5 + 2] [i_6 - 1]);
                        var_23 = (max(var_23, (!12)));
                    }
                    var_24 = (min(var_24, (((!((min(63, ((1 ? (arr_7 [i_0] [10] [i_6]) : var_0))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            {
                var_25 = (max(var_25, (((53924 && (arr_29 [i_9 - 1] [i_9 - 1]))))));
                var_26 = 4096;
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_27 -= var_0;
                                var_28 ^= ((209 << ((min(48, 1)))));
                            }
                        }
                    }
                }
                var_29 = (min(((max((max((arr_34 [i_8] [i_9]), (arr_29 [i_9] [i_8]))), ((max(8978, 8988)))))), (max(8, var_9))));
            }
        }
    }
    var_30 = var_8;
    #pragma endscop
}
