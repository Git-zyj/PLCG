/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_0 ? var_1 : (var_10 != var_0))), 45154));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, 0));
        var_19 += (!1024);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_20 = arr_3 [i_1];
        arr_5 [i_1] = (min(((((arr_2 [i_1]) >= (arr_2 [i_1])))), (min((arr_2 [i_1]), (arr_2 [i_1])))));
        var_21 = var_9;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 *= (min((((0 ? (~64508) : ((((arr_6 [6] [i_2]) || var_8)))))), (arr_13 [0])));
                    arr_14 [0] [0] |= -5330686848063261822;
                }
            }
        }
        var_23 = ((var_10 == (~-var_3)));
    }
    #pragma endscop
}
