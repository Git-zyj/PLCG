/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((146 << (((arr_0 [i_0]) - 17571862098252162909))))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) * (arr_1 [i_0])))));
        var_11 = (arr_0 [6]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_10 [i_1] [i_2] [i_3] = max(((((arr_5 [i_2]) < (((8890132881459781411 ? 25579 : 11)))))), (((arr_5 [i_3 - 1]) ? (arr_4 [i_2 + 2] [i_1]) : (arr_4 [i_2 + 1] [11]))));
                arr_11 [3] [i_2] [3] = (((arr_3 [i_2]) / (arr_5 [i_2])));
                arr_12 [i_3] [i_2] [1] [i_1] = (((~(arr_4 [i_1] [i_2 - 1]))));
            }
            arr_13 [16] [i_2] [i_2] = (((((arr_5 [i_2 + 2]) ? (arr_5 [i_2 + 3]) : 1))) ? (((arr_7 [i_2 + 3] [i_2] [i_2] [0]) ? (((arr_7 [i_1] [1] [i_2] [i_1]) ? (arr_5 [i_2 + 1]) : var_0)) : var_2)) : (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2]));
            var_12 = (min(var_12, ((((((arr_3 [i_2 + 2]) ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 1]))) + (((!(arr_3 [i_2 - 1])))))))));
            arr_14 [i_1] [i_2 - 1] [i_2] = -13043;
        }
        arr_15 [i_1] = ((((((3584 / (arr_3 [i_1]))) * (arr_6 [i_1])))));
    }
    var_13 = (max(var_13, 3584));
    #pragma endscop
}
