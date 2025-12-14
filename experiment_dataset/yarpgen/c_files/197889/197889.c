/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 -= min((max(-772374675877660933, (max((arr_0 [9] [i_0]), 34359738366)))), (((~((var_0 ? (arr_6 [4] [4] [i_1]) : var_6))))));
                        var_12 = ((((min((arr_1 [i_3 - 1] [i_2]), (~var_10)))) ? (((~((~(arr_1 [12] [10])))))) : ((var_9 ^ ((2305843009213693951 >> (-8547397705324873129 + 8547397705324873186)))))));
                    }
                }
            }
        }
        var_13 = (min(var_13, (~1096764489)));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            arr_12 [i_5] [i_5 + 1] = ((((max((arr_6 [i_5] [i_5 - 1] [i_5]), (arr_8 [i_4 - 1])))) ? (((arr_8 [i_4 - 1]) ? 3198202802 : (arr_8 [i_4 - 1]))) : ((max((arr_8 [i_4 + 1]), (arr_6 [i_5] [i_5 + 1] [i_5]))))));
            var_14 = ((!((!(arr_3 [i_4 + 1])))));
            var_15 -= (((0 ^ 32755) << (((((arr_6 [i_5] [i_5 - 1] [4]) + 76)) - 20))));
            var_16 = ((-((((arr_11 [7] [i_4]) ? var_4 : -8)))));
        }
        var_17 *= (min((max((arr_10 [i_4 + 1]), (max((arr_2 [i_4]), var_10)))), ((((max(var_10, (arr_9 [i_4]))))))));
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (arr_7 [16])));
        var_19 = ((32760 ? 1834807782092636047 : 1));
        var_20 = (max(((max(0, -118))), (min((arr_10 [i_6 + 1]), (((-2147483647 - 1) | 18446744073709551615))))));
    }
    var_21 = -44;
    #pragma endscop
}
