/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 |= var_4;
    var_13 = ((9007199254740991 ? var_10 : -9007199254740972));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [8] = (((arr_0 [i_0]) != ((0 ? (arr_0 [i_0]) : 16))));
                arr_6 [3] [i_1] [3] = (((arr_1 [i_0] [i_1 - 1]) ? (max((arr_1 [i_1 - 1] [i_1 - 2]), -1610693335)) : (!536870911)));
                var_14 *= (((arr_2 [i_0] [i_1]) ? (max((min((arr_4 [i_1] [i_0] [i_0]), 0)), (((var_7 ? var_0 : 61970))))) : (min((min(var_4, 0)), (arr_1 [i_0] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
