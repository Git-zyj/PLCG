/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = -1001095259;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = var_10;
                                arr_16 [i_1] [i_4 - 1] = ((min(-var_7, (!var_6))));
                                var_16 = 1001095258;
                            }
                        }
                    }
                    var_17 = var_7;
                    var_18 = 1001095249;
                }
            }
        }
        var_19 = (arr_3 [i_0]);
        arr_17 [i_0] = ((-108 + (max(1001095247, (arr_6 [i_0] [i_0] [1])))));
        var_20 *= ((min(var_12, 1001095258)));
    }
    var_21 += (((-1001095258 / var_4) << (((max(((var_1 ? var_8 : var_12)), (var_13 || -1))) - 21537))));
    var_22 = (min(var_14, (((!(((var_12 ? var_8 : var_10))))))));
    #pragma endscop
}
