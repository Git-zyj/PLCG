/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((max(-3, ((min(-31017, 127)))))), -2185887764481601570));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min((min(-31021, -18446744073709551609)), ((min(31046, 1)))));
        var_16 = (max(((((8165573740445710850 + (arr_1 [i_0]))) * (min((arr_0 [i_0] [i_0]), 7913164134459067064)))), (arr_0 [2] [3])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_17 = (arr_7 [i_3] [i_2] [i_1]);
                    arr_10 [i_1 - 3] [i_2] [i_2] = (+(min((arr_1 [i_1 - 2]), (((33 | (arr_8 [i_2] [i_2] [i_2])))))));
                    var_18 = ((~(~-1)));
                }
            }
        }
        var_19 = (min((max((min(17807, (arr_4 [i_1] [i_1]))), ((((arr_7 [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_6 [2]) : -31037))))), ((-(arr_4 [0] [i_1])))));
        var_20 = ((-(min((min((arr_5 [i_1] [i_1 + 1]), 9151314442816847872)), ((min(-11, -22658)))))));
    }

    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        arr_13 [i_4] [i_4 - 2] = (arr_11 [i_4 + 1]);
        arr_14 [i_4] [i_4 - 1] = (!(~1363061422));
    }
    #pragma endscop
}
