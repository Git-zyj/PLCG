/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 2999451590));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = var_6;
                    var_16 = var_4;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_17 += var_11;
        arr_11 [i_3] = ((((((26069 == -8414497179797741774) ? -4266 : (min(3961661834, 42609))))) ? (min(var_11, (arr_8 [i_3]))) : var_4));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_15 [15] [15] |= ((-127 - 1) > ((438375751726934723 ? var_10 : 1194422583)));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_18 = var_10;
            arr_18 [i_5] [i_4] [i_5] = var_2;
        }
    }
    var_19 = var_6;
    #pragma endscop
}
