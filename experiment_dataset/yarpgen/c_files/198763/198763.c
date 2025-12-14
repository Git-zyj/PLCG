/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((-var_6 | (var_2 >> var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0 + 3] [i_1] = (var_4 / ((var_10 ? (((min(var_1, 129)))) : (arr_0 [i_0] [i_0]))));
                var_12 = (max(var_12, ((((arr_3 [i_0 + 3]) ? ((((var_0 > var_10) & (((arr_3 [13]) ? (arr_2 [i_1]) : var_5))))) : (((((arr_2 [i_0 + 3]) ? var_9 : (arr_0 [i_0] [16]))) / var_5)))))));
                var_13 = (min(var_13, (arr_5 [i_0] [i_1])));
            }
        }
    }
    var_14 += (((((var_1 == var_3) ? (var_5 + 0) : (var_5 == var_3))) - (!1588813640744139976)));
    #pragma endscop
}
