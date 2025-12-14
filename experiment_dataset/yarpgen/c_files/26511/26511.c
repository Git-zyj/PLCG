/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(((-7944055632613869828 ? -4778874716868664385 : var_7)), (7944055632613869838 >= 1839815881559077024)))) ? var_5 : ((((~7944055632613869837) < ((var_13 ? -7944055632613869839 : var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [6] = (arr_1 [i_0]);
                var_15 = (max(var_15, ((max((((((min(28672, -7944055632613869849))) || -var_3))), (arr_2 [i_0 + 1] [i_1]))))));
                arr_6 [i_1] [i_0] [i_0] = (arr_3 [i_0] [3]);
                var_16 += (arr_3 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
