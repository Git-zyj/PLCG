/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min((var_3 / -801683168), ((9223372036854775807 ? (-9223372036854775807 - 1) : -9223372036854775807)))) + 502927068));
    var_13 = (max(50942, 9223372036854775801));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (arr_0 [0])));
                arr_5 [i_0] [i_1] = ((10 ? 9223372036854775807 : 7772));
            }
        }
    }
    #pragma endscop
}
