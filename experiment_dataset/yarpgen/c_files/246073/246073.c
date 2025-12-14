/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_1] [i_0]);
                arr_5 [i_1] [i_1] = ((-(((13144258816792047563 && ((((arr_2 [i_0] [i_1 - 1]) ? 3970873287 : var_5))))))));
                arr_6 [i_1] [i_1] = (arr_3 [1] [i_1]);
            }
        }
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = (arr_8 [i_2] [i_2]);
        var_19 = (max((((((((arr_8 [i_2] [3]) ? (arr_7 [i_2] [i_2 + 1]) : (arr_7 [i_2] [i_2])))) ? ((((arr_8 [i_2] [i_2]) >= var_4))) : var_16))), ((var_12 << (((arr_8 [i_2 - 1] [i_2 - 1]) - 7067))))));
        arr_10 [i_2] = (arr_7 [i_2] [i_2]);
        var_20 = max(-32753, (max(-8005311596236555764, -32748)));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = var_3;
        var_21 ^= var_5;
        var_22 ^= (((((arr_11 [i_3 - 2] [8]) ? var_6 : (arr_12 [i_3] [i_3])))));
        var_23 += (((arr_11 [i_3] [i_3]) >= (((((32752 ? 25584 : 32753))) ? (arr_11 [i_3] [i_3]) : (((arr_8 [1] [i_3]) ? var_9 : (arr_12 [i_3] [i_3])))))));
        arr_14 [4] = (65529 || 18375);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_17 [16] = (((arr_15 [i_4] [i_4]) ? (min(21201, (arr_15 [12] [i_4]))) : (((((arr_16 [i_4] [i_4]) == (arr_16 [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                {
                    var_24 = (arr_20 [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_25 = ((-(~1)));
                                arr_28 [i_8] [i_7] [i_6] [i_5] [i_4] |= (arr_19 [i_5] [i_4] [i_5]);
                            }
                        }
                    }
                }
            }
        }
        var_26 = (min(((min(32761, 17973706783879750845))), var_17));
    }
    var_27 = var_7;
    var_28 = var_14;
    #pragma endscop
}
