/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 -= 65535;
                arr_6 [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_20 = ((0 ? 0 : (min(((var_17 ? var_8 : var_4)), var_14))));
    var_21 = (((min(var_15, var_16)) ^ 73));

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2 - 2] = var_17;
        var_22 = (arr_7 [i_2]);
    }

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_23 = ((((min((((arr_11 [i_3]) ? (arr_0 [i_3]) : var_6)), (min((arr_8 [1]), var_1))))) && (((var_12 ? ((((arr_12 [i_3 + 2]) || var_3))) : (arr_11 [i_3]))))));
        var_24 &= var_5;
        arr_13 [i_3] = (((~(min(var_0, (arr_8 [21]))))));
        var_25 |= (18127233717583307925 ? (max((((var_14 ? -15728 : (arr_4 [4])))), 4862843483037310763)) : var_17);
        arr_14 [i_3] = ((max(var_18, (arr_2 [1] [i_3]))));
    }
    #pragma endscop
}
