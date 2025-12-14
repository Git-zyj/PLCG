/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((var_4 - ((min(((min(var_9, var_1))), (max(var_10, var_10)))))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 ^= var_10;
        arr_2 [i_0] = ((-((((arr_0 [i_0 - 1] [i_0 - 1]) == (arr_0 [i_0 - 1] [i_0 - 1]))))));
        var_13 |= max((((var_5 ^ (((!(arr_0 [i_0 - 1] [i_0]))))))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 - 1]))));
        var_14 *= (-((-(arr_0 [i_0] [i_0 - 1]))));
        var_15 &= min(((max((arr_0 [7] [2]), var_1))), (min((min((arr_1 [i_0]), var_6)), (((arr_1 [1]) ? (arr_0 [i_0] [1]) : (arr_1 [10]))))));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = arr_1 [i_1];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_16 = max(((~((~(arr_3 [i_3] [i_1]))))), (((((~(arr_7 [3])))) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (5533756347656693115 ^ 2614479198159878293))));
                    var_17 = (max(var_17, ((min((min((arr_6 [i_1]), ((~(arr_1 [i_1]))))), (arr_1 [i_1]))))));
                    var_18 = ((!(arr_7 [i_2])));
                    arr_12 [i_1] [i_2] |= (max(((min(-var_2, var_9))), (min(((~(arr_9 [i_1] [i_2] [i_3] [i_2]))), (arr_4 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
