/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] |= (((12854 ? -1 : (arr_6 [i_0] [9] [i_1] [4]))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = 1;
                    var_18 = ((arr_3 [1]) ? ((1 ? (((arr_2 [i_2]) - (arr_7 [i_2] [i_2] [i_2] [i_2]))) : ((min((arr_4 [10]), (arr_1 [i_0])))))) : ((((((arr_3 [1]) ? var_7 : (arr_1 [i_0]))) > (arr_1 [i_0])))));
                }
            }
        }
    }
    var_19 = ((!(((max(var_0, 1766607205))))));
    var_20 = var_6;
    #pragma endscop
}
