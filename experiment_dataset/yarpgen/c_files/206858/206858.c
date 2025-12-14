/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? ((~((var_5 ? var_14 : var_12)))) : ((max(-18443, var_10)))));
    var_20 = ((var_9 ? (var_14 % 32745) : (((~((var_1 >> (var_2 - 215))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (((~(arr_4 [i_0] [i_0] [i_0]))));
                    arr_9 [17] [i_1] [i_2] = ((~(arr_6 [i_2 - 1])));
                    arr_10 [i_0] [i_1] = -18443;
                    arr_11 [i_0] [i_0] = ((-((((min((arr_5 [i_0] [i_1] [4]), var_12))) ? 576459652791795712 : 127))));
                    var_22 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
