/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -var_3));
    var_20 |= ((0 ? var_6 : ((((var_13 ^ var_5) / (((18446744073709551615 ? var_14 : var_9))))))));
    var_21 = (-6994058955049276820 ? 15639682239942861440 : 4730249833170513182);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (min(((((var_1 ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))) + ((max(var_15, var_4))))), ((-(var_7 < 16)))));
                var_23 ^= var_12;
            }
        }
    }
    #pragma endscop
}
