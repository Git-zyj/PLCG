/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 18446744073709551597;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [7] = ((37205 ? (arr_0 [i_0 - 2]) : var_12));
        arr_3 [i_0] [8] = 9223372036854775807;
        var_19 = (~(arr_1 [i_0 - 2] [i_0 + 1]));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_2] [i_3] [i_2] [i_2] [i_1] = ((((min((arr_7 [i_4]), var_2))) && (((var_8 ? 40 : var_12)))));
                                var_20 -= ((((((((var_12 ? var_14 : var_12))) ? (((var_11 >> (var_0 - 4045617998)))) : ((14 ? -11721 : 26))))) ? -var_2 : (((((27432 ? var_7 : -66))) - ((var_2 ? var_4 : var_10))))));
                                arr_18 [0] [i_2] [i_2] [i_2] = (arr_10 [i_1 - 1]);
                                var_21 = ((-9223372036854775807 ? ((18446744073709551597 ? -105 : (-32767 - 1))) : (arr_10 [i_1 + 1])));
                            }
                        }
                    }
                    var_22 = ((((((arr_8 [i_2] [i_1 + 1]) ^ (arr_11 [i_2] [i_2] [i_2])))) ? ((var_1 ? var_4 : (arr_11 [i_2] [i_2] [7]))) : (((arr_8 [i_3 - 1] [i_1 - 1]) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_8 [i_2] [i_3])))));
                    arr_19 [i_1] [i_2] [1] |= var_11;
                }
            }
        }
        var_23 = (var_10 + var_14);
    }
    var_24 = (((((-1403225144 ? (max(var_12, 2856989111)) : (~var_8)))) ? var_14 : 9223372036854775807));
    var_25 = (((!(var_5 && var_11))));
    #pragma endscop
}
