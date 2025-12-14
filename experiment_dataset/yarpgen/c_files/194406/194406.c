/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] = arr_1 [i_1] [i_1];
                    var_19 = var_16;
                }
            }
        }
    }
    var_20 = ((1 && (~0)));
    var_21 = (0 == var_4);
    var_22 = ((~((((var_7 || var_15) != ((64 ? var_17 : var_12)))))));
    #pragma endscop
}
