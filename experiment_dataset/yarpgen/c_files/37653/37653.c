/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (~(((~(arr_5 [i_1])))));
                arr_6 [i_0] [i_1] [i_0] &= var_15;
                var_17 = ((((4645 ? (arr_0 [i_1 + 1] [i_1 + 2]) : (arr_2 [i_1 - 2])))) ? (((((min(var_1, var_11))) || ((max(2176067726, var_7)))))) : (((!((!(arr_3 [i_1])))))));
            }
        }
    }
    var_18 = (((max((min(var_8, var_4)), (!var_14))) >> (((((65535 ? 2666178638 : var_5))) - 2666178613))));
    #pragma endscop
}
