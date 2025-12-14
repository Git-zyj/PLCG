/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((((((23913 ? 21 : 41596)) << (888048865 - 888048858))) + 0));
                                arr_13 [i_0] = var_11;
                                var_19 *= (((var_1 - -7786088564060175861) != (min(5760125373686815176, (arr_11 [i_4 + 1] [i_3] [i_3] [i_3] [i_1 - 3] [i_1 - 3] [i_1 - 3])))));
                            }
                        }
                    }
                    var_20 += (16497 > 64324);

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_0] [i_2] [i_1] [12] [i_0] = ((((((var_9 - var_14) ^ var_14))) ? var_17 : ((-16498 ? var_4 : var_15))));
                        var_21 -= var_0;
                    }
                }
            }
        }
    }
    var_22 -= ((46578 ? (var_5 || -16514) : ((max(var_13, var_10)))));
    var_23 = 16497;
    #pragma endscop
}
