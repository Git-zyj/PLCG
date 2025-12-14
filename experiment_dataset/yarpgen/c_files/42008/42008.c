/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((max((max(-62, var_8)), (var_1 > var_8)))))));
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((var_3 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((((72109344562197947 && (arr_0 [i_0 + 1]))) ? (var_5 || -72109344562197945) : (!var_10)));
                    var_16 = var_2;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (max(2136611710426127242, -72109344562197928))));
        var_18 = var_11;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_19 = 1;
        var_20 = ((8 ? ((((arr_13 [i_4]) ? var_3 : (arr_9 [i_4 - 1] [15] [i_4])))) : (((-5882162420551283035 + 9223372036854775807) >> (-839997838 + 839997851)))));
        var_21 = ((((~(arr_13 [i_4]))) >= (94 - 50623)));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_22 = ((72109344562197947 / (((69818988363776 ? (arr_10 [i_5] [i_5] [13]) : 1)))));
        var_23 = 1684873507;
    }
    var_24 = ((var_4 ? 805306368 : (((max((!var_4), -101))))));
    #pragma endscop
}
