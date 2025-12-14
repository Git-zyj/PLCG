/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((~(arr_0 [i_0] [i_1 + 1]))) + 2147483647)) << (-var_1 - 2))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_15 = ((156 % (((arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_8 [i_1 + 1] [i_1 + 2] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 - 1])))));
                        arr_10 [i_0] [i_0] [10] [i_1] = ((~(((((arr_9 [i_3] [i_2] [i_0] [i_0]) / (arr_2 [i_0] [i_1]))) / var_6))));
                        arr_11 [i_0] [i_1] [i_1] = ((!((min((((var_4 ? (arr_8 [i_3] [i_3] [i_3]) : (arr_9 [i_0] [i_1] [i_0] [1])))), (min(var_9, var_9)))))));
                        arr_12 [1] [22] [i_1] [i_1] [i_2] = ((((min(((((arr_5 [2] [i_2] [i_3]) ? -7282 : -7282))), (~17822962783184643073)))) ? -7282 : -7282));
                        var_16 -= ((max(var_8, var_10)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [16] [i_1] [i_4] = ((((arr_13 [i_0] [i_1] [i_1] [i_2] [i_1]) == var_0)) ? ((var_3 / (var_10 * 14))) : 1483983603);
                        var_17 = (max(var_17, (((((((arr_9 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 - 1]) >> (var_3 - 44679)))) ? (((-(min(var_7, var_12))))) : (min((((var_8 ? (arr_5 [i_0] [i_0] [1]) : (arr_13 [i_0] [24] [i_2] [i_4] [12])))), -1483983603)))))));
                        var_18 = (((arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) ? (min(12924, (arr_13 [i_0] [i_0] [20] [i_2] [i_1]))) : ((15511 ? 1 : 2044))));
                        arr_16 [i_0] [i_0] [10] [0] |= ((+((((((arr_2 [i_0] [2]) ? (arr_6 [14] [14]) : var_9))) ? ((12924 ? (arr_5 [i_4] [i_2] [i_0]) : -23)) : (arr_7 [i_1 + 3] [i_1 + 3] [i_2] [i_4])))));
                    }
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (!var_13);
    var_21 = (max(var_21, var_5));
    #pragma endscop
}
