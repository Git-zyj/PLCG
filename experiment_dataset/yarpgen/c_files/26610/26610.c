/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_10 = (min(var_10, (((+(((-50 + 2147483647) >> (65535 - 65533))))))));
        var_11 = ((var_6 == (((((-15 ? var_3 : (arr_0 [i_0] [i_0])))) ? (min(var_8, var_5)) : ((min(63, (arr_1 [1] [i_0]))))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_12 = min((arr_3 [i_1] [3]), (arr_2 [i_1]));
        var_13 = (min(var_13, ((min(((~(min(var_2, (arr_3 [i_1] [i_1 + 1]))))), (((var_3 ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 2])))))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_7 [i_2] = ((((((var_5 ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2]))))) ? (((arr_6 [i_2]) - (min(0, var_4)))) : (((-(arr_6 [i_2]))))));
        var_14 = var_2;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_15 = ((((!(arr_10 [5] [i_4])))));
                    var_16 = (arr_1 [i_3] [i_5]);
                    arr_18 [i_3] [i_4] [i_4] [i_5] = (((((var_4 << (((min(422013267, 2300403256318876336)) - 422013262))))) ? ((-((((arr_13 [i_3] [i_3]) == var_5))))) : ((-(arr_0 [i_3] [i_3])))));
                    var_17 ^= ((var_7 ? ((((((arr_14 [6]) * -127))) ? (arr_12 [i_3] [i_4 - 1]) : ((-32028 ? -15 : 3)))) : (((!((min((arr_9 [i_3]), (arr_15 [i_4] [i_4] [i_3])))))))));
                }
            }
        }
    }
    #pragma endscop
}
