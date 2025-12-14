/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((min(var_7, var_10)) ? ((var_2 ? var_9 : 247)) : (min(var_5, var_4))))) ? (((((var_12 ? var_4 : 1))) ? ((var_6 ? var_9 : var_6)) : (((var_10 << (var_3 + 4144228255878790670)))))) : var_7));
    var_14 |= ((((min(var_6, 3644))) ? (((-((min(var_8, var_11)))))) : (min(var_10, var_0))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, (((-(arr_0 [i_0 - 3]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_16 = (var_3 != -257143029);
                    var_17 += (((((~(arr_1 [i_0 - 2])))) ? var_8 : (arr_7 [i_0] [i_2 + 1] [i_0 - 3])));
                    var_18 = (!var_10);
                    var_19 = ((42464 ? var_11 : (arr_2 [i_0 - 1] [i_1])));
                }
            }
        }
        var_20 = (!var_7);
        var_21 = (max(var_21, (!var_5)));
    }
    #pragma endscop
}
