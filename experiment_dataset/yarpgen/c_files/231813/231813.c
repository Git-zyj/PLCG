/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((var_2 ? 65093 : var_13))) ? (var_1 != 175672558) : (var_0 != var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_16 = (arr_4 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = ((~(arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 3])));
                        var_18 = ((!(((arr_9 [i_1] [i_1] [i_1]) && var_7))));
                        var_19 &= (((arr_0 [i_3]) | -25490));
                        var_20 = (min(var_20, (var_3 ^ var_13)));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_21 = ((arr_10 [i_0]) ? (arr_10 [i_0]) : var_9);
            var_22 = (!9878878020173862576);
        }
        var_23 |= (((arr_6 [i_0] [i_0] [i_0] [i_0]) == (arr_6 [i_0] [8] [i_0] [12])));
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_24 = (var_7 ? (min((max(10465364528546815826, 40)), ((var_7 ? -57 : var_7)))) : (((min((arr_4 [i_5]), var_0)))));
        var_25 ^= (max(-57, 16810851937358487373));
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        arr_20 [i_6] = (((!((min(var_5, var_4))))));
        arr_21 [i_6] = ((min(((var_6 ? var_3 : var_13)), ((min(32875, var_3))))));
    }
    var_26 = (min(var_10, ((((((32869 << (3031277769965870647 - 3031277769965870642)))) ? 65069 : (1 == 32869))))));
    #pragma endscop
}
