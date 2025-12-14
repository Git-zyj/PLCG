/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((((10344174095061122958 ? 0 : 8102569978648428657))) ? (((((~(arr_1 [i_1])))))) : (((arr_3 [i_1 + 1]) ? ((var_4 ? var_15 : (arr_1 [14]))) : (((min((arr_2 [i_0] [i_1 + 1]), var_1))))))));
                var_17 = ((((max((min(8102569978648428666, 255)), (arr_2 [i_0] [i_1 - 1])))) ? (min((~1517591448), 8102569978648428657)) : ((((((arr_0 [i_0]) ? 1 : (arr_2 [i_0] [i_1])))) ? (min(57, 16608171754928023346)) : (arr_0 [i_1 - 1])))));
                var_18 = (((((((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : var_8))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (min(8102569978648428657, ((-1 ? 8010665155272638488 : 61203)))) : (~var_11)));
            }
        }
    }
    var_19 = (((((~(~var_5)))) ? var_11 : var_13));
    var_20 = var_14;
    var_21 = (((-14 ? 250 : 10436078918436913105)));
    var_22 += (max(((((~50378) && ((max(7, var_12)))))), ((4294967281 ? -var_2 : (var_1 * var_5)))));
    #pragma endscop
}
