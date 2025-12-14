/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (!-1)));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_2] &= (max((((arr_8 [i_0] [i_0] [i_0]) - (arr_7 [i_0] [i_1] [i_2]))), (arr_7 [i_0] [i_0] [i_2])));
                    var_14 = (arr_2 [i_0]);
                    var_15 = (((((~var_7) ? (-12 < var_3) : var_2)) | (~22)));
                    arr_10 [i_1] [i_1] [i_1] = (min((min(var_3, (218 < -19))), var_2));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((min((((-(arr_17 [i_0] [i_0] [1] [i_0] [i_0] [i_0])))), (arr_14 [14] [i_1] [i_3] [i_4]))))));
                                var_17 *= (2463935489 ^ (((~((-(arr_18 [i_0] [i_0] [i_3] [8] [16])))))));
                            }
                        }
                    }
                    var_18 = (arr_1 [i_0]);
                    var_19 = (min(((122 ? -103 : 1831031797)), 2463935503));
                }

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_20 = (min((((((var_4 << (((arr_1 [i_1]) - 209))))) ? (max(5363094007746350779, 111)) : (min(5363094007746350796, 246)))), ((((~4003298200) ? (arr_20 [i_0] [i_0] [i_7]) : 116)))));
                        var_21 *= 1;
                        arr_23 [i_0] [i_1] [i_0] = (~2463935496);
                        arr_24 [i_1] [i_1] [i_1] [i_7] = -3492214903387946057;
                    }
                    arr_25 [i_1] [i_6] = (((max(-var_2, ((1237465482 ? var_9 : 967834647)))) >= var_11));
                    var_22 *= (4294967284 != -22);
                    var_23 = (((-(arr_16 [i_0] [i_1] [i_0] [i_1]))));
                    var_24 = ((3626587206 ? (((-679044480 ? (((arr_16 [i_6] [14] [i_0] [i_0]) ? var_2 : 224)) : ((-15006 ? -37 : 384))))) : (((((15026 ? 1 : var_9))) ? var_0 : ((var_8 - (arr_18 [i_0] [i_0] [i_1] [i_1] [i_6])))))));
                }
            }
        }
    }
    #pragma endscop
}
