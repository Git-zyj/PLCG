/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (max(var_17, (((arr_1 [i_1]) * (((arr_2 [i_1]) ? 288221580058689536 : (arr_0 [i_1])))))))));
                arr_6 [i_1] = ((((var_8 ? (arr_2 [i_1]) : (arr_1 [i_1]))) < 13946));
                var_21 |= (min((((max((arr_1 [i_1]), (arr_0 [i_1]))) << (arr_3 [i_1]))), (((!((((arr_4 [i_0] [16]) ? 18158522493650862079 : (arr_4 [i_1] [i_1])))))))));
            }
        }
    }
    var_22 = (min(((min(((max(var_7, var_16))), var_6))), var_15));
    var_23 = var_19;
    #pragma endscop
}
