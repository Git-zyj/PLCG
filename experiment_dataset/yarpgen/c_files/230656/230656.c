/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((((max(var_4, 38))) ? var_15 : (-9 - var_6)))) ? ((245 ? -var_11 : var_11)) : ((((((min(var_16, var_2))) == ((var_3 ? 107813991 : var_0)))))));
    var_20 = var_1;
    var_21 = var_12;
    var_22 = ((!(((~(!2300893030))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 *= (min((arr_2 [i_0]), (max((var_11 / 12799), 52736))));
                arr_7 [i_1] [i_1] [i_0] = ((((max(var_4, (arr_5 [i_1] [i_1] [i_1])))) ? var_12 : 12799));
            }
        }
    }
    #pragma endscop
}
