/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 |= ((!(((var_3 ? var_1 : (arr_0 [i_1]))))));
                var_19 = ((((var_13 >> (((arr_5 [i_0] [i_0] [i_0]) - 154426698)))) > 1654493826946455088));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 = (max(var_21, (((~(((32767 & var_5) - (((arr_0 [i_0]) / 610972483)))))))));
                                var_22 *= ((((((var_4 && var_7) ? var_17 : (arr_7 [i_4 - 2])))) ? (((!3683994808) >> (((min(var_2, (arr_4 [i_4] [i_4 - 2] [i_4]))) - 4008204681)))) : (((arr_14 [0] [i_2] [i_2] [i_2] [i_1] [i_0]) ^ ((max(var_15, var_3)))))));
                                var_23 |= (((((arr_10 [i_2] [i_1] [i_1] [i_2] [i_3] [i_0]) ? var_0 : var_1)) > (var_2 > 18446744073709551598)));
                                var_24 = ((((((var_4 ? 18446744073709551601 : 21)))) ? var_1 : var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((1654493826946455113 || 32764) ? var_11 : ((((var_10 || (var_3 ^ var_13)))))));
    #pragma endscop
}
