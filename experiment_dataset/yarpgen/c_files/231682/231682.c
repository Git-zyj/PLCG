/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (min(var_13, var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 |= (min((arr_5 [i_0 + 2] [i_0] [i_0]), ((((arr_1 [12]) + (arr_1 [1]))))));
                arr_7 [i_0] [i_0] = (((~var_5) >> ((((5610863596450830454 ? 659923019 : 19)) - 659923000))));
                var_17 &= (arr_4 [i_0] [i_1] [2]);
                var_18 = (max(var_18, (arr_4 [0] [i_0] [0])));
            }
        }
    }
    #pragma endscop
}
