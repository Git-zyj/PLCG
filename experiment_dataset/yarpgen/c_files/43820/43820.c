/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(((((!(arr_0 [1]))) ? (max(-105, 7932343692306369232)) : ((((!(arr_1 [i_0] [i_0]))))))), ((max((arr_1 [i_0 + 2] [i_0]), (arr_1 [10] [i_0]))))));
                var_15 = (max(var_15, -344820839));
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
