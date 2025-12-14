/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((8937889557885160248 ? 1086806784 : var_2))));
    var_16 = (8937889557885160248 - var_7);
    var_17 = (var_5 * var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_3;
                var_18 ^= ((((4294967295 ? var_10 : 9508854515824391367)) * (arr_0 [i_1])));
                var_19 = ((max(-633340526, (!-95))) & ((max((-23 || var_5), var_10))));
                var_20 *= ((var_10 ? (arr_1 [i_0] [i_1]) : (((arr_1 [i_1] [i_0]) ? var_0 : (arr_1 [i_0] [i_1])))));
                var_21 = 2494364447760431285;
            }
        }
    }
    var_22 = (((~28504) ? var_2 : (max((min(var_5, var_13)), var_7))));
    #pragma endscop
}
