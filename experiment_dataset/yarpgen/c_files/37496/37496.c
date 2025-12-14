/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((var_11 ? ((min(91, 85))) : ((max(var_12, 85))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((max(((-(arr_5 [i_0] [i_2]))), var_0)))));
                    var_22 = (((((arr_5 [i_0] [i_1]) ? 29862 : (arr_5 [i_2] [i_2])))) ? ((((arr_5 [i_0] [i_2]) && (arr_5 [i_2] [i_2])))) : ((min((arr_5 [3] [i_0]), (arr_5 [13] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
