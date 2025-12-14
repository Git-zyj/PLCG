/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_11));
                arr_5 [i_0] [9] [i_0] = -69;
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [1] = (((((((min(var_5, var_19))) ? (arr_9 [i_2] [i_2]) : (arr_6 [i_2])))) + ((-((var_4 ? (arr_7 [i_2] [i_2]) : (arr_8 [i_2])))))));

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            var_21 = var_12;
            var_22 = (max(var_22, (((max(1731, ((16384 ? (arr_8 [i_2]) : 36337)))) | var_8))));
            var_23 += (arr_8 [1]);
            var_24 = (min(var_24, (((!(!0))))));
        }
    }
    var_25 = (((1667542358 ? 63 : 229)));
    var_26 = (!-10);
    #pragma endscop
}
