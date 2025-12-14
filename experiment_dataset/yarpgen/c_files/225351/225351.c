/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-26 != ((min((-26 == var_13), (arr_3 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 -= 250;
                                arr_16 [i_4] [i_1] [i_1] [i_1] [i_0] = 11386;
                                var_18 = (((~((-29 ? 68 : var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_29 [i_8] [i_5] [i_5] [6] [i_5] [i_8] [i_5] = ((1 < (((max((arr_17 [i_7]), (arr_17 [i_6])))))));
                                var_19 *= ((3694801338 >> (((arr_20 [i_6 - 1]) - 57634))));
                            }
                        }
                    }
                    arr_30 [i_6 - 2] [i_7] = (arr_27 [i_5] [i_7] [i_6 + 3] [9] [i_5]);
                }
            }
        }
    }
    var_20 *= ((var_11 & ((((var_12 ? var_14 : 1)) >> (((~var_7) + 64))))));
    var_21 = (((var_12 ^ var_15) ? ((122 ? (25 > var_7) : (~var_12))) : (var_6 < var_15)));
    var_22 = var_15;
    #pragma endscop
}
