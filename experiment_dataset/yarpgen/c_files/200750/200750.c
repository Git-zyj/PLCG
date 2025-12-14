/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max((max(var_1, -18)), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = -45;
                arr_6 [i_0] = arr_5 [i_0] [i_0];
                var_13 = ((((!(((var_8 ? (arr_4 [i_0] [i_1 - 2]) : var_7))))) ? ((-(arr_0 [i_0] [i_0]))) : (((var_9 != (arr_4 [i_0] [i_0]))))));
                var_14 = ((min((arr_0 [i_0] [i_1]), (min(1077907958, 3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = (arr_5 [i_2 - 1] [i_2 - 1]);
                var_16 |= arr_4 [6] [i_2 - 1];
            }
        }
    }
    #pragma endscop
}
