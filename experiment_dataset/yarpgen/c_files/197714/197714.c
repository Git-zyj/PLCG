/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0] [8] [i_1] = (((arr_4 [i_1] [i_0] [i_0]) ? ((7 ? 4294967295 : (((25803 | (arr_4 [14] [i_1] [i_0])))))) : (((2097151 ? -2097166 : 1)))));
                var_16 = var_1;
            }
        }
    }
    var_17 = 55258;
    #pragma endscop
}
