/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = ((((((!(arr_2 [i_1] [i_0]))) * (arr_0 [i_0 + 1])))));
                var_11 = (arr_4 [i_0]);
            }
        }
    }
    var_12 = (min(var_1, 180));
    #pragma endscop
}
