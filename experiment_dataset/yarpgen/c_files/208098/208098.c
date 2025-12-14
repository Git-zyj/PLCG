/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (min(-732273143, (arr_0 [i_1 + 1])));
                arr_7 [i_1 + 1] [i_1 + 1] [i_1] = (-1647437656 >= 1);
                var_17 = (max(var_17, ((((((arr_3 [i_1 + 1] [i_1 + 1]) >= (arr_3 [i_1 + 1] [i_1 + 1]))) ? (((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 + 1]))) : 1311649758)))));
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
