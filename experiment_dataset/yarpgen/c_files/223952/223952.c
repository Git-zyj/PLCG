/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 ? (((!(29374 && 63)))) : var_0));
    var_20 = ((-var_2 ? ((var_6 >> ((((84 ? var_18 : var_4)) - 2304578491)))) : ((-var_4 ? var_8 : -var_1))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((var_3 ? 5967 : var_17))) && 41))) < (((!(((var_18 ? var_12 : var_16))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = -452394206;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_4] [i_0] [i_4] [i_4] = ((!(((var_12 ? var_17 : var_8)))));
                                arr_18 [i_0] = (min((((-(arr_8 [i_1] [i_3] [i_1])))), ((~(~var_6)))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
