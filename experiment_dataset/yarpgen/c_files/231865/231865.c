/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((5734828593816686347 ? ((min(var_5, ((min(var_6, 1148658039)))))) : (((var_8 ? var_4 : 9223372036854775783)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 += (min((((arr_4 [i_1]) ^ -98)), (arr_4 [i_1])));
                var_16 -= (min((((var_1 ? 65535 : ((var_5 ? var_9 : var_11))))), ((((((var_13 + 2147483647) << (12711915479892865280 - 12711915479892865280)))) ? ((max(77, (arr_3 [i_1])))) : (arr_2 [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_1 + 1] [i_2 + 2] [i_3 + 2] [i_0] = 9223372036854775783;
                                var_17 ^= ((var_2 & (((((-98 ? 789044316 : var_4))) ? (5734828593816686347 & var_13) : (((-9223372036854775807 - 1) ? -1 : 5734828593816686335))))));
                                var_18 = (max(((max(((var_7 ? var_1 : (arr_11 [i_0] [13] [5]))), (max(9, (arr_9 [i_1] [2] [i_2 + 3] [2] [i_4] [i_3])))))), 18081864804781789350));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = (arr_13 [i_5]);
        var_20 = ((var_7 && ((((arr_16 [i_5] [i_5]) ? var_10 : ((-22915 ? 7 : 4294967295)))))));
    }
    #pragma endscop
}
