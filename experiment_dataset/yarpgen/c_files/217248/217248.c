/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!0) ? 939524096 : (!170)));
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_13 = (max(var_13, (((!(((18 ? (arr_3 [i_2 + 1]) : var_0))))))));
                    var_14 = (((((min(var_10, -1411823461) > (((var_1 / (arr_0 [5] [i_0 - 1])))))))));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_10 [i_3] [i_1] [i_1] [i_0 + 2] = (((min((3355443199 || 173), var_7)) >= (((~-24443) ? (((arr_3 [i_0]) ? var_0 : 13751120244061749921)) : (arr_8 [i_1] [i_1] [i_1] [i_1])))));
                    arr_11 [i_1] [i_1] [3] = (arr_3 [i_0]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_4] = ((+(((arr_4 [i_1 - 1] [i_1] [i_0 + 2]) / (min((arr_1 [1]), (arr_4 [i_0] [i_1] [i_4])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_15 = var_5;
                                arr_21 [i_1] = ((!(!2207622686)));
                                var_16 -= ((((((var_0 <= (arr_8 [i_6] [i_0 - 1] [i_1 - 1] [i_5]))))) * (min(var_4, (arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_1 + 1])))));
                            }
                        }
                    }
                }
                arr_22 [i_1] = ((((!((max(114, (arr_17 [i_1] [i_1] [i_1] [i_1])))))) ? (((((arr_18 [i_1]) != (1 / 31))))) : (((((min(-2256476290421381175, var_9)) + 9223372036854775807)) >> (var_9 - 1983657371388641057)))));
            }
        }
    }
    var_17 += var_8;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                arr_29 [i_8] = (max(-1328710097, 1759395865));
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_18 = (min((((1 ? var_1 : -123))), ((24443 ? 9866245624244569069 : 2207622686))));
                                arr_39 [i_7] [i_8] [i_9] [i_10] [i_11] |= ((-2914441391702018585 ^ (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
