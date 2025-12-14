/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_0 [6])));
                arr_4 [i_0] = ((-(arr_0 [i_0])));
                var_13 = (min(var_13, var_4));
                var_14 = (max(var_14, (((~(~102))))));
            }
        }
    }
    var_15 = (max((~-var_11), var_11));
    var_16 = 6045;
    var_17 = ((-(((!(~1995812935))))));
    #pragma endscop
}
