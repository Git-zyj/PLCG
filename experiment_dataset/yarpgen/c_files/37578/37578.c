/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((arr_2 [i_1 - 2]) ? ((((var_11 ? (arr_3 [i_0]) : (arr_2 [i_0]))) << (-var_6 + 27850))) : ((((var_9 ^ var_0) ? var_13 : (((var_1 < (arr_2 [i_0])))))))));
                var_18 = ((~((var_5 % (arr_0 [i_1 - 2] [i_1 + 1])))));
            }
        }
    }
    var_19 = ((~(var_1 % var_4)));
    #pragma endscop
}
