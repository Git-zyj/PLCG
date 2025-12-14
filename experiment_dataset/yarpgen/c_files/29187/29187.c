/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((((((13944 ? (arr_2 [i_1]) : (arr_4 [i_1]))))) && (((arr_1 [i_1 + 1]) == (arr_1 [i_1 - 1])))));
                var_21 = (max((((arr_1 [i_1 + 1]) ? 15707921676590734290 : (arr_1 [i_1 + 1]))), -124));
            }
        }
    }
    var_22 += var_0;
    var_23 = 1564;
    #pragma endscop
}
