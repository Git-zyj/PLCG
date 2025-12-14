/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = 18446744073709551615;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = (((arr_0 [i_0]) & (arr_3 [i_0] [i_0] [i_0])));
            arr_6 [i_0] = 128;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_22 = 11744761616121421780;
            var_23 = (min(var_23, (arr_3 [i_2] [i_0] [i_2])));
        }
        var_24 = ((((max((arr_8 [i_0] [i_0]), (arr_8 [i_0] [i_0])))) ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) : ((var_16 ? (arr_8 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_25 += (((((((arr_3 [22] [2] [22]) || (arr_8 [i_0] [i_0]))) || (!var_4))) ? (max((max(18013298997854208, 2108056529919121344)), (arr_2 [i_0]))) : 1));
        var_26 ^= ((((((var_3 ? 22219 : var_9)) / var_1)) / (max((arr_7 [i_0]), ((4 << (1392384774 - 1392384722)))))));
    }
    var_27 = var_15;
    #pragma endscop
}
