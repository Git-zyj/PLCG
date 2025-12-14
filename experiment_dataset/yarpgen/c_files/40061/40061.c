/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 += (((2772275259 ? -8404 : var_3)));
                    var_16 = ((((min(var_3, var_8))) ? (~2729) : (max(8918837038091785304, 0))));
                    arr_7 [i_2] [4] [i_0] |= (((max(var_7, (!9100901729288899559))) > (((var_14 % (((var_5 << (var_2 - 3468559289)))))))));
                }
            }
        }
    }
    var_17 = -var_9;
    var_18 = 30;
    #pragma endscop
}
