/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max(((max(var_7, var_0))), var_6))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [4] |= (((-(arr_1 [i_0] [i_0]))));
        var_13 = (max((arr_2 [i_0] [i_0]), ((((!5455) | 30799)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(-30799, -255));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [0] |= (min(((var_11 ? (arr_12 [i_3 + 1] [i_4 + 1] [6]) : (arr_12 [i_3 - 1] [i_4 + 1] [8]))), (arr_12 [i_3 - 1] [i_4 - 3] [8])));
                        arr_16 [0] [i_2] [1] [i_2] = (min((min((max((arr_7 [i_2] [i_2 - 2]), var_7)), -18866)), ((min((arr_4 [i_1]), (min(var_4, var_1)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
