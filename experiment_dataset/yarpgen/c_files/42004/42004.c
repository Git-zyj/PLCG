/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? var_5 : ((var_1 ? (max(88, 2960678910)) : var_0))));
    var_11 = -8745490596758219005;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (((min((min((arr_0 [i_2]), (arr_4 [i_1]))), 5226)) + ((((max(168, (arr_6 [i_2] [8])))) - (arr_2 [11] [i_1])))));
                    var_12 = ((!((max(40, (arr_0 [i_0]))))));
                    var_13 = ((((((((arr_7 [i_0] [i_1] [i_1]) ? var_0 : (arr_5 [i_1])))) > (max((arr_0 [i_1]), (arr_0 [2]))))) && (arr_4 [i_1])));
                    arr_9 [i_1] [i_1] [i_1] [i_0 + 2] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
