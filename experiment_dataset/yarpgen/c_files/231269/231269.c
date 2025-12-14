/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-(45929 != var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] &= ((((max((arr_0 [i_0]), 0))) ? (max((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_1] [i_1] [i_1]))) : (((~(~var_10))))));
                arr_5 [i_0] = ((18446744073709551615 ? ((((min(1, var_15))) ? (((0 ? 1 : (arr_3 [i_1] [i_0])))) : 4049848084)) : ((((!(arr_0 [i_1])))))));
            }
        }
    }
    var_17 = (min(var_9, var_13));
    #pragma endscop
}
