/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((18446744073709551615 && ((max((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0 + 1] [i_0]) : var_3)), (arr_2 [i_0 - 1] [i_1 - 1]))))));
                var_19 = ((((max((max(18446744073709551615, 15723900656146803822)), (arr_0 [i_0 - 2])))) ? var_16 : ((2586 ? (min(1, 2586)) : (arr_2 [i_0] [i_0])))));
            }
        }
    }
    var_20 = (2147483647 / 1);
    var_21 = (((((((var_9 ? var_3 : var_13)) & 62949))) ? var_5 : (min(2586, (max(var_4, var_11))))));
    #pragma endscop
}
