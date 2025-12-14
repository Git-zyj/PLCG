/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((((((-29 != ((-(arr_1 [i_0]))))))) & (!var_14)));
        var_17 ^= ((((~(~var_10))) & ((((426730426 ? var_14 : -1))))));
        arr_4 [i_0] = (~(((!17183) ? var_1 : ((var_0 ? var_0 : (arr_1 [i_0]))))));
        arr_5 [i_0] = ((-(((!((max(var_15, -2394187699016090338))))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = var_9;
        var_19 = (((((((arr_2 [i_1 - 1]) ? 174572425 : 31)) < 1073741823)) ? (((~(arr_1 [i_1 - 1])))) : (max((min(8191, 3988712640926277428)), 2147483647))));
    }
    var_20 = var_16;
    var_21 = (min(var_21, ((((((((var_3 ? var_14 : 921740546)) == (var_7 + 1430339064)))) | var_2)))));
    #pragma endscop
}
