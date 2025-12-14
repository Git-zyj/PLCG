/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (~-1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, ((max(((82 ? (((-(arr_0 [i_0] [i_0])))) : (max(var_4, var_5)))), 173892847064276944)))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((!(arr_7 [i_0] [i_1] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = 2544437910807771131;
                                var_22 = (1 < 1);
                            }
                        }
                    }
                    var_23 += ((9153457989526994027 + (min((~9153457989526994027), (arr_5 [i_0] [i_1] [i_2] [i_0])))));
                    var_24 -= (((arr_9 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2]) ? (-127 - 1) : (var_12 <= 4983258952911790643)));
                }
            }
        }
        var_25 &= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_26 = ((-11 ? ((max(var_3, (0 && var_4)))) : ((((((-2699750435522452187 ? var_6 : 1))) && var_7)))));
    var_27 |= (min((((((0 ? -1 : var_13))) ? (((var_17 ? 128 : var_7))) : -var_2)), ((var_9 ? (min((-127 - 1), (-9223372036854775807 - 1))) : 12))));
    #pragma endscop
}
