/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 64763;
    var_21 = (min(var_21, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_4 [i_1 + 2] [i_1 - 1]) ? (arr_4 [i_1 + 2] [i_1 - 2]) : (arr_4 [i_1 + 2] [i_1 - 2]))) ^ (((arr_4 [i_1 + 1] [i_1 + 1]) ^ (arr_4 [i_1 - 2] [i_1 - 2])))));
                var_22 = ((((min((arr_0 [i_1 + 1]), 8806))) ? (min(var_2, (arr_0 [i_1 - 1]))) : (max((arr_0 [i_1 - 1]), var_9))));
                arr_6 [11] [i_1 + 1] [8] = (((~8806) >= (((min(var_13, (arr_0 [5]))) >> ((((arr_3 [i_0] [i_1]) >= (arr_2 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
