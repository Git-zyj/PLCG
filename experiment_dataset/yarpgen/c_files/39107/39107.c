/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] [i_0] = var_4;
                arr_6 [i_0] = ((((((var_0 <= var_2) - (arr_4 [i_0] [i_0])))) ? ((min(((((arr_3 [i_0]) == var_1))), 21111))) : (max(21111, (~21111)))));
                var_10 = 121;
                arr_7 [i_0] [i_0] = (min((((2147483647 >> (2147483647 - 2147483635)))), var_8));
            }
        }
    }
    var_11 = var_3;
    #pragma endscop
}
