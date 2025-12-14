/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_1] [22] = ((+((max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1]))))));
                    var_10 += (max((arr_0 [10]), ((~(arr_0 [i_0 - 1])))));
                    arr_10 [i_1] [i_1] = var_3;
                }
            }
        }
    }
    var_11 = (max(var_8, ((((!var_4) ? (max(var_7, var_2)) : var_5)))));
    var_12 = (((((~var_4) ? (max(0, 39)) : (min(25, var_8)))) != (~-1)));
    #pragma endscop
}
