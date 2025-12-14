/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_7, (((!(((var_5 >> (var_6 + 336637780)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((453093286 ? -771415292 : 132));
                var_12 ^= (((var_7 ? var_6 : var_6)));
                var_13 = ((((((var_6 && var_2) - (0 != -741395344)))) && (18446744073709551615 < 1065353216)));
                var_14 = (min(var_14, ((((((var_4 | (~var_8)))) ? (min(var_0, var_2)) : (((-(arr_3 [i_1] [i_0] [i_0])))))))));
            }
        }
    }
    var_15 = 13678118964685924916;
    var_16 = ((+((((~25390) > (var_9 == var_4))))));
    var_17 = (((!var_3) ? (~741395355) : (((var_3 / var_5) / ((var_2 ? var_5 : 478856162))))));
    #pragma endscop
}
