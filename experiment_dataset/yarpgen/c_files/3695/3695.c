/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (38 > 1595);
                var_18 &= (((((~(arr_3 [11] [i_1])))) ? (arr_3 [i_0] [i_0]) : ((var_10 ^ (arr_3 [i_1] [i_0])))));
                arr_7 [i_1] [i_1] [i_1] = 20;
                var_19 = (((((!31) ? ((max(var_14, (arr_0 [i_0] [i_1])))) : 0)) - (105 - 34)));
            }
        }
    }
    #pragma endscop
}
