/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_10 = (arr_8 [i_1]);
                        arr_12 [i_1] [i_3] = var_2;
                    }
                    var_11 = 8191;
                }
            }
        }
    }
    var_12 *= var_9;
    var_13 = (((((((var_3 ? var_0 : var_1))) ? var_8 : 0)) * (247 > var_7)));
    #pragma endscop
}
