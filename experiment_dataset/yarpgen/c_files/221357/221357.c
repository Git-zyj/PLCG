/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? var_8 : (max(6, -1040311251851753340))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] = (((arr_8 [i_0] [i_3 + 1] [i_2] [i_2 - 1]) ? ((max((arr_8 [i_0] [i_3 - 1] [i_2] [i_2 + 2]), var_2))) : ((var_18 ? var_4 : (arr_11 [i_0] [i_3 + 1] [i_2 - 1] [i_2 + 1] [i_2])))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_2] = (min((((((var_9 ? 6 : 15998523629135491753)) > ((max((arr_9 [1] [i_1] [i_1] [i_3] [i_2] [i_3]), var_13)))))), (min((~var_15), 1040311251851753351))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 = var_13;
                                var_21 = ((1958044839 / (max(-27746, (min(var_3, (arr_6 [i_0] [i_5] [i_2 - 1] [i_2])))))));
                                arr_19 [i_6 + 1] [12] [1] [i_6 + 1] [i_5] [i_6] &= ((!((((min(var_8, var_8))) || ((min(var_11, (arr_11 [i_0] [i_1] [i_2] [i_5] [i_5]))))))));
                            }
                        }
                    }
                    var_22 ^= (((((1 ? 6 : -1040311251851753351))) || ((max((max(var_3, 1)), -2)))));
                    var_23 = (min((max((max(4, 79340050)), (min(var_13, 4294967290)))), (((-(arr_12 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
