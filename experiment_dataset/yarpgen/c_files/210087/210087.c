/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-14327 ? ((((!0) || (!61)))) : (!-14327));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 -= ((+((max(-1, (min((arr_0 [i_0] [i_1 - 1]), 14350)))))));
                var_14 -= ((!((max(0, (-2147483647 - 1))))));
            }
        }
    }
    #pragma endscop
}
