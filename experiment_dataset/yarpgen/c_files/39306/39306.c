/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (186824315 || ((((var_1 && 4108142981) ? ((min(1, var_7))) : var_8))));
                    arr_7 [i_1] [i_1] [i_1] = ((((((1199120867 || 186824331) ? (var_15 > 919453449) : (min(3375513846, var_9))))) <= (min(var_16, var_10))));
                    var_18 = ((((var_9 >> (1199120840 - 1199120825))) << (var_4 - 267376803269300369)));
                }
            }
        }
        var_19 *= (((((var_12 ? var_16 : var_15))) ? (var_1 < var_12) : (!var_5)));
        var_20 = (((var_4 | -35) ? 3095846434 : (4108142981 - var_9)));
        var_21 = ((var_6 < (~var_11)));
    }
    var_22 = var_14;
    var_23 = 1199120844;

    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        arr_10 [i_3] = 9223371761976868864;
        var_24 -= (((46107 ^ 5) | (var_15 & 1)));
        var_25 = (1097752086 ? 68 : 58);
        var_26 = (max(25593, 197));
    }
    var_27 = var_0;
    #pragma endscop
}
