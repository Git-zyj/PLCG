/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((((134217664 ? var_1 : var_16))), (35184372088831 - var_7)))) ? (var_10 + -9223372036854775797) : (var_4 - var_12)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = ((((max(1, var_0))) ? 32760 : ((((min(3852254432, 32769)) == 1)))));
                        var_21 = (((-779814481 / 442712863) * 16592));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (((((1776825864 > var_11) - 1)) << (var_11 - 136)));
    }
    var_22 = (((((~(~var_4)))) ^ ((~(min(169, var_18))))));
    var_23 = ((((min(((210 ? 13363135632333337978 : var_2)), 118))) ? 65522 : ((min(32753, ((max(var_5, -120))))))));
    var_24 += var_12;
    #pragma endscop
}
