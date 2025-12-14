/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_14 = var_0;
                            var_15 &= var_5;
                            var_16 = (min(var_16, (((max((((var_3 ? var_0 : var_4)), var_10)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, var_2));
                            var_18 += ((~(max(-var_7, (max(var_10, var_8))))));
                            var_19 = var_11;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((min((((max(var_0, var_10)))), ((var_13 ? var_6 : ((var_10 ? var_1 : var_13)))))))));
                                var_21 += var_1;
                                arr_22 [i_0] [i_0] [i_7] [i_0] [i_0] |= (max((max(var_7, var_11)), var_5));
                                arr_23 [i_6] [i_1] [i_6] [i_1] [i_6] = ((~((var_11 ? var_0 : var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
