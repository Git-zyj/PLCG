/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (~22203)));
                var_19 = (((((arr_1 [i_0] [13]) ? var_3 : (arr_2 [i_0]))) >> (((arr_1 [i_0] [i_1]) - 48))));
                arr_4 [i_0] [i_1] [i_1] = (((((arr_2 [i_0]) ? var_10 : (arr_2 [i_0]))) == -1460384375));
                var_20 = (1460384363 >= 8609);
            }
        }
    }
    var_21 = ((((max(var_9, 8430835891392641549) & var_17))));
    #pragma endscop
}
