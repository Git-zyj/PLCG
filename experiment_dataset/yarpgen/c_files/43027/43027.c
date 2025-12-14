/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 ^= ((+(min(1, (((arr_1 [i_2]) ? var_4 : (arr_3 [i_0] [i_1] [i_2])))))));
                    var_14 -= ((((((((1 ? -83093801 : -2013243290))) ? 64 : 784))) ? ((13 ? (~1) : ((max(65521, var_11))))) : var_12));
                    var_15 = ((-1 ? (((var_8 ? ((max(1, 39493))) : (!var_2)))) : (min((((2416446468 ? 1 : var_2))), (arr_5 [i_0 - 1])))));
                    arr_8 [i_2] [1] [i_1] [1] = ((max((~var_12), (!var_1))));
                }
            }
        }
    }
    var_16 = (max(var_16, (((((((((var_1 ? var_12 : var_4))) ? ((var_8 ? 1 : var_10)) : ((-51 ? -5673 : var_9))))) ? ((var_3 ? ((max(1, 40))) : 1581705163)) : (max(var_6, -var_3)))))));
    #pragma endscop
}
