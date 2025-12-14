/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 -= ((var_6 ? ((min(((max(65535, 47576))), ((var_15 ? -1 : 12567))))) : (((var_16 ^ var_17) ? ((554959720070689296 ? 37182 : var_0)) : (((10077 ? 2147450880 : 243)))))));
                                var_20 = ((-((var_15 ? (var_1 | var_11) : var_10))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_20 [9] [18] [i_5] [i_5] [11] = (((((2147516415 ? 2147450880 : 4691))) & (~var_13)));
                                var_21 = var_11;
                            }
                        }
                    }
                }
                var_22 = (((-var_12 ? 5969112957871455298 : (10055813974973419944 / var_3))));
            }
        }
    }
    var_23 *= ((((((20 ? var_10 : 2147516415)) ? 80 : 80))));
    var_24 -= (~var_10);
    #pragma endscop
}
