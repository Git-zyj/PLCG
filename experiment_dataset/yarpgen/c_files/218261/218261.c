/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [16] [i_0] [i_0] = (max(((~((min((arr_3 [i_0 - 1] [i_1]), (arr_1 [i_0])))))), (((!(arr_4 [i_0]))))));
                    arr_8 [i_2] [i_1 + 3] [i_0] [i_0] = (!((min(((~(arr_2 [i_0] [i_0]))), (min((arr_4 [9]), (arr_2 [i_0] [i_1])))))));
                }
            }
        }
    }
    var_10 ^= (var_7 ? (((~(min(var_9, var_0))))) : (min(((max(210, -1))), (min(var_0, var_4)))));
    #pragma endscop
}
