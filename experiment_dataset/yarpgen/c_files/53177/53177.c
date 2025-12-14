/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_14 & var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 ^= (var_10 / (((((4220134615254672786 ? 17193676182643404002 : 159))) ? (~11117961542328107539) : var_13)));
                    var_18 = (min(var_18, ((((arr_1 [0]) & (((!(arr_4 [i_0] [i_0])))))))));
                }
            }
        }
    }
    var_19 = (max(var_19, ((max(var_1, 159)))));
    #pragma endscop
}
