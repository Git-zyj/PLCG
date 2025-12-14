/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_4;
                arr_7 [i_1] [i_0] = (9778 / 1160322859);
                var_12 = (((-(arr_1 [i_0] [i_1]))));
                var_13 |= -1160322862;
                var_14 = var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_3] = -var_4;
                arr_14 [i_3] = var_7;
                var_15 = var_0;
            }
        }
    }
    var_16 = var_7;
    var_17 = (((((var_8 ? var_7 : 539807564))) ? (((((-1160322877 ? var_8 : var_5))) ^ (~var_3))) : var_0));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_18 = (max(var_18, (((-((14766898224647232333 ? 133 : var_11)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [13] [i_7] [i_4] [i_4] [i_4] [i_4] = ((~((((min(var_10, (arr_18 [12] [12])))) ? (~var_10) : (~var_11)))));
                                var_19 *= (max(((max(var_3, var_3))), var_6));
                                arr_28 [i_4] [i_4] = 1160322876;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
