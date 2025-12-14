/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 *= (((!52350) != (((!((13186 == (arr_1 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [9] [i_2] = (((~13177) ? 21400 : 65535));
                                var_19 += ((max(((-(arr_4 [i_1] [i_4])), (~0)))));
                                var_20 = (65535 || 52350);
                            }
                        }
                    }
                    arr_14 [i_0] = ((((var_8 ? 52365 : (arr_7 [i_0] [i_0] [i_0]))) >= var_13));
                    var_21 = var_13;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 *= (~65303);
                                arr_20 [i_0] [i_0] [i_1 - 3] [i_2] [i_5] [i_6] = 36302;
                                arr_21 [i_1] [i_1] &= min(31261, (max((max(65535, 31261)), (min((arr_8 [i_6] [2] [i_2] [i_1] [0] [i_0]), var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
