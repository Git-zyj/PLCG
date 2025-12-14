/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 -= (((((24891 ? 0 : 1541144137))) ? (((arr_1 [i_1 + 1]) & (arr_0 [2]))) : ((+(max((arr_3 [i_0] [i_0]), (arr_2 [i_0] [1])))))));
                var_21 -= ((((((((arr_3 [17] [i_1]) ? (arr_3 [i_0] [i_1]) : var_17))) ? (arr_2 [i_1 + 1] [16]) : (((arr_1 [i_1]) ? (arr_2 [i_0] [18]) : var_5)))) & (((max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))))));
            }
        }
    }
    #pragma endscop
}
