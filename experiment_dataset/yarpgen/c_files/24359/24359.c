/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? ((((((30 ? var_3 : var_6))) ? ((-6642656762727207640 ? 92 : 1924720860)) : 1))) : ((var_8 ? var_1 : ((min(-16796, var_0)))))));
    var_12 = ((~((var_3 ? (!-86) : ((0 ? var_1 : 4294967286))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((((min(var_0, (arr_5 [i_1] [i_0] [i_0])))) ? -3 : -65));
                arr_7 [i_0] [i_1] [i_1] = var_0;
                var_13 += (((((~(((arr_0 [i_0]) / 16793))))) ? -88 : 688987998));
                arr_8 [i_1] |= (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
