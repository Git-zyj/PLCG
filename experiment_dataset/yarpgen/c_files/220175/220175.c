/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220175
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
                var_17 = (~0);
                arr_6 [i_0] = (((-(arr_2 [i_1]))));
            }
        }
    }
    var_18 = 4942537842445608053;
    var_19 = (min((((!(var_15 == var_6)))), (min(3347642583, var_10))));
    var_20 = (((1 + 436958697) ? ((((min(-1353573239, var_9)) ^ ((var_13 ? 1 : var_13))))) : (~var_13)));
    #pragma endscop
}
