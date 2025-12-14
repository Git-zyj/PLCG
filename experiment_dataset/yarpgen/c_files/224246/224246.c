/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (!-var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((!(arr_2 [i_0] [i_0] [i_1]))))));
                arr_4 [19] = ((((!(arr_0 [i_0])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [12] [12] [12] = ((-((-(~11)))));
                    arr_9 [13] [i_1] [13] [i_1] = (~-var_7);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = (--11);
                    arr_13 [i_3] [i_3] [i_3] [0] |= (--2092645408);
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    var_13 -= ((-(arr_14 [9] [9] [i_4] [i_0])));
                    arr_16 [i_0] [i_1] = ((-(~var_3)));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] &= ((~(~2092645408)));
                                var_14 = -11;
                                var_15 ^= ((~(arr_0 [i_0])));
                                arr_24 [i_6] [i_6] [11] [i_4] [i_1] [17] = ((~(!-20)));
                            }
                        }
                    }
                }
                arr_25 [i_0] [i_0] = (--81091537);
            }
        }
    }
    #pragma endscop
}
