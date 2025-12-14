/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_1] [i_1 - 1]);
                arr_6 [8] = ((((((arr_4 [i_1 + 1] [i_1 + 1]) ? var_10 : (arr_4 [i_1 + 1] [i_1 + 1])))) >= (~144115188075855871)));
                arr_7 [12] [12] = ((-((((((~(arr_0 [4] [i_1])))) && (((arr_2 [i_0]) && (arr_0 [2] [i_1]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [14] = (min((((18302628885633695744 ? (!var_5) : (((!(arr_9 [19]))))))), (((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
        arr_11 [2] [16] = (((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_8 [i_2])))) + (((arr_9 [i_2]) ? (arr_8 [i_2]) : -var_5)));
    }
    #pragma endscop
}
