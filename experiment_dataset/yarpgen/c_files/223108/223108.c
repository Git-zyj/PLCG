/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0 - 3] [i_1] |= (max((arr_4 [i_1] [i_0 - 1]), -19));
                var_11 = (min(var_11, ((((((-(arr_2 [i_1 + 1])))) ? (arr_4 [i_0] [i_0]) : ((-(arr_5 [i_0]))))))));
            }
        }
    }
    var_12 = (max(var_12, ((((~(!var_1)))))));
    #pragma endscop
}
