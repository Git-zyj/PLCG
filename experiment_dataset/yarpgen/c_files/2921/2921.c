/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = var_3;
                var_13 ^= ((2000795501 / (-32767 - 1)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (-1576341216 ? -670219513 : -670219518);
                                var_15 = ((~(2139095040 | 7)));
                                var_16 = ((~((var_6 ? var_11 : ((5975386088709621594 ? var_0 : var_11))))));
                                var_17 = var_0;
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1 - 1] = (((2139095040 * 670219512) && (((1 ? 21 : var_10)))));
            }
        }
    }
    var_18 = (max(1, ((24527 ? 21 : 2155872256))));
    #pragma endscop
}
