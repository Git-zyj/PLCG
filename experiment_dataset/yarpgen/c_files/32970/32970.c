/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = ((~(((max(var_16, (arr_2 [10] [i_1 - 1] [i_1])))))));
                var_18 = ((!((((max(-17461, -2020919484)) % (~2020919484))))));
                var_19 = ((-(((!(117 <= -118))))));
            }
        }
    }
    var_20 = -0;
    var_21 = ((!((!(var_15 < var_16)))));
    var_22 += (!(!-var_7));
    #pragma endscop
}
