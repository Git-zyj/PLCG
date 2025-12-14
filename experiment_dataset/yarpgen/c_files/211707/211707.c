/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((-84 >= var_7) && -1131215625));
                arr_5 [i_0] [i_0] |= (max((arr_0 [i_0]), ((((arr_2 [14] [i_0 + 2] [i_1]) && (((65530 ? -1131215638 : 32766))))))));
                var_17 = ((var_0 < (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1])))));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_18 = 93;
                    var_19 += 1131215621;
                    arr_8 [i_0] = 62;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = -var_6;
                                arr_16 [i_2] [i_1] [i_3] [i_2] [i_1] [i_0] = ((33976 ^ (arr_4 [i_0])));
                                var_20 -= (min(31575, 12114079263995570602));
                                var_21 = (arr_7 [i_0] [i_1] [i_4]);
                            }
                        }
                    }
                    var_22 = (min(31559, 33984));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_5] [1] &= ((((var_11 ? ((17505 ? (arr_20 [i_5] [i_1] [2] [i_0 - 2]) : var_1)) : (((((arr_1 [i_0] [i_1]) || 1)))))) | ((min(244, (127 ^ 1696200496))))));
                    arr_22 [i_0] [i_1] [i_1] = var_13;
                    arr_23 [i_5] [i_1] [1] [i_0] = (arr_4 [i_5]);
                    arr_24 [19] [16] [i_5] |= (min(-1341056041, (arr_2 [i_0] [i_0] [i_5])));
                }
            }
        }
    }
    var_23 *= var_1;
    #pragma endscop
}
