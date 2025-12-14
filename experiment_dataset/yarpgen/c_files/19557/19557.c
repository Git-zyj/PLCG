/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (~18);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((var_4 % ((((arr_4 [i_1] [i_1 - 3] [i_1 + 1]) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 3]) : (arr_0 [i_1 - 2] [i_1 - 2]))))));
                var_12 -= ((((min((min((arr_1 [i_0]), (arr_2 [i_0] [9] [i_0]))), (arr_0 [i_1] [i_0 - 2])))) ? (129 != -1083716319) : var_4));
            }
        }
    }
    #pragma endscop
}
