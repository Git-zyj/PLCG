/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((7981074575647628606 * (((max(124, var_3))))))) ? (~1073741824) : (min(var_3, (1329568190 % var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (6063961236303766785 & 14);
                var_13 = (min(var_13, (((-(arr_2 [i_0 - 1]))))));
            }
        }
    }
    var_14 = (min(-var_5, 2192720095));
    #pragma endscop
}
