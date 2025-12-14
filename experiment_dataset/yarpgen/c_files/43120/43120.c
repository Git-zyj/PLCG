/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((min((-8192 == var_5), (min(var_14, var_1)))) >= 0)))));
    var_17 = (max(var_17, var_10));
    var_18 = (max(var_18, (((min(65535, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= (max(var_1, (arr_2 [i_1])));
                var_20 = (max(var_20, (arr_4 [i_1])));
                var_21 = (max(var_21, (!0)));
            }
        }
    }
    #pragma endscop
}
