/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (206 - var_3);
    var_15 = (max(var_15, (9358083541277857585 != var_9)));
    var_16 = var_7;
    var_17 = (((((-(var_6 != 208)))) <= (min(var_4, var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((arr_3 [i_0]) ? (((arr_6 [15] [15]) & 3684)) : (arr_1 [1])));
                    arr_9 [i_1] |= var_9;
                    var_18 = (max(var_18, ((((((arr_0 [i_2]) ? var_8 : var_4))) ? (~64) : (~var_12)))));
                }
            }
        }
    }
    #pragma endscop
}
