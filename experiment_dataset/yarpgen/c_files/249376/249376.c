/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((max((arr_2 [i_0] [3] [i_0 + 3]), (((arr_2 [i_0] [i_1] [i_1]) ? 7696830168207681696 : var_6))))) ? ((var_13 ? var_2 : 4)) : ((1 ? 7696830168207681699 : -6269))));
                var_15 ^= (min((arr_1 [i_0 + 1] [i_0 - 1]), (var_5 - 147)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_16 *= (min((min((arr_1 [i_2] [i_2]), var_4)), (arr_1 [i_2] [i_2])));
        var_17 &= (~-3092504309);
    }
    var_18 *= -107;
    var_19 |= ((max(14186, 7696830168207681696)));
    var_20 = ((var_8 ? 0 : 3405013267));
    #pragma endscop
}
