/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min(var_19, (((arr_3 [i_0]) | var_16))));
                var_22 -= (!39344);
                var_23 -= var_4;
                var_24 -= 0;
            }
        }
    }
    var_25 -= (min(2584287836535308671, 0));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] = var_14;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_26 = (max(var_26, var_11));
                    var_27 -= (min(var_13, ((~((20490 ? (arr_5 [i_4]) : 292843257281437506))))));
                    var_28 -= (min(16, 77400730991783396));
                    var_29 -= (min((min(34146, 16777215)), var_7));
                }
            }
        }
        arr_15 [i_2] = var_16;
    }
    #pragma endscop
}
