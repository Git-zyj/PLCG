/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(((((var_8 ? var_16 : var_5)) <= var_12)), ((!((max(var_0, var_6))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((arr_3 [14] [1] [i_0]) ? (arr_1 [i_0] [i_1]) : (var_19 < var_10)))) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [10]))));
                var_21 = (min(var_21, (((+(((arr_4 [i_0] [i_1] [i_0]) ? -2147483640 : (arr_4 [11] [i_0] [i_0]))))))));
            }
        }
    }
    var_22 ^= var_8;
    #pragma endscop
}
