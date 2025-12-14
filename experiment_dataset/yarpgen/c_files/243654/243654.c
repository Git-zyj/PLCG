/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~(~var_4)))) ? (((((var_3 ? 84 : 6553514597807804830))) ? (((17 ? -679552978 : -8))) : (min(var_4, var_15)))) : (((((max(var_0, var_13))) ? var_16 : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((((-((-(arr_2 [i_0])))))) ? ((4047201109 - (arr_0 [i_1]))) : (var_16 - var_0)));
                arr_4 [i_0] [i_1] = var_7;
                var_19 = (min((((~(arr_0 [i_0])))), -var_0));
                arr_5 [i_0] [i_1] = ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? var_15 : (((arr_0 [i_0]) ? 3184 : ((1722409588 ? -2101929977237853737 : 1029985207))))));
                var_20 = ((-25331 ? (arr_3 [i_1]) : (~var_11)));
            }
        }
    }
    #pragma endscop
}
