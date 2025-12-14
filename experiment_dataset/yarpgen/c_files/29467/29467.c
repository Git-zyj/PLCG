/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_7);
    var_19 = ((~((140 ? 1209079252 : var_11))));
    var_20 = ((((min((var_6 / var_1), ((min(1209079252, var_14)))))) ? var_1 : var_15));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((((arr_3 [i_0 - 1]) != ((((var_2 >= (arr_3 [20]))))))));
                var_22 = (((((-(arr_5 [i_1] [i_0] [i_0])))) / (((arr_2 [i_1]) ? ((min(var_1, (arr_2 [2])))) : var_5))));
            }
        }
    }
    var_23 ^= var_17;
    #pragma endscop
}
