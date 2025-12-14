/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((32751 ? (~17) : (min(var_5, var_14)))));
    var_17 = var_1;
    var_18 = (var_10 ? var_13 : (max(4258758724, 32745)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((~((max(124, (arr_3 [i_0] [i_0]))))))));
                    var_20 -= (var_14 / var_7);
                    var_21 *= -32747;
                    arr_10 [i_2] [i_2] [i_2] [18] = ((((21 >> (237 - 175))) & ((((arr_0 [i_0]) ? var_15 : ((16 ? 2122802673 : 24)))))));
                }
            }
        }
    }
    #pragma endscop
}
