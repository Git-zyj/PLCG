/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1689575913373387430;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((+(((var_8 && 0) ? var_10 : (arr_4 [i_1] [i_1])))));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    arr_10 [i_1] [i_1 + 3] [i_1] = var_6;
                    var_13 = (min(((((((arr_3 [i_0]) * var_3)) != 1))), (max((max(var_7, (arr_7 [i_0]))), ((-69 ? -80 : var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = (((((((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]))) ? -70 : ((min(var_6, (arr_13 [i_1] [i_1] [i_2] [i_3] [i_4]))))))) ? (!var_2) : (!var_2)));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] = var_8;
                            }
                        }
                    }
                    var_14 = (max(var_1, 2966));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_1] [i_0] = ((+(((arr_0 [i_0]) & var_4))));
                    var_15 = ((arr_14 [i_5 + 2] [i_1] [i_5] [i_5] [i_1]) && (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0]));
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_16 = (max((min((arr_0 [i_6 + 4]), var_3)), (max(((9130241705283723066 ? var_5 : var_1)), ((88 ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_6))))));
                    var_17 *= (min(1, (((arr_4 [i_6] [i_0]) ? 1 : 0))));
                    var_18 = (((9123801190317007619 << 1) * ((((!(arr_9 [i_0])))))));
                }
                var_19 ^= (((~var_5) | (~var_2)));
                var_20 = (min(var_20, (!1)));
                var_21 -= (min((max((arr_11 [i_1 + 1] [i_1 + 3]), 1)), (max((arr_11 [i_1 + 1] [i_1 + 3]), var_10))));
            }
        }
    }
    var_22 *= ((~(max(var_0, (4092097095437066390 | 0)))));
    var_23 = ((-(min(var_7, ((18158513697557839872 ? var_10 : 1))))));
    #pragma endscop
}
