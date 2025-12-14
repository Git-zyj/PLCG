/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_0 != (min(var_6, var_8)))))) >= (((~var_1) & (-9223372036854775807 - 1)))));
    var_14 = var_2;
    var_15 = (min((min(1627, 18446744073709551611)), (((var_10 | (!var_0))))));
    var_16 *= var_3;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = (min(var_17, (arr_0 [i_0 + 3])));
            arr_4 [i_1] [i_0] = (((max(((((arr_3 [i_1] [i_0 - 3]) || (arr_2 [i_0] [i_1] [i_1])))), (((arr_1 [i_0] [i_1]) ? var_12 : (arr_3 [16] [16]))))) >= (((((arr_3 [i_0] [i_0]) ? var_10 : 1627))))));
            var_18 &= (min((arr_2 [i_0 + 3] [i_0 + 3] [i_0 - 4]), ((-(arr_0 [i_0 + 3])))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4 - 1] = (max((arr_11 [20] [17] [20] [20] [20]), (((min((arr_13 [i_0 + 1] [i_2] [i_3] [i_3]), (arr_2 [21] [21] [i_4]))) & -3522417331173332239))));
                        arr_15 [i_0] [i_0 + 2] [20] [i_2] [i_3] [i_4 - 2] = (max((max((arr_8 [i_3] [i_2 + 2] [i_3]), ((((arr_12 [i_4] [i_2] [i_0] [i_0]) ? (arr_2 [i_0] [i_3] [i_4 - 3]) : var_12))))), (((var_0 > (arr_6 [i_2 - 1] [i_3 - 1] [i_4 - 3]))))));
                        arr_16 [i_2] [i_2] [i_2 + 2] [i_2] = (((!(arr_8 [i_0 - 3] [i_0 - 1] [i_0 - 1]))) ? (min(220, (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (!4));
                    }
                }
            }
            arr_17 [i_0 + 3] [i_0 - 2] [i_0] = (min(((~(max((arr_3 [i_0] [i_2]), (arr_0 [i_0]))))), 16427));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_19 = (max(var_19, (((!(((42105 ? 1529796353 : (arr_19 [i_0])))))))));
            var_20 = ((-(((arr_20 [i_5]) ? (arr_3 [i_0] [i_0]) : (arr_8 [4] [9] [i_0])))));
            arr_21 [i_0] [2] [i_5 - 3] = (((arr_1 [i_5 + 1] [i_0 - 3]) / ((~(arr_2 [i_0] [i_0] [i_0])))));
            var_21 = arr_19 [i_5 + 1];
        }
        var_22 *= ((((!var_0) || (!var_4))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_26 [i_6] = (2359635003 || 2);
        arr_27 [i_6] = max(23431, 106);
    }
    #pragma endscop
}
