/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -32765;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [4] = (max(9, ((((1 ? 256885932 : (arr_4 [i_0] [i_0] [i_0])))))));
                arr_6 [i_0] = var_2;
                arr_7 [i_0] [i_1] = 5;
            }
        }
    }
    var_21 = ((((-2 - 0) - var_10)));
    var_22 = (((((max(var_16, 0)) < ((var_16 << (1598646260988427793 - 1598646260988427791))))) ? (min(((min(8190, 32764))), 256885935)) : -105));
    #pragma endscop
}
