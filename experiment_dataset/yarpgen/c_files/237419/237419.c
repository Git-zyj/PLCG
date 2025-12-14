/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 ^= var_6;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] = 620251599;
                            var_19 = ((7193710989876239633 + ((var_10 + (arr_8 [i_0] [i_2] [1])))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 ^= (((((var_10 * -1) / 2017612633061982208))) ? (max((max(14778222395981864661, 7193710989876239633)), (arr_5 [i_4] [i_5]))) : ((min(0, var_9))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_22 = var_7;
                                var_23 = (min(var_23, ((((((~(min(var_13, 16119261021803708382))))) ? (((((min(204, var_6))) >= (arr_9 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 2] [i_8 - 1])))) : var_7)))));
                                arr_25 [i_4] [i_4] [i_4] [15] [12] [i_4] [12] = ((max((arr_15 [i_8 - 1]), (arr_5 [i_8 - 1] [i_8]))) < (max(0, (arr_5 [i_8 - 1] [i_8]))));
                                var_24 *= (((((~((min(var_3, (arr_23 [7] [7] [i_6] [14] [i_8 + 1] [i_5]))))))) && (((-(6989725963683285907 / -7193710989876239634))))));
                                arr_26 [i_4] [i_5] [i_6] [i_7] [i_5] |= ((((4137770383212764124 ? -var_1 : 5973825754048893503)) * -58));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
