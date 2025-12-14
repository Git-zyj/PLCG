/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (((((+(((arr_3 [i_1] [i_1]) ? (arr_2 [1] [i_1] [i_0]) : (arr_1 [0])))))) ? (arr_2 [i_1 - 1] [10] [i_0]) : (arr_3 [i_1 - 1] [i_1 - 1])));
                var_12 = (arr_0 [i_1 - 1] [i_1 + 3]);
                var_13 |= (arr_0 [i_0] [i_1 - 1]);
                arr_4 [1] [i_1] [1] = (((arr_0 [i_1 + 2] [i_1 + 2]) ? ((40859 ? (arr_3 [i_0] [10]) : (((min(0, (arr_0 [i_0] [i_1]))))))) : (((-(arr_1 [i_1 - 1]))))));
                var_14 = arr_1 [i_0];
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
