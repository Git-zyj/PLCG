/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = 1;
                var_18 = (max(var_18, ((max(((min((arr_5 [i_1] [i_0] [i_0]), var_2))), var_2)))));
                var_19 -= ((((min(var_6, (max(var_11, var_12))))) ? (arr_0 [i_1]) : (arr_2 [i_0])));
                var_20 = (((1 && (arr_6 [i_1]))));
            }
        }
    }
    var_21 = (max(var_13, (~var_2)));
    #pragma endscop
}
