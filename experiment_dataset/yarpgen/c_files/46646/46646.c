/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((-(min(var_2, ((var_4 ? (arr_0 [i_0 - 1] [i_1 + 3]) : (-127 - 1)))))));
                var_16 += arr_3 [8] [i_1];
            }
        }
    }
    var_17 = (max(var_17, (((var_1 ? ((((127 >= var_1) && -25))) : (((!(((60896 ? 1 : -99)))))))))));
    var_18 = (~var_11);
    #pragma endscop
}
