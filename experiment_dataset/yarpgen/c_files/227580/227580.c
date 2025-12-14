/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 *= var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] = (((((1 ? 15 : 32))) ? ((1 ? var_1 : -87)) : (max(((var_1 ? -44 : (arr_0 [i_0]))), (arr_4 [i_0])))));
                                var_13 = (((118 | -105) | (arr_10 [i_2] [4] [i_2] [i_2] [i_2 + 1] [i_3])));
                                var_14 = (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                                var_15 = var_8;
                            }
                        }
                    }
                    arr_14 [i_2] [i_2] [i_2] [i_0] = ((((-105 ? 2147450880 : (~1)))) ? -22199 : ((((var_1 ? var_3 : (arr_10 [i_2] [i_2 - 1] [i_2] [i_1] [i_0] [i_0]))))));
                    var_16 = ((-1 ? (arr_9 [7] [i_2] [i_1] [i_1 - 1] [i_2 - 2] [i_2]) : 1725397593));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_17 = ((~((((((arr_11 [i_5] [i_5] [i_5] [i_5] [2] [i_5]) ? var_6 : 1))) ? ((min(var_7, var_9))) : (arr_6 [i_6])))));
                var_18 -= ((var_3 * ((var_8 ? (arr_19 [i_5] [i_5] [i_6]) : (arr_19 [i_5] [i_5] [i_6])))));
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
