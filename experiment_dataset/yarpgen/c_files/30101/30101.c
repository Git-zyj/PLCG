/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 *= (((((3396268448 ? 1762675209 : 2532292063))) ? (((arr_1 [i_0 - 1] [i_0 + 1]) | (((!(arr_2 [2] [14])))))) : (((arr_3 [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1] [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1] [i_1 - 1] [i_1 - 1])))));
                    var_12 = (min(var_12, ((((arr_6 [5] [i_1 - 1] [i_1 - 1] [8]) ? ((1762675209 ? 4275285735 : 10)) : (((+((((arr_2 [i_0 - 1] [i_0]) < 10)))))))))));
                }
            }
        }
    }
    #pragma endscop
}
