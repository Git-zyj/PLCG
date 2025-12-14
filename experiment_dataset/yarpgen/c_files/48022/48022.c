/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 140737488355327;
    var_18 ^= 4611686018427387903;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((((arr_3 [i_0] [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_0]))) << (((min((max(2641975523816450292, 2849742499829863149)), (max(var_12, 15804768549893101323)))) - 2849742499829863138)));
                arr_7 [i_0] = ((max((min((arr_0 [i_0]), (arr_5 [i_0] [i_1]))), ((var_9 ? 15804768549893101332 : 15804768549893101323)))) | ((((!(var_15 * var_12))))));
                var_20 = (~var_5);
            }
        }
    }
    #pragma endscop
}
