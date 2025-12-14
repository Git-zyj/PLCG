/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_14 ^ (var_3 % var_9)))) ? (~var_8) : ((max((!12688675734308346197), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((((arr_4 [i_1] [i_0]) >> (((arr_3 [i_0] [2]) - 65))))) ? (((var_10 ? (arr_0 [i_0] [i_0]) : var_1))) : 13990566490874695863))))));
                var_19 = ((((max((((!(arr_4 [i_0] [i_0])))), (max((arr_2 [i_1] [i_1]), var_1))))) ? var_14 : ((((arr_1 [i_0] [i_0]) < (!var_11))))));
            }
        }
    }
    var_20 = ((177 ? (~var_16) : 2604461394));
    #pragma endscop
}
