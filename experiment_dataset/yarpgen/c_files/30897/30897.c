/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_1] = (14102862757674117564 / -964845810583795021);
                var_16 = ((((max(var_10, (arr_3 [i_0 - 1] [i_0])))) && ((min(-2105, (arr_2 [i_0]))))));
            }
        }
    }
    var_17 = ((209 << (((((-3332149028485707066 - -2096) + (var_6 | var_7))) - 3837092547908481178))));
    #pragma endscop
}
