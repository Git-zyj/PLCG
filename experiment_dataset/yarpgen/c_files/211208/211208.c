/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((((min(var_17, 30118))) ? var_11 : (!var_13)));
                    var_20 = -6926629647404432241;
                    arr_10 [i_0] [i_0] [i_0 + 1] = (max((((8213 ? 114 : 85764956))), -8224));
                }
            }
        }
    }
    var_21 = var_14;
    var_22 = (min(var_22, -0));
    #pragma endscop
}
