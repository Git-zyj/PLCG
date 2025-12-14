/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!(!var_12))) ? (((!(var_1 && var_12)))) : (!var_1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 *= (((var_7 != var_8) && (((var_0 ? var_2 : var_4)))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_15 = min((((var_1 != ((var_10 ? var_12 : var_2))))), -var_3);
            var_16 *= (min((((var_7 || var_2) % (~var_4))), (((~var_3) ? (max(var_3, var_6)) : var_9))));
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_11 [i_4] [i_0] = (min((~var_7), (((var_12 && var_11) ? ((min(255, 111))) : (~var_5)))));
                        var_17 += var_0;
                        arr_12 [i_0] [10] [10] [i_0] [i_0] = ((((((min(var_6, var_4))) || (((var_9 ? var_12 : var_8))))) ? (((var_12 || var_9) ? ((var_7 ? var_12 : var_11)) : ((127 ? 111 : -112)))) : ((~(var_4 >= var_2)))));
                    }
                }
            }
            arr_13 [6] |= (min(-var_4, (max((4294967295 | 10), (var_6 - var_5)))));
            var_18 ^= ((((((var_7 ? var_12 : var_10)))) ? ((max(var_8, (!var_6)))) : (((~var_12) ? (!var_11) : -var_4))));
        }
        arr_14 [i_0] = (!100);
        arr_15 [0] &= ((2047 ? 607496201 : 106));
    }
    #pragma endscop
}
