/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((max(48261, (arr_0 [i_0 + 1])))));
                arr_8 [i_0 + 1] [i_1] = 221;
            }
        }
    }
    var_17 = 4747;
    var_18 = var_6;
    var_19 = var_12;
    var_20 &= var_9;
    #pragma endscop
}
