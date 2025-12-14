/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? (-7864437145458799962 % var_11) : var_7));
    var_14 = (min(var_14, 2817979797));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((((-(arr_3 [i_1] [i_0])))) ? (((arr_1 [i_1]) ? (arr_2 [i_0] [i_1] [i_0]) : var_2)) : ((((var_9 + 2147483647) >> (var_0 - 63726))))));
                var_16 = (min(var_16, (arr_3 [i_1] [i_1])));
                arr_4 [i_0] [i_1] = (max((!8), (((-32767 - 1) ? (arr_3 [i_1] [i_1]) : (((arr_2 [i_0] [i_1] [i_0]) ? 524287 : -1))))));
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
