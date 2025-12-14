/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_2;
    var_20 -= ((((39938 ? var_15 : (((max(var_13, var_7)))))) & (((((min(var_6, var_10))) + (var_6 >= var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (arr_6 [i_0 + 1] [i_0 - 1]);
                    var_21 -= var_18;
                    var_22 = (((((arr_2 [i_2 - 1]) / (arr_5 [i_0 + 1] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
