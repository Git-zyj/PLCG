/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((108 ? var_0 : (var_10 % var_10))));
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = var_0;
                    var_14 = (((arr_6 [i_0 - 1] [i_1 - 1] [3] [i_2 + 1]) ? ((max((arr_6 [10] [i_1] [13] [i_1]), (arr_6 [i_0 - 1] [i_1 - 1] [i_2] [i_2 - 1])))) : ((var_6 ? (arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0]) : (arr_6 [13] [i_1] [i_1] [i_0])))));
                    arr_7 [i_0 + 1] [i_2] [i_2] [i_2] = ((!(arr_0 [i_0 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
