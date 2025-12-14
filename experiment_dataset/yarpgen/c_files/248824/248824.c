/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    var_15 += max((14053593762870606350 != var_8), (max(var_9, -24132)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 *= 206361664;
                var_17 = (max(var_17, (((((var_7 ? var_6 : 206361668)))))));
                var_18 += var_8;
                arr_5 [i_0] [i_0] = max((7054610473608282366 != 7810032509961759584), ((((var_5 ? -24132 : var_5)) | (var_10 ^ 4088605639))));
                arr_6 [i_0] [i_0] [i_0] = (((((var_5 ? var_13 : var_2))) ? var_3 : (((var_9 ? 4088605670 : var_6)))));
            }
        }
    }
    var_19 = (((min((2100591469 != var_3), (-7054610473608282346 != 16763420548442966905))) ? ((((min(var_12, var_3))) ? 21800 : var_3)) : ((((((var_5 ? var_3 : var_5))) != var_9)))));
    var_20 = (min(7054610473608282366, 2029735325));
    #pragma endscop
}
