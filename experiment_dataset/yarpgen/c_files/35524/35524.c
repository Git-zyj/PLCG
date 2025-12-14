/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [1] &= (max((max(((1 ? (arr_5 [i_1] [i_1] [i_1]) : 1)), var_4)), (arr_8 [i_0] [1])));
                    var_15 &= (min(-var_4, (((((max((arr_1 [i_0] [i_2]), (arr_8 [i_1] [16])))) ? ((5264132233515897045 ? (arr_2 [2]) : (arr_3 [i_2]))) : (arr_5 [i_2] [i_0] [i_2]))))));
                    var_16 += 75;
                }
            }
        }
        var_17 |= 2098794790;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] [i_3] &= 0;
        var_18 *= (max(-5264132233515897038, (max((-77 - -77), 0))));
        var_19 = (((((!(((75 >> (76 - 52))))))) << ((((((min(-3673444763214781108, -1))) ? 84 : 1)) - 75))));
        arr_13 [i_3] [i_3] |= (arr_1 [i_3] [i_3]);
        var_20 += ((-78 ? ((max(577601292, (arr_1 [i_3] [i_3])))) : (((((arr_3 [i_3]) && (!-4205227064780262306)))))));
    }
    var_21 &= ((((((-57 ? 0 : var_8)))) ? -29 : ((~((0 ? var_13 : 1020))))));
    #pragma endscop
}
