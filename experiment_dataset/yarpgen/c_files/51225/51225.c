/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (max((((arr_0 [i_0]) & (max(-3463616073384837575, -1754)))), (((((max((arr_5 [1] [i_2]), 1014335247))) >= (arr_7 [1] [i_2 - 1] [i_2 - 1] [i_2]))))));
                    var_13 = ((-(((((70 & (arr_0 [5])))) ? (arr_3 [i_0] [i_2]) : ((-(arr_3 [i_0] [i_2])))))));
                }
            }
        }
    }
    var_14 = ((((((var_9 / 42) / -1290986201039128618))) | ((1 ? 1 : 18446744073709551615))));
    #pragma endscop
}
