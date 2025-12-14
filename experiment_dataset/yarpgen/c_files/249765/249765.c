/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((var_1 ? 7818944713775899436 : 23824)) / (((min(41711, 7))))))) ? -36439 : ((max(15, -10077)))));
    var_15 = (((~251) ? (((min(12328, -10072)))) : (max(36439, -var_7))));
    var_16 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((-(arr_1 [i_1])));
                var_18 = (max(var_18, (arr_5 [i_1])));
                var_19 = (max(-var_4, -29097));
                var_20 += (((((arr_4 [i_0 - 2] [i_1]) ? (arr_4 [i_0 + 1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (min((24178 ^ var_4), ((min(246, var_1))))) : ((~(var_4 + -12964))));
            }
        }
    }
    var_21 = (max(var_21, ((max(((14 ? (!var_5) : var_5)), ((((35101 >> (41357 - 41332))) >> (35115 - 35089))))))));
    #pragma endscop
}
