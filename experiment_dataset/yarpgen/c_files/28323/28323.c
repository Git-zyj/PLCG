/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max((~0), 11009682695829106901)));
    var_19 = ((var_16 ? 7 : var_7));
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((((var_3 * (arr_5 [i_0 - 1] [12])))) ? ((((arr_5 [i_0 - 1] [i_0]) && (arr_5 [i_0 - 1] [i_0])))) : (((arr_5 [i_0 + 1] [i_0]) ? (arr_5 [i_0 + 1] [i_0]) : (arr_5 [i_0 + 2] [i_0 - 1]))))))));
                var_22 = arr_5 [i_0] [i_0];
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
