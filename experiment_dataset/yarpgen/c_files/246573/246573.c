/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (arr_4 [1] [i_1]);
                arr_7 [i_1] [i_1] [i_0] |= ((((((((arr_0 [18]) || (arr_4 [6] [i_1]))) ? ((((arr_1 [i_0]) || (arr_5 [i_0] [i_0] [i_1])))) : (!157)))) ? (((((arr_3 [7]) && (arr_0 [i_0]))) ? ((((!(arr_3 [i_0]))))) : (((arr_1 [i_0 - 4]) ? (arr_5 [6] [i_1] [i_1]) : (arr_5 [i_0] [10] [i_0]))))) : (((((arr_5 [16] [16] [4]) ? (arr_4 [i_1] [i_0]) : (arr_3 [20])))))));
            }
        }
    }
    #pragma endscop
}
