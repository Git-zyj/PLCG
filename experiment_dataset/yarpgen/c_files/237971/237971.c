/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~113);
    var_17 = ((7680 ? var_11 : ((-((255 ? var_14 : var_12))))));
    var_18 = (min(var_18, ((((((255 != ((63324 ? 1 : var_6))))) | 5564)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [5] [i_1] [i_0 - 3] = (min(var_3, 1));
                arr_5 [i_0] = ((((((arr_0 [i_0 - 1]) ? (((arr_0 [1]) % var_2)) : (((-9615 & (arr_0 [i_0]))))))) ? ((-(((arr_2 [i_0] [i_1] [i_1]) ? -58 : (arr_1 [i_0 + 1]))))) : var_4));
            }
        }
    }
    #pragma endscop
}
