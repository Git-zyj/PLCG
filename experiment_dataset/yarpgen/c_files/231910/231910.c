/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_7 != (min((min(var_7, var_3)), (var_14 && var_4)))));
    var_18 = (min(var_18, var_0));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 *= (((((!(var_14 || -565)))) ^ ((((!var_12) < (max((arr_2 [i_0]), (arr_0 [i_0]))))))));

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_20 = (max(((((arr_1 [i_1 - 1]) != var_4))), var_7));
            arr_6 [i_0] = (max((((!var_4) ? ((-(arr_5 [i_0]))) : (!-2688170841926166717))), 3967395732));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 += (arr_12 [i_0]);
                        arr_15 [i_0] [i_2] [1] [i_4] = ((-(arr_3 [i_0] [i_2])));
                        var_22 = (max(var_22, ((!(arr_5 [i_2])))));
                        arr_16 [i_0] [i_2] = ((((93 ? (arr_10 [i_0] [i_2] [i_0] [i_4]) : (min(var_3, var_15))))) ? ((~(arr_10 [i_3 - 4] [i_0] [i_0] [i_3 - 4]))) : var_1);
                    }
                }
            }
            arr_17 [i_0] = (-565 | var_6);
            var_23 &= ((var_13 > (((~(((!(arr_14 [i_2] [i_2] [i_2] [1] [i_0] [i_0])))))))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_24 = (min((arr_1 [i_0]), (max((arr_8 [i_0]), (((var_11 ? var_5 : var_8)))))));
            arr_21 [i_0] = min(var_7, (max(var_15, (arr_8 [i_0]))));
            var_25 = (min(var_25, ((((arr_11 [13] [i_5] [i_0] [i_0]) ? (max(-var_1, -1615966608)) : 1615966596)))));
            var_26 = ((~((var_3 ? ((-565 ? 9223372036854775807 : 3)) : (max(var_16, var_6))))));
            var_27 = var_13;
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_29 [i_6] [i_6] [i_7] = (min((((693074834 ? (((arr_11 [i_6] [i_6] [i_6] [i_7]) ? var_13 : (arr_0 [i_6]))) : var_16))), (min((max((arr_11 [i_7] [i_7] [i_7] [i_7]), var_4)), (var_2 && var_9)))));
            arr_30 [i_6] [i_6] = (((min(var_6, ((min(26825, var_15))))) | (((min(var_14, var_14))))));
            arr_31 [i_6] [i_7] [i_7] &= var_5;
            var_28 = (max((((min(0, 1174)))), (((arr_25 [i_6]) ? (arr_8 [i_7]) : -2688170841926166717))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_29 = ((((max(((-1030543332949624961 ? var_2 : (arr_0 [0]))), ((84 ? 64880 : var_0))))) / var_3));
            var_30 = (((((((~(arr_23 [i_6] [i_6])))) ? (arr_23 [i_6] [i_6]) : var_13))) || ((!((max(var_12, var_7))))));
            arr_34 [i_6] [i_8] = (((arr_19 [i_8]) ? ((((~(arr_4 [i_6] [i_6]))) | (var_2 >= var_0))) : ((var_5 ? ((((1 != (arr_14 [i_8] [6] [i_6] [i_6] [i_6] [i_6]))))) : (((arr_18 [i_6] [i_8]) - var_15))))));
        }
        arr_35 [i_6] = arr_24 [i_6];
        var_31 = (max(var_31, (((!((min((min(1030543332949624952, var_9)), ((var_8 ? var_10 : var_1))))))))));
        var_32 = ((((var_10 + 9223372036854775807) << (var_15 != -9038350020916328851))));
    }
    #pragma endscop
}
