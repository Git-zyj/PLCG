/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((2340367847 != 3712313430) ? (max(1, var_7)) : (max(var_11, 582653838)))) == var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] |= (((((arr_2 [i_0 + 2] [i_1 - 2]) ? 3 : 15))) - (max(((-15 ? 1003823350 : (arr_4 [i_1 + 1] [i_0]))), 1)));
                arr_6 [i_1] [i_1] [1] = (max((max((arr_0 [i_1] [i_0]), (max(1, 888348599)))), (max(582653865, (arr_3 [i_0 + 2])))));
            }
        }
    }
    var_15 = (~14);
    var_16 = ((((max((max(1, var_5)), -0))) ? (3897460736 + 19) : var_4));
    #pragma endscop
}
