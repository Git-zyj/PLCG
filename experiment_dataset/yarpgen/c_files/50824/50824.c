/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((arr_0 [i_0 - 2]), (var_4 || -88)));
                var_20 = ((~(max((arr_3 [i_0 - 1]), (arr_3 [i_0 + 2])))));
                var_21 = (max(var_21, ((((!var_13) != (arr_3 [i_0 - 1]))))));
                var_22 = 18315049583912213185;
                var_23 &= (arr_0 [i_0 - 1]);
            }
        }
    }
    var_24 = ((-356665113640991140 * (!var_16)));
    #pragma endscop
}
