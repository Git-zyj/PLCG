/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((((max(203, (max(18446744073709551615, 18446744073709551615))))) ? 25416 : (arr_2 [i_0])));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = ((((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 2]) : (arr_1 [i_1 - 1] [i_1 + 1]))));
            arr_9 [i_0] [18] [i_0] = ((-((min((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 3]), (arr_1 [i_0] [i_0]))))));
            var_20 += ((~((~((max(-16807, (arr_0 [i_1]))))))));
            arr_10 [i_0] [i_1] [i_0] = (((((arr_0 [i_1 - 2]) <= (arr_1 [i_0] [i_0]))) ? (arr_6 [i_0] [i_0] [i_0]) : 1));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_14 [11] [i_2] = ((((((((arr_4 [23]) ? 15360 : 15360))) != (((arr_5 [i_0] [i_0] [i_2]) ? (arr_7 [i_2]) : (arr_4 [i_0]))))) ? (arr_12 [i_0] [i_0]) : (arr_5 [i_0] [i_2] [i_2])));
            var_21 = ((-(arr_13 [i_0] [i_0])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_22 = ((((-(arr_15 [i_0] [i_3] [i_3]))) - 0));
            arr_18 [i_0] [i_3] = ((~(arr_12 [i_0] [i_3])));
            var_23 |= (arr_17 [i_0] [i_3]);
        }
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        var_24 = (max((arr_15 [i_4] [i_4] [i_4 + 1]), (((arr_12 [i_4 - 3] [i_4 + 1]) ? (arr_12 [i_4 - 3] [i_4 - 1]) : 1))));
        arr_22 [i_4] [i_4 - 1] = ((((((arr_19 [i_4] [i_4 - 3]) ? (arr_7 [i_4 - 1]) : (((max((arr_2 [i_4 - 2]), 162))))))) ? (((arr_0 [17]) ? (arr_7 [i_4 - 1]) : 51103)) : (((((max(8182512955682751709, (arr_11 [i_4] [i_4])))) ? 14426 : (arr_21 [i_4 + 1]))))));
        arr_23 [2] [i_4] = ((((((arr_12 [i_4] [i_4 - 4]) % (arr_15 [i_4] [i_4] [i_4])))) ? ((+(((arr_20 [i_4] [i_4]) ? (arr_7 [i_4]) : (arr_13 [i_4] [i_4]))))) : ((max(-5835, (arr_7 [i_4]))))));
        var_25 += ((((((((arr_19 [i_4] [i_4]) ? (arr_15 [i_4] [i_4] [i_4 + 2]) : (arr_0 [i_4])))) ? (arr_0 [i_4 + 1]) : (arr_3 [i_4 - 3]))) >= (((((~51103) + 2147483647)) << (((((arr_20 [i_4] [i_4]) + 13473)) - 22))))));
    }
    var_26 = var_12;
    #pragma endscop
}
