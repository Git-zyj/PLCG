/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = min(18446744073709551615, (((4791524143792832173 - 55834) ? (min(-18848, 13655219929916719426)) : -27)));
                var_10 = 0;
            }
        }
    }
    var_11 = 9697;
    #pragma endscop
}
