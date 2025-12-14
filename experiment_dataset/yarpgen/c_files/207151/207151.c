/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((18158513697557839872 ? 24180 : 3766814107))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max((((var_16 ? 31170 : -587600256))), ((2546569774 ? 25558 : var_8))))) ? var_14 : (((1 ? ((((arr_0 [i_0] [i_0]) > var_18))) : 78)))));
        arr_4 [i_0] = (min(((((-30367 ? 1 : (-2147483647 - 1))))), (~13141970093034952769)));
    }
    var_20 -= (max((~var_9), ((var_6 ? var_7 : (!4294967274)))));

    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_21 = (min(var_13, (arr_1 [i_1])));
        var_22 = (max(var_22, ((((max((arr_5 [i_1 - 1]), var_11))) ? 14869414488451917653 : ((((arr_5 [i_1 + 2]) ? (arr_5 [i_1 + 3]) : (arr_5 [i_1 + 1]))))))));
    }
    #pragma endscop
}
