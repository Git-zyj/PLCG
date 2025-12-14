/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 167;
    var_16 = ((var_2 ? (((var_3 && -1) ? 25 : (-32767 - 1))) : (var_13 < var_10)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 += (min((arr_3 [i_0]), 31697));
                arr_4 [i_0] = -15405;
            }
        }
    }
    var_18 = 8;
    #pragma endscop
}
