/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_2 [i_0]) / (-2147483647 - 1)));
                var_11 = (((((~(arr_3 [i_1])))) ? ((-109 ? ((var_8 % (arr_2 [i_1]))) : 25461)) : ((min(-101, ((-92 ? 12149 : (arr_3 [9]))))))));
                arr_5 [4] [3] [4] = (((-(arr_2 [i_1 - 1]))));
            }
        }
    }
    var_12 = (max(var_12, (((var_3 >> (var_10 <= var_2))))));
    #pragma endscop
}
