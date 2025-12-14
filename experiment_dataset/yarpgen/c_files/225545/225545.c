/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = -1;
    var_21 = ((0 ? 1 : 11));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_22 = (min(var_22, (((((max(var_10, var_6))) ? 1 : ((48 ? (!var_10) : ((93 ? var_17 : var_7)))))))));
        var_23 = (max(var_23, ((((var_10 / 1657233842) ? var_10 : ((min(1, -20606))))))));
        var_24 = (min(var_24, (((!var_12) ? (((((var_12 ? var_12 : var_16))) ? (var_4 & var_18) : var_16)) : (((var_7 ? ((var_15 ? 1 : 255)) : (!var_16))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_25 = (min(var_25, (((((var_1 ? 924281769 : (var_0 & var_10)))) > ((11 ? ((max(var_1, var_5))) : var_3))))));
                    var_26 = ((((max(var_15, (~var_14)))) | (max(3126703471, var_18))));
                }
            }
        }
        var_27 = (max((var_4 & var_1), var_4));
    }
    #pragma endscop
}
