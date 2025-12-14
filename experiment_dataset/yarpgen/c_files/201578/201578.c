/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [0] = (arr_1 [i_0]);
                    arr_8 [i_1] [i_1 + 1] [i_0] [i_1] = ((arr_4 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1]) ? (((arr_4 [i_1 - 1] [i_1 + 1] [i_2 - 1] [i_2 - 1]) % (arr_4 [i_1 + 1] [i_1 - 1] [i_2 - 1] [i_2 - 1]))) : (((arr_4 [i_1 + 1] [i_1 - 1] [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 - 1]))));
                    arr_9 [i_1] = ((~(((!(arr_0 [i_1 - 1]))))));
                    arr_10 [i_0] [i_1] [i_1] = (((-71 + var_14) - (((var_12 ? ((((arr_1 [i_0]) * (arr_4 [i_0] [i_0] [i_1 - 1] [i_2 + 1])))) : 358308506)))));
                }
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
