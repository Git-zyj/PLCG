/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (((((var_4 ? (arr_4 [i_0 + 3] [i_1 - 1]) : var_4))) + (((var_0 ^ var_2) ? ((var_5 ? var_1 : (arr_1 [i_0]))) : var_11))));
                arr_5 [i_0] [i_1] = var_7;
                var_16 = var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_17 = var_0;
                            var_18 = var_7;
                            var_19 = min(255, (min(((var_14 ? 14 : -11)), ((4095 << (-11 + 28))))));
                        }
                    }
                }
                var_20 = (((arr_2 [i_2] [i_2] [i_2]) << (((((arr_4 [i_2] [i_3]) + 2320087272090933056)) - 18))));
            }
        }
    }
    var_21 = ((min(((((-27 + 2147483647) << (246 - 246)))), var_13)));
    var_22 = (max(var_22, ((((((var_11 / var_4) * var_13))) ? var_0 : var_10))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_23 -= arr_2 [i_6] [7] [7];
                                var_24 -= var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((var_12 || ((((var_11 ? var_1 : var_3)) <= (min(var_4, (arr_23 [i_6] [i_6]))))))))));
                                var_26 *= var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_41 [i_14] |= (((var_2 != (arr_19 [i_13]))));
                                var_27 = ((var_5 & (((((var_2 ? var_5 : var_3))) ? (((var_4 ? var_12 : (arr_21 [i_7] [i_7] [i_7])))) : ((var_7 ? var_9 : var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
