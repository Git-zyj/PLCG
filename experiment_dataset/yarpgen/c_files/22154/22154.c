/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_3) ? -14275 : (((((var_5 ? 14268 : var_12))) | var_17))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((+((((max((arr_0 [i_1] [2]), (arr_1 [i_1])))) & (arr_0 [i_0] [i_1])))));
                var_20 = ((!(-14237 == 14274)));
            }
        }
    }
    var_21 = ((-4889945188428807000 ? var_8 : ((((max(1, var_7))) ? (max(-4889945188428807000, -14237)) : (var_2 - var_7)))));

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_22 = (max(var_22, -14275));
        var_23 = (max(11331, (max((arr_6 [i_2]), ((((arr_4 [i_2 + 1]) < var_6)))))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 -= var_11;
        arr_11 [i_3] = (((((~(arr_1 [i_3 + 1])))) ? (arr_1 [i_3 + 2]) : -6299));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = 14254;
        var_25 = ((22148 ? var_0 : ((1 ? ((-(arr_3 [i_4] [i_4]))) : (((arr_4 [19]) ? 14275 : -14275))))));
        arr_16 [i_4] [i_4] = (arr_10 [i_4]);
        arr_17 [i_4] = (-(max((arr_13 [i_4]), 4)));
    }
    var_26 = var_17;
    #pragma endscop
}
