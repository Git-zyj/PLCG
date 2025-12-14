/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 -= var_10;
        var_21 += (205 >= var_16);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_22 = (((((125 ? 24 : 94))) ? var_17 : ((var_2 ? 1 : (arr_1 [i_3])))));
                        var_23 = (max(var_23, (~var_5)));
                    }
                }
            }
        }
        var_24 = (max(var_24, (((-3 ? 52 : 1)))));
    }
    var_25 = (!var_13);
    var_26 = ((~((min((var_15 || var_13), var_16)))));
    var_27 = (((-875237578 ? var_15 : var_6)));
    #pragma endscop
}
