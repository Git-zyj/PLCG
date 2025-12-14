/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [5] [i_1] [i_1] = 12;
                var_17 = (min(var_17, ((((235 + 12) + (arr_2 [i_0 + 1]))))));
                arr_7 [i_0] [i_0] [i_1] |= ((246 ? 65535 : 32743));
            }
        }
    }
    #pragma endscop
}
