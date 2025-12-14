/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max(((var_4 ? ((var_5 ? var_0 : -1074048438471063686)) : (~1074048438471063692))), (max(((max(-1, 0))), -4163782677457838102)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 *= (max((max(4294967274, 6748719767345681277)), (arr_0 [i_0])));
        var_18 = (max(var_18, (max(((min(-1074048438471063693, 5678008625528475487))), (max(10621006283516414253, 16))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] = (1661330922901104411 && 8950202514477491108);
                        var_19 = ((143557131820763782 ? ((max(2, -1074048438471063693))) : (max(((max(58691, 1))), 12768735448181076143))));
                        var_20 = (min(((min(1, 549290569156824490))), (min(16, (max(-143557131820763782, 4347456887134421150))))));
                    }
                }
            }
        }
        var_21 = (max((9223372036854775790 | -6), ((-19081 ? (arr_2 [i_1] [i_1]) : var_5))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_13 [i_1] [i_1] = (((((7825737790193137362 ? var_0 : -26466))) < ((-13934956749818942383 ? 8696134652440806489 : (((-(arr_3 [i_1]))))))));
            arr_14 [i_1] = (((var_2 && var_14) % (arr_1 [i_1])));
            var_22 -= max((arr_9 [i_5] [i_5] [i_5] [3] [i_1] [i_1]), (((((1 ? var_5 : 138))) | (((-127 - 1) ? 18446744073709551615 : 1)))));
            arr_15 [i_1] [i_1] [i_1] = var_5;
        }
        var_23 = 1074048438471063692;
    }
    #pragma endscop
}
