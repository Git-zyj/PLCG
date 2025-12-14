/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(arr_0 [8] [i_0])));
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) << (((arr_0 [i_0] [i_0]) - 131)));
        arr_4 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : (((((1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? ((1 ? (arr_0 [i_0] [i_0]) : 1)) : (arr_1 [i_0])))));
    }
    var_10 = (min(1, 967112870));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] = (((((((1090082551605832722 ? (arr_6 [i_1]) : (arr_0 [i_1] [i_2]))) & 65529))) ? (arr_5 [i_1]) : (((arr_5 [i_2]) ? (arr_14 [i_1] [i_1] [i_1]) : (arr_14 [i_2] [i_2] [i_1])))));
                    var_11 = (arr_0 [1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
