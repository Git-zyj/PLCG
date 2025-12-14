/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (~2812753819121863951);
    var_14 &= var_8;
    var_15 = (((min((42 >= -49), (min(var_9, var_12))))) ? 106 : (max(((20756 ? -87 : var_1)), var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = var_4;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (arr_3 [1] [4] [i_1 + 2]);
                        var_18 ^= (-(arr_7 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0]));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_4 + 1] = ((((172 ? ((var_11 ? (arr_7 [i_0] [i_0] [8] [i_2] [i_2] [i_4]) : (arr_3 [i_0] [i_2] [i_4 + 3]))) : 253))) ^ ((-253 ? var_7 : var_11)));
                        var_19 = (arr_8 [i_4] [i_2] [i_0]);
                    }
                    var_20 = ((!(((((min((arr_6 [i_0] [i_2] [i_2] [i_0] [i_1]), var_7))) ? (arr_7 [i_0] [1] [i_2] [i_0] [i_1] [i_0]) : (((arr_9 [i_0] [i_0] [4] [i_1] [i_2] [i_2]) ? var_10 : (arr_9 [i_0] [8] [i_0] [i_0] [i_0] [8]))))))));
                }
            }
        }
    }
    var_21 = ((~((var_1 ? var_11 : ((var_12 ? var_6 : var_11))))));
    #pragma endscop
}
