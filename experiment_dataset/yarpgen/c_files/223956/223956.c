/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (-127 - 1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 -= ((min((max(127, var_9), (arr_7 [i_0] [i_1] [i_0])))));
                    var_16 = (arr_5 [i_1 - 1] [i_0 + 1] [i_2 - 1]);
                    arr_8 [2] |= ((3166623370 + (((((-(arr_5 [i_0] [i_2] [i_0]))))))));
                    var_17 = max((max((arr_4 [i_1 + 3] [i_0]), (arr_7 [i_0 - 1] [i_1 + 3] [i_2 - 1]))), (~var_9));
                    var_18 = (min(var_18, ((((((((max(-8192, (arr_7 [i_2 + 2] [i_1] [i_0])))) ? (arr_4 [i_0 - 1] [18]) : ((var_2 ? (arr_4 [i_0] [4]) : var_12))))) || 73)))));
                }
            }
        }
    }
    #pragma endscop
}
