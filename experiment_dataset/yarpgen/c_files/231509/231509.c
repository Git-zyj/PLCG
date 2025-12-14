/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(((-var_5 ? ((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) : var_5)), (104 == -6028583638470675651)));
                arr_5 [i_0] [i_0] [i_1] = 78;
            }
        }
    }
    var_14 = (min(-885785170, (max((min(9398295540838071980, 127)), 885785170))));
    var_15 = 13015751977845713223;
    #pragma endscop
}
