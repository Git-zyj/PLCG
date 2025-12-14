/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2795
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
                var_13 = ((min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_1] [i_1] [i_0]))));
                var_14 = (min(var_14, ((max(((((arr_3 [i_0] [i_1]) > (~var_3)))), (max(var_2, (var_4 % var_0))))))));
            }
        }
    }
    var_15 = (min(var_15, var_12));
    var_16 = 1449898243394084677;
    #pragma endscop
}
