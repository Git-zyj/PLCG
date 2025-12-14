/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (((-74 & 0) ? var_2 : var_8));
                var_13 = ((!(((-(min(var_9, (arr_3 [i_0] [i_0] [i_0]))))))));
                var_14 += (max(var_3, (arr_3 [i_0] [i_0] [i_0])));
                arr_6 [i_0] = (~1277334555);
                var_15 = (var_5 % var_2);
            }
        }
    }
    var_16 ^= var_2;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = (min(var_17, (max((-var_3 || var_3), var_3))));
                arr_12 [i_2] [i_2] = (arr_9 [i_2] [i_2]);
            }
        }
    }
    var_18 = (max(var_18, (((var_7 ? (((var_5 / var_10) ? (~32748) : (var_1 == var_10))) : (var_3 <= 4223601562325337207))))));
    #pragma endscop
}
