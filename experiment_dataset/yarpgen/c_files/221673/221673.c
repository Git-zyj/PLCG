/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(var_13, (!var_5)))));
    var_16 = var_6;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [3] = ((var_6 * (arr_0 [i_0])));
            var_17 -= (arr_1 [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_18 &= (((((-8 ? var_14 : 9))) ? (arr_8 [i_3 + 1] [i_2] [i_1] [i_0 - 1]) : (((var_14 ? var_13 : var_7)))));
                        var_19 = 16383;
                        var_20 = 54174;
                    }
                }
            }
            var_21 = -9981;
        }
        var_22 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_23 -= (((-(arr_7 [i_4 + 1] [i_5]))) + var_1);
                    var_24 ^= 18329;
                }
            }
        }
        var_25 = ((!(arr_9 [i_0 - 4] [i_0 + 1] [i_0 + 3] [i_0 - 1])));
        var_26 = var_10;
    }
    for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (((((+((var_3 ? (arr_10 [i_6] [4] [i_6 + 2] [i_6]) : 0))))) ? (((var_1 ? 16 : ((-(arr_4 [i_6] [i_6])))))) : ((+(((arr_20 [i_6 + 1]) - 1428312299))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {
                    var_27 = (arr_25 [i_8 + 2] [i_8 + 2]);
                    var_28 ^= ((arr_2 [i_7]) ? ((min((arr_19 [i_6]), 0))) : var_13);
                }
            }
        }
    }
    #pragma endscop
}
