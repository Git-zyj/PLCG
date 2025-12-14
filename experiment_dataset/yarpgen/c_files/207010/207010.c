/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_12, -0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((-(min((arr_2 [i_0 + 1] [i_0 + 1]), (var_3 / var_4)))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] = (((min((1 | 859497520), 1)) ^ (((1 ? ((max(1, 1))) : var_9)))));
                    var_21 -= -1;
                    var_22 |= ((var_13 ? (arr_3 [i_2]) : (arr_1 [i_0])));
                    var_23 = (min((min(((min(var_7, var_9))), -0)), 1));
                }
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
