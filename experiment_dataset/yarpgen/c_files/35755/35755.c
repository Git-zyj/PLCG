/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 &= (((((-var_2 ? (max(var_1, (arr_4 [i_0]))) : -var_4))) ? ((((var_2 ? 2930984943 : (arr_0 [i_0] [i_1 + 3]))) + (arr_0 [i_0] [i_1]))) : (arr_5 [i_0] [i_1] [i_0])));
                arr_6 [i_0] = ((+((9804145982359367864 ? (arr_0 [i_0] [i_1]) : ((max(var_4, -2034260425)))))));
                var_14 &= var_2;
                arr_7 [i_0] = ((max(9804145982359367877, (arr_4 [i_1]))));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
