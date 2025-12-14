/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((max((((arr_5 [i_0] [i_2 - 2] [i_2 + 2]) ? 1 : -3489725564435361474)), (arr_5 [i_0] [i_2 + 1] [i_2 + 1]))))));
                    arr_10 [5] [i_2] = (max(((max(66, -36))), ((((var_5 ^ (arr_0 [i_0]))) + (arr_6 [i_2 + 1])))));
                    var_13 = var_8;

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_14 = (2913963559903140226 == (((((var_3 ? var_0 : 66))) ? (arr_9 [i_0] [i_2] [i_3]) : (arr_12 [i_2 - 1] [i_1] [i_2] [i_3 + 1] [i_3 - 1]))));
                        arr_13 [i_0] [i_1] [i_3] = ((((var_4 ? 6211590326554488163 : (arr_12 [i_0] [i_2 - 1] [i_2 - 3] [i_2] [i_3 - 1]))) / (((min((arr_9 [i_0] [i_0] [i_3 + 2]), -11534))))));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_15 = (max(var_15, (((!(((((max((arr_5 [i_1] [i_1] [i_1]), (arr_15 [i_0])))) ^ ((~(arr_7 [i_1] [10] [i_1])))))))))));
                        arr_18 [i_0] [i_0] [i_2] &= ((!(((arr_7 [i_2] [i_2 - 3] [i_2 - 3]) == (var_2 == var_10)))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_27 [i_5] = (min(((((arr_3 [i_5] [i_5]) || (arr_20 [i_5])))), ((-(!9)))));
                    var_16 &= (min(-var_5, (((arr_0 [i_5]) ? (arr_3 [i_5] [i_6]) : (arr_3 [i_5] [i_6])))));
                    var_17 = (arr_17 [i_5] [i_5] [i_7] [i_6]);
                    var_18 = (max(var_18, (((!(!82))))));
                }
            }
        }
    }
    #pragma endscop
}
