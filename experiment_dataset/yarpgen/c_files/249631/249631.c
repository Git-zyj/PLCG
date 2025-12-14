/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_7 ? 2296853770 : var_4))) ? (((var_5 ? 9 : var_2))) : var_0))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (((((5 ? 223 : (arr_6 [i_0 + 1] [i_0] [i_0])))) ? ((((arr_7 [i_0] [i_0]) ? (arr_6 [3] [i_0] [i_0]) : 4294967287))) : -4885528450250862091));
                    var_15 = (arr_9 [i_0] [i_1 + 1] [i_1] [i_2]);
                }
            }
        }
        var_16 = (((arr_6 [i_0 + 3] [i_0] [8]) ? 4294967287 : var_7));
        arr_12 [i_0] = 4294967295;
        arr_13 [i_0] = (!4294967287);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_17 = (((arr_17 [i_3]) - (arr_17 [i_3])));
        var_18 = 1;
    }
    var_19 = var_6;
    var_20 = ((135 ? var_12 : ((var_8 ? 4294967290 : var_3))));
    #pragma endscop
}
