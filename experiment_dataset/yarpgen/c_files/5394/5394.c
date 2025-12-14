/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((+(max((var_6 / 2147483647), ((min(40118, 254)))))));
                arr_4 [i_0] |= (var_7 % (((((max((-32767 - 1), 255))) - 4096))));
            }
        }
    }
    var_21 |= ((((((max(33030144, var_2)) << (!var_6)))) && ((((min(var_14, var_0)) + (((max(var_4, var_1)))))))));
    #pragma endscop
}
