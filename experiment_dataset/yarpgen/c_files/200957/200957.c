/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [10] [i_1] [i_2] = (min(((min((arr_4 [i_0]), (max((-127 - 1), 127))))), (min(18446744073709551615, 33))));
                    var_11 = (max((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))), (max((arr_0 [i_0 - 3]), (arr_6 [i_0 - 1] [6] [i_0 - 1] [i_0])))));
                    var_12 = (((arr_4 [i_0]) && (arr_4 [9])));
                    arr_9 [i_0] [i_2] = (max((min((arr_7 [5] [5] [0] [i_2]), (arr_5 [i_0 - 1] [i_0 + 1]))), (((max((arr_7 [i_2] [2] [2] [2]), (arr_4 [8]))) + (arr_3 [i_1] [1])))));
                }
            }
        }
    }
    var_13 |= var_7;
    #pragma endscop
}
