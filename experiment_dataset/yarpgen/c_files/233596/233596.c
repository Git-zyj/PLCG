/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (((244 ? 2047 : var_2))))) & ((((arr_5 [i_2 + 2] [i_1] [i_0]) ? ((var_9 ? var_9 : var_5)) : ((max(-2062, (arr_1 [i_2])))))))));
                    var_12 = ((42721 ? (max(((42721 ? -2052 : 8313369009243815656)), -2063)) : (((var_0 ? (((arr_4 [i_1]) * (arr_1 [i_0]))) : 2047)))));
                    arr_7 [i_0] [i_0] [i_2] = ((((arr_0 [i_2]) ? ((-(arr_3 [i_0] [12]))) : (((max(2058, 2040)))))));
                    arr_8 [i_1] [i_0] = 32758;
                }
            }
        }
    }
    var_13 = 22793;
    #pragma endscop
}
