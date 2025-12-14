/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_3 [i_1] [i_1] [i_0]);
                var_11 += -1;
                var_12 = (arr_1 [i_0]);
            }
        }
    }
    var_13 = (~var_2);
    var_14 |= (((max(var_6, (~var_1))) / (-32767 - 1)));
    var_15 += ((((1 > 1) + var_0)) + var_7);
    var_16 = (min(var_16, ((min(-6749, 150919844)))));
    #pragma endscop
}
