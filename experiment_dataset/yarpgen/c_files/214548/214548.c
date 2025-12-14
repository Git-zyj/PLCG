/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (0 ? ((((min(1, 0))) ? (!var_10) : -268435455)) : ((min((var_5 * var_4), (86346132 / var_16)))));
    var_19 = (((!(((var_13 ? var_5 : 0))))) ? ((((min(157, 255))) ? ((var_3 ? var_3 : var_13)) : (((31744 ? 86346110 : 1449576399))))) : ((((!((min(var_6, 32767))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((min(((var_10 - (arr_5 [i_0] [i_0]))), (arr_5 [i_0] [i_0]))))));
                arr_7 [i_0] [i_1] = ((arr_2 [i_0]) ^ ((((((var_12 ? 215 : (arr_3 [i_0])))) ? (~var_10) : ((~(arr_6 [i_1])))))));
            }
        }
    }
    var_21 += (215 ^ 15921);
    #pragma endscop
}
