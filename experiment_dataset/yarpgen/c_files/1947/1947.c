/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = ((!((((~57614) ? var_5 : var_16)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_22 += (131283324 && 576460752303422464);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [8] [i_2] [8] |= ((-1520933619 ? (((var_12 ? var_5 : (arr_6 [i_2] [i_4 + 1] [i_4])))) : (min(var_17, ((var_18 ? var_6 : var_7))))));
                                var_23 = ((~((49885 ? var_14 : var_14))));
                                var_24 = ((127 ? (max((var_11 / var_19), (arr_9 [i_4] [i_4 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) : ((102 ? (116 % var_14) : (!112)))));
                                var_25 -= -112;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
