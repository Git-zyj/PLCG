/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((!1) ? (max(var_3, 2147483645)) : (max(2147483645, -2147483635))))) ? ((((var_4 ? 21131 : 17)) / -13)) : var_4));
    var_13 *= ((((max((((var_0 ? 1 : var_4))), 1))) ? (((max(-8367132081713046634, 1)) | var_3)) : ((min(var_0, 15903933855231330050)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max((arr_0 [i_1 + 2] [i_1 + 2]), 250));
                var_14 = (min(var_14, (arr_4 [10] [i_1 + 2] [i_1 + 2])));
                var_15 = (max((((!(arr_4 [i_0] [i_0] [i_0])))), (max(12924, (arr_0 [i_1 + 2] [i_1 + 1])))));
            }
        }
    }
    var_16 ^= ((var_9 ? ((8367132081713046657 ? 194 : var_5)) : var_3));
    #pragma endscop
}
