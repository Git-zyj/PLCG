/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = arr_0 [i_0] [i_0];

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 ^= (!14);
                    var_19 = ((~((((((arr_0 [i_1] [i_1]) ? 23823 : var_13))) ? var_0 : ((var_7 ? (arr_3 [i_2]) : 3884820065))))));
                    var_20 += var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_21 = ((-((max(-39, -23833)))));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_14 [i_3] [12] [i_3] = ((((((max(166, 0))) ? var_0 : var_1)) >> (((arr_3 [17]) + 22430))));
                    var_22 += var_16;
                    arr_15 [i_3] [i_4] [i_4] = (((~var_15) ? (27603 | var_13) : ((18 ? 53 : 205))));
                }
                var_23 = var_17;
            }
        }
    }
    #pragma endscop
}
