/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_15, (min(var_5, var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((((var_8 ? ((-(arr_5 [6]))) : (((max(27360, (arr_2 [i_0] [i_0] [i_0])))))))) ? ((var_5 ? (arr_5 [i_0]) : (((max((arr_2 [i_0] [i_0] [i_0]), (arr_4 [i_0]))))))) : (((arr_2 [i_2] [13] [13]) ? (max(0, (arr_3 [0] [i_1] [i_0]))) : (max(var_14, (arr_3 [i_0] [i_1] [i_2])))))));
                    var_18 = -1950020832811239313;
                }
            }
        }
    }
    #pragma endscop
}
