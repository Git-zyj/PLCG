/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (~1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (((((arr_4 [1] [2]) ? (arr_4 [i_1] [i_2]) : var_6)) * ((32764 ? var_9 : (arr_4 [i_0] [0])))));
                    var_14 = (max(var_14, ((((arr_2 [i_0] [i_1] [i_0]) ? var_2 : ((((!(arr_0 [i_0]))))))))));
                }
            }
        }
    }
    var_15 ^= var_7;
    #pragma endscop
}
