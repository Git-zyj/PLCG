/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(70368744177656, var_1)) | var_5))) ? ((((var_12 ? var_10 : var_0)) | (((1 ? 1069547520 : var_8))))) : (((max((var_3 || -1948944615), (-2147483646 == var_5)))))));
    var_14 = ((var_3 ? -1180505385 : ((var_8 ? (((4515189237046284362 ? var_3 : var_1))) : (max(-4542721730685764301, var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (((((1191 ? (arr_3 [i_0] [i_0] [7]) : -788978147))) ? var_1 : (arr_5 [i_0] [i_1 - 4] [i_1 - 4] [i_1 - 3])));
                    var_16 = (135440425 == 64);
                    var_17 = (max(var_17, ((((arr_4 [i_2] [i_0]) <= var_3)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_18 = (((arr_8 [i_3]) | var_8));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 *= ((var_2 ? ((((arr_0 [i_0]) ? var_7 : (arr_13 [i_0] [i_5] [i_6 + 1])))) : var_11));
                                var_20 = ((-9223372036854775795 ? (arr_10 [i_0] [i_5 - 1] [i_6 - 1] [i_5]) : ((469762048 ? (arr_0 [i_6]) : var_12))));
                                var_21 = ((-((var_1 ? var_3 : 639860170))));
                            }
                        }
                    }
                }
            }
        }
        var_22 ^= ((!(arr_13 [i_0] [i_0] [i_0])));
        var_23 ^= (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
