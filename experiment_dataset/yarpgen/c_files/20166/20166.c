/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 = (max(var_16, 0));
                    var_17 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                    var_18 = (min(var_18, ((((arr_6 [i_1]) ? (-127 - 1) : (((arr_2 [i_1]) ? 0 : -25)))))));
                    var_19 = (max(var_19, (((-127 - 1) ? ((0 ? var_4 : var_5)) : -0))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_20 = var_14;
                    var_21 = (min(var_21, (((~(arr_5 [i_0] [i_0]))))));
                }
                var_22 = (max(var_22, (arr_9 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_23 = var_11;

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_24 |= ((((max(((max(1, (arr_5 [i_4] [5])))), 227))) ? ((-(arr_1 [4]))) : ((((!((((arr_3 [14]) + -2147483635)))))))));
        var_25 -= (max((((arr_2 [8]) ? (arr_0 [1] [i_4]) : ((var_8 ? 0 : (arr_6 [4]))))), (((((var_9 ? (arr_4 [12] [i_4]) : 0))) ? (arr_1 [0]) : (arr_9 [4] [6] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_26 = (max(var_26, 127));
                        var_27 += (arr_4 [i_7] [4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
