/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (max((var_3 || var_8), (((-126 % 251) ? -205 : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [4] |= (max((((arr_4 [i_0] [i_0 - 1] [i_1]) - (((arr_2 [i_0]) - 205)))), (arr_6 [i_0 - 1] [i_0 - 1])));
                var_16 = (((arr_5 [i_0]) ? ((max((arr_5 [i_0]), (arr_5 [i_0])))) : (max((arr_2 [i_0 - 1]), var_0))));
                arr_8 [i_0 - 1] [i_0] = (arr_1 [i_0 - 1]);
            }
        }
    }
    #pragma endscop
}
