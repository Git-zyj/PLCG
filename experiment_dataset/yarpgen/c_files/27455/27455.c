/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max(((max((arr_0 [i_0]), (arr_0 [i_0])))), (arr_2 [i_0] [i_1])));
                var_12 = (arr_4 [i_0]);
            }
        }
    }
    var_13 = (min(var_13, ((min(((((((3652455514 ? var_2 : var_6))) || var_1))), (max((min(var_10, 13436199212299433333)), var_5)))))));
    #pragma endscop
}
