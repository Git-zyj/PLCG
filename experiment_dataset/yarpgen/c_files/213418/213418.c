/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(~65535)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_0]);
                arr_5 [i_1] = (((117342677 & 117342683) ? (((!4177624612) >> (((arr_0 [i_0]) - 54)))) : (~2147483642)));
                var_16 = (min(var_16, ((((((117342688 ? 1655230714 : 231))) ? (((1 == ((max((arr_3 [i_0] [i_0] [i_0]), (arr_0 [10]))))))) : (1 <= 1))))));
                var_17 = (max(24, (((!(var_12 * 3364328143753076437))))));
            }
        }
    }
    var_18 = (((((!((max(var_5, var_7)))))) & 77));
    #pragma endscop
}
