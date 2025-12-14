/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-3208281504248287192 ? 68 : 1580309539));
    var_21 = (max(var_21, var_1));
    var_22 = (((((((max(-41, var_0))) >> var_3))) ? (max(var_2, var_17)) : var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= (+-155);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_23 *= (!var_4);
                        var_24 = (max(var_24, var_2));
                    }
                }
            }
        }
    }
    #pragma endscop
}
