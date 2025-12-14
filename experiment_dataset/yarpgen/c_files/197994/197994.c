/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = max(-38025691, (((0 - var_18) ? (arr_0 [i_0]) : -21)));
        var_20 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((max((arr_4 [i_1]), ((var_16 ? var_14 : var_7))))) ? (((arr_4 [i_1 - 2]) ? (arr_4 [i_1 - 2]) : 384410781)) : (arr_4 [i_1 + 1])));
        arr_6 [i_1] [i_1 + 1] = 65535;
        var_21 = (7 == ((((~var_14) ? ((-2139 ? var_14 : var_10)) : ((-8404290568582470497 ? var_18 : 65525))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = (((((((((arr_9 [13]) | (arr_1 [i_2] [i_2])))) ? (arr_0 [i_2]) : (arr_1 [11] [11])))) ? (((((3105070109 ? -1923250032 : 51968))) ? (min(var_4, (arr_3 [21] [21]))) : (((-38025701 | (arr_4 [i_2])))))) : ((2255169711 ? (arr_4 [i_2]) : var_4))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = (((((38025691 ? var_0 : var_14))) ^ ((((2593575985 < (arr_8 [14]))) ? var_2 : (~9223372036854775807)))));
                    arr_16 [13] [i_3] [i_4] [i_3] = ((((((241 ^ 4001452849) ? var_3 : (arr_1 [i_4 - 1] [i_4])))) && var_12));
                    arr_17 [i_2] [i_4] [i_2] = (365966235 * var_2);
                }
            }
        }
    }
    var_23 = ((var_13 ? (min(var_9, var_15)) : (-9223372036854775806 == 1915817469)));
    var_24 = (min(var_24, ((0 ? 4294967295 : -38025690))));
    var_25 = var_0;
    #pragma endscop
}
