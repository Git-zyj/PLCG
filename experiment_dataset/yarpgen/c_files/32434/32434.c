/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_1 + 1] = (((((((5733 ? 3445340702 : (-127 - 1))) <= var_7)))) & (max(var_3, (arr_5 [i_0]))));
                var_12 = ((((max(-6408, (arr_3 [i_1 - 1])))) ? (((~(arr_2 [i_0])))) : (arr_2 [i_1 - 1])));
            }
        }
    }
    var_13 = (min(var_13, ((((((1925891401 <= var_1) ? (min(var_4, var_3)) : var_6)) <= 81)))));
    #pragma endscop
}
