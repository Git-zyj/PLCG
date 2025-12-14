/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(2506609725, (((-((-(arr_0 [i_0]))))))));
                var_13 = 65535;
            }
        }
    }
    var_14 = ((3 ? var_4 : ((13042 ? (((67 ? 12444 : 1))) : var_4))));
    #pragma endscop
}
