/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199586
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
                var_18 = ((((max(var_1, (arr_0 [i_0])))) ? (min(var_0, (arr_2 [i_0] [i_0] [i_0]))) : -170662444));
                var_19 ^= ((38910 ? 15422291756463313671 : 14618570266902192214));
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
