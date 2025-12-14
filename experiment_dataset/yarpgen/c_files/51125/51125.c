/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = ((((!(arr_6 [i_0]))) ? (arr_5 [i_0] [i_1] [i_0]) : ((min(-28, -1)))));
                    var_15 = (((arr_5 [i_2] [i_1] [i_0]) ? 8166436344307671709 : (((max((arr_5 [i_2] [i_1] [i_0]), (arr_5 [i_2] [i_2] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_0] = (max(((~(arr_4 [i_0]))), (var_2 == 32767)));
                    var_16 = ((+(((arr_3 [i_0] [i_0]) + (arr_3 [i_0] [i_0])))));
                    var_17 = ((-(((arr_6 [i_2]) - var_0))));
                }
            }
        }
    }
    #pragma endscop
}
