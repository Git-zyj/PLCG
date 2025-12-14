/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (83 ? ((var_0 ? 3743285742870910992 : (((-4256027939975138489 ? 0 : 674720423))))) : (-9223372036854775807 - 1));
    var_18 = -0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((-11077 / -4256027939975138473) ? (((((~(arr_0 [i_0])))) ? (var_1 == var_14) : -4256027939975138469)) : 57644));
                var_19 = (arr_1 [i_0]);
            }
        }
    }
    var_20 = (!4256027939975138468);
    #pragma endscop
}
