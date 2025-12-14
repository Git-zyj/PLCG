/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((1956534399 ? ((((!(var_1 != var_3))))) : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = 29;
                arr_7 [i_0] [i_0] = (((max((2889256808 | 1405710476), -120)) >> (((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))) + 1284792707))));
                var_11 &= (((!1) || 2889256808));
            }
        }
    }
    #pragma endscop
}
