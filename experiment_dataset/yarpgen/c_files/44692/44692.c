/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((max(var_3, var_10))) ? (var_4 / var_9) : (min(((-4586887853137069994 ? 692503655400737000 : 1)), 1))));
    var_15 = (max(var_15, ((((942313585565322408 / var_0) >= (((max((!1), 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, 1));
                    var_17 = (max(var_17, (((!((((min(var_0, var_8))) && var_9)))))));
                    arr_9 [i_2] [i_1] = ((((((((-(arr_2 [16])))) ? ((var_5 ? var_11 : (arr_7 [i_0] [i_0 - 4] [i_0]))) : (~var_8)))) ? 110 : (arr_6 [i_0 - 2] [i_1 - 1])));
                    var_18 = (max((arr_7 [i_0] [i_1] [i_2]), (min(var_11, (arr_1 [i_0 + 3])))));
                }
            }
        }
    }
    var_19 = ((1 ? (((-1 ? var_13 : var_2))) : ((var_11 ? var_9 : (min(-4897450350502567050, 1))))));
    var_20 = var_13;
    #pragma endscop
}
