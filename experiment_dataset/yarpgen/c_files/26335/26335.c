/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (var_15 / var_0)));
    var_21 = (((-var_17 ? (~var_18) : ((1 ? 1084996210 : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [6] [i_1] [i_0] = ((arr_3 [i_0 - 1]) <= 1);
                var_22 = (((max((arr_0 [i_0] [i_0]), (max(641343304, var_17))))) > (((arr_4 [i_0] [i_1]) ? (((54833 ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (arr_2 [i_0]))));
                arr_6 [i_0] [i_0] = ((-(((max((arr_2 [i_0]), var_9))))));
                var_23 -= (((((~(arr_2 [8])))) + ((((max(0, 10700))) ? ((1 / (arr_3 [2]))) : ((((arr_0 [i_0] [6]) ? 31 : 65535)))))));
            }
        }
    }
    #pragma endscop
}
