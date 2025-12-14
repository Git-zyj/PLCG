/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(13110, (arr_2 [i_0] [i_1] [i_0])));
                var_14 = (((((((((arr_0 [i_0]) ? 13122 : 1))) ? ((1928782836 | (arr_3 [i_0]))) : (1928782846 * var_5)))) ? (min((((arr_3 [13]) ? (arr_1 [i_1]) : (arr_2 [i_0] [i_0] [i_1]))), ((var_12 ? (-32767 - 1) : var_13)))) : (arr_1 [i_0])));
            }
        }
    }
    var_15 = (max(var_15, (((max((max(var_4, var_0)), (((var_3 ? var_12 : var_6)))))))));
    var_16 = var_13;
    #pragma endscop
}
