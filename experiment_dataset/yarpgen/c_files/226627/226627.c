/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((var_3 <= var_0) & ((var_2 >> (var_1 - 17542907483243427253)))))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((((arr_3 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_1] [i_0]) : (arr_0 [2]))) | (arr_0 [i_1]))));
                var_15 = max((((((((arr_0 [i_1]) % (arr_3 [i_0] [i_1] [4])))) && ((((arr_1 [5]) << (var_0 - 3844845015827318607))))))), (((var_11 & (arr_0 [i_0])))));
            }
        }
    }
    var_16 = ((((max(var_5, -var_3))) - var_3));
    var_17 = var_4;
    #pragma endscop
}
