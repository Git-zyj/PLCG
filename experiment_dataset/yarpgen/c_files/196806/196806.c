/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((((((!(arr_2 [i_0])))) & (arr_3 [6]))) << (((((var_3 / var_9) + ((((arr_1 [i_0]) & (arr_1 [i_1])))))) - 654342165515829771))));
                arr_7 [i_0] [i_0] [i_1] = (arr_4 [0] [i_1] [0]);
                arr_8 [i_1] [i_1] = (((((arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]) > var_5)) ? (((((-1 ? (arr_3 [i_1]) : 10))) ? ((((arr_3 [i_1]) ? 1 : var_9))) : (min(13349737766085297895, 24)))) : var_4));
                arr_9 [i_1] [i_1 - 3] = (var_0 * ((((arr_4 [i_1] [i_1 - 1] [i_1]) <= (arr_5 [i_1] [i_1 - 1] [i_1])))));
            }
        }
    }
    var_12 = var_11;
    #pragma endscop
}
