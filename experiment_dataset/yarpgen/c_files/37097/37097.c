/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = (((((((arr_0 [i_0]) <= (arr_0 [i_0]))))) > (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 ^= 1266546083;
                    arr_10 [2] [10] [i_2 - 1] [i_2 - 1] = (((2912618110 > 1662824163) | var_5));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (((var_4 ? var_1 : (arr_11 [i_0] [i_2 - 2] [i_0]))));
                        arr_13 [i_0] [i_1] [i_2 - 2] [i_3] = max((max((max(1570600577, 1620197681)), ((~(arr_1 [i_1]))))), (max((((arr_12 [i_0] [i_3]) & var_3)), var_9)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_15 = (min(var_15, (var_9 || 3850695253)));
                    arr_20 [i_5] [i_4] [i_4] = (((max(var_2, var_6))) - (((var_0 | 4294967295) ? -var_4 : (min(var_8, var_6)))));
                    arr_21 [i_5] [i_4] = min((min(((var_6 ? var_5 : var_3)), (var_10 % 607557396))), ((~(min(var_2, 3810021664)))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (max(var_16, (min(((min(0, 0))), ((-var_6 ^ ((var_3 ? 0 : var_6))))))));
                        arr_26 [i_5] [i_5] [i_5] = arr_7 [i_0] [i_0] [i_5] [i_6];
                    }
                    arr_27 [i_0] [i_4 + 1] [i_5] [i_4 + 1] = ((((arr_14 [i_4 + 1] [i_4 - 1] [i_4]) ? (arr_14 [i_4 + 1] [i_4 - 1] [i_5]) : (arr_14 [i_4 - 1] [i_4 + 1] [i_5]))) & (arr_23 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_5]));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = (1073741823 & (--2632143133));

        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_17 &= (~1382349185);
            arr_34 [i_7] [i_7] [i_8] = (arr_1 [i_8 + 1]);
            arr_35 [7] [i_7] [i_8 + 2] = ((((((var_1 ? 305837408 : (arr_7 [i_7] [4] [i_8 + 1] [i_8])))) ? ((-(arr_2 [i_7]))) : (!var_8))) * ((((max(419554112, 978198185))) ? (1662824163 > 385527513) : ((var_2 ? var_1 : (arr_5 [i_7] [i_8 + 1] [i_8 + 2]))))));
        }
    }
    #pragma endscop
}
