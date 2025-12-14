/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((~-var_11) ? -27246 : 10279));
    var_19 = (min(var_19, var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((-8815996127380527054 ? var_12 : var_8))) ? (!var_14) : ((27237 ? -var_17 : var_16)))))));
                    var_21 = var_15;
                    var_22 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = ((-8891125798451415636 ? var_9 : var_8));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = (~var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
