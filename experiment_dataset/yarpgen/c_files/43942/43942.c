/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((((min(-29358, 1))) + 2147483647)) >> ((((128 ? -6 : (min((-2147483647 - 1), 150)))) + 6))));
                var_12 = (max(var_12, ((~((((max(251, (arr_4 [i_0])))) * -128))))));
                var_13 = (((min((arr_4 [i_0 - 2]), 758652570)) << (!var_10)));
            }
        }
    }
    var_14 = ((((((min(var_2, 3))) ? var_4 : ((min(-128, 36241))))) == var_6));
    #pragma endscop
}
