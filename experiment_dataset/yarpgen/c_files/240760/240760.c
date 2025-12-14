/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 *= ((((min(57, (arr_1 [i_1 + 2])))) ? (arr_6 [i_0] [i_1] [i_1] [i_4]) : ((-(arr_10 [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                                var_18 = (min((((arr_6 [i_0] [i_1 + 1] [i_3] [i_3]) ? (arr_2 [i_2 - 3] [i_4]) : var_15)), ((1 ? 1 : 1))));
                                var_19 = ((~(arr_1 [i_0])));
                                var_20 *= (5495 + -21);
                            }
                        }
                    }
                    var_21 += (min(((var_14 ? (arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3]) : (arr_9 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))), 1));
                    var_22 = 3228803857;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_23 |= (((arr_13 [i_5]) ^ var_6));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 = (arr_19 [i_5] [i_5] [i_7]);
                        arr_23 [i_5] [i_6] [0] [i_8] [i_7] [i_6] = ((var_2 <= (arr_0 [i_6 - 3])));
                    }
                }
            }
        }
    }
    var_25 *= -122;
    var_26 = (max(var_26, var_4));
    #pragma endscop
}
