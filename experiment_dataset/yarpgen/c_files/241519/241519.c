/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 95;
    var_21 = ((37977 ? (((~var_1) ^ (121 | 125))) : 15636));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = var_17;

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] = 37752;

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_23 = ((~(arr_5 [i_1] [i_1] [i_1])));
                arr_11 [i_0] [2] [i_1] [0] |= (!1);
            }
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                arr_16 [i_1] [i_1] [i_1] = (((arr_6 [i_0] [0] [i_0]) * (var_5 >> 1)));
                var_24 = (((((!(arr_8 [3] [3] [i_1])))) * (49894 || 1)));
            }
            var_25 = (max(var_25, -15284));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_26 = (max(var_26, var_4));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_27 = (min(var_27, var_10));
                            var_28 = ((~(((!(arr_0 [16] [i_6 - 1]))))));
                        }
                    }
                }
            }
            arr_26 [i_4] = (159 <= 1322867432);
        }
    }
    var_29 = var_16;
    #pragma endscop
}
