/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((min(((~(-127 - 1))), 4529)));
    var_21 = (((((~((var_10 ? var_11 : var_0))))) ? ((((min(-31111, var_15))) ? ((var_4 ? var_6 : var_19)) : var_12)) : (min(((1025864856 ? 127 : (-32767 - 1))), ((min(1, 4529)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (-127 - 1)));
                arr_6 [14] [i_1 - 1] [i_1 - 1] = (min(((+(min((arr_0 [i_0]), 803397986)))), -12));
                var_23 = (min(var_23, ((((((-((3277703719 ? 1 : 0))))) ? ((((min((arr_5 [0] [i_0]), (arr_3 [i_0] [i_0])))) ? (min((arr_3 [i_1] [i_1 - 1]), (arr_0 [i_0]))) : 26)) : (((((0 ? (arr_3 [8] [i_1 + 1]) : (arr_4 [i_0])))) ? (min(-32, (arr_0 [i_0]))) : (arr_4 [i_1 - 1]))))))));
            }
        }
    }
    var_24 ^= (((!65535) ? var_17 : var_7));
    var_25 = (max(var_25, (((-20253 ? var_4 : (~-25304))))));
    #pragma endscop
}
