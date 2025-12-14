/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 += (((((((!(arr_2 [i_0]))) ? (arr_5 [i_0]) : ((min((arr_3 [i_0]), (arr_3 [i_0]))))))) ? 5431657594987411421 : ((((!((!(arr_5 [i_1])))))))));
                var_20 ^= (~var_0);
                var_21 = (max(var_21, (((~(~253))))));
                var_22 -= (((arr_5 [i_1 + 2]) ? 9007199253692416 : (max(var_6, (!var_15)))));
            }
        }
    }
    var_23 ^= var_7;
    var_24 = (max(171, var_13));
    #pragma endscop
}
