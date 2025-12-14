/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((~1) + (max(var_10, (arr_6 [i_0] [i_1] [i_2 + 1] [i_1]))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = var_13;
                }
            }
        }
    }
    var_16 = (max(-5287, ((var_7 ? var_8 : var_0))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 = ((-5287 ? (max((~var_14), (min((arr_23 [i_5] [i_4 - 1] [i_5] [i_5]), (arr_1 [i_3] [i_3]))))) : (arr_17 [i_5 - 2] [i_6] [i_7])));
                                arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1] = ((~(arr_21 [i_5] [i_6] [i_5] [i_5])));
                            }
                        }
                    }
                    var_18 = -105;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {

                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    arr_33 [i_8] [i_9] [i_9] [i_10 - 3] = (((56 ^ (arr_27 [i_8]))));
                    var_19 = (max(var_19, (((min(var_11, (arr_3 [i_8] [i_10 - 3] [i_8])))))));
                    arr_34 [i_8] [i_9] [i_10] [i_8] = (min(var_6, (((~var_14) ? ((max((arr_7 [i_8] [i_9]), (arr_9 [i_8] [i_9])))) : (var_10 & -5287)))));
                }
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    var_20 += ((max(-6209863389029749412, 1321)));
                    var_21 = ((!((max((~var_1), (min(53, (arr_30 [i_9]))))))));
                    arr_37 [i_8] [i_8] = 0;
                }
                var_22 = (!(191 && 1));
            }
        }
    }
    var_23 = (1549123603 | var_6);
    #pragma endscop
}
