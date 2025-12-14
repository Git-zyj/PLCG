/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 49373;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((((arr_2 [i_0 + 3] [i_0 + 2]) ? (arr_2 [3] [i_0 + 1]) : 117))) ? (arr_2 [i_0 + 2] [i_0 - 1]) : ((~(arr_2 [3] [i_0 + 2]))))))));
                var_18 = (min(var_18, (arr_3 [i_1])));
                var_19 = (max(var_19, var_6));
            }
        }
    }
    var_20 += var_0;
    #pragma endscop
}
