/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((((~var_2) && var_2)) ? (((((min(var_13, 5682876477740139644))) ? ((min(254, var_5))) : 19216))) : var_11)))));
    var_15 = (max(var_15, (((1822334813 ? (!12763867595969411963) : -18446744073709551615)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (max((min(var_13, ((var_7 ? var_12 : 5682876477740139644)))), (((max(var_1, var_11))))));
                var_17 *= (((((~((max(var_12, 0)))))) ? (((-var_1 ? (!var_4) : ((max(var_8, var_2)))))) : ((1 ? var_1 : 12))));
                var_18 = ((((min(var_12, 3939040829528196602))) ? (min(var_4, var_12)) : ((min(229, var_8)))));
                arr_5 [i_0 + 2] = (min((min(var_8, 133693440)), ((min(var_7, var_2)))));
            }
        }
    }
    #pragma endscop
}
