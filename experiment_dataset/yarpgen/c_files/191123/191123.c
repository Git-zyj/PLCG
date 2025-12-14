/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(((9291159334925273240 ? (1128391596 / 96) : (((-(arr_1 [i_0] [i_0])))))), (arr_1 [i_0 - 2] [i_0])));
        var_20 = (min(var_20, ((max((min((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0] [i_0]))), ((min((arr_1 [i_0 - 2] [i_0 + 2]), (arr_1 [i_0 - 2] [i_0 - 2])))))))));
        var_21 = (min(var_21, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_22 -= (arr_3 [i_1]);
        var_23 = min((((((0 ? (arr_2 [i_1] [5]) : (arr_3 [i_1])))) ? (arr_4 [i_1]) : (((arr_3 [i_1 + 1]) ^ (arr_2 [i_1] [i_1]))))), ((((min((arr_4 [1]), 1))) ? (arr_3 [i_1]) : (((arr_4 [i_1 + 2]) / (arr_3 [i_1]))))));
        var_24 = (min((((64 ? (((arr_4 [6]) & (arr_2 [i_1] [i_1 + 2]))) : (((arr_4 [i_1]) | (arr_2 [i_1] [i_1])))))), (max((arr_2 [i_1] [i_1 + 1]), (min((arr_2 [i_1] [i_1]), 9155584738784278380))))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_25 |= (((((~(arr_0 [i_2] [i_2])))) ^ (min(2953492538, 60))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_26 = (min((arr_9 [i_4]), (arr_6 [i_2 - 2])));
                        var_27 *= (((!(arr_9 [i_2 - 2]))));
                        var_28 += ((~(max((arr_2 [i_3] [i_3]), 7))));
                    }
                }
            }
        }
        var_29 = ((((max(-117, (arr_0 [i_2] [i_2])))) * 9291159334925273233));
        var_30 += (((-3053250783919041508 ? (((arr_4 [i_2]) | (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : ((((!(arr_14 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))))));
        arr_15 [i_2] = ((52489 ^ (min((arr_3 [i_2]), 104))));
    }
    var_31 = (((((4141496677 ^ (-27 | 0)))) ^ (8393 ^ 6529)));
    var_32 = (min(var_32, var_3));
    #pragma endscop
}
