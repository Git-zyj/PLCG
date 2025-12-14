/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -var_1;
    var_11 = ((((max((var_2 + var_4), var_3))) ? -var_5 : (max(var_7, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~(~26)));
                var_12 = (!(((+(((arr_4 [i_0]) * (arr_4 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
