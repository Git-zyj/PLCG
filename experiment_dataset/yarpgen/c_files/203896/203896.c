/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(max((min(255, 8)), (~860410223)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((arr_8 [i_1]) == (((((8 || 255) < (min((arr_7 [i_0] [i_1]), (arr_8 [i_1]))))))));
                    var_19 = (max(var_19, ((((((-(max(950656957, -5))))) ? (((((~(arr_1 [i_1] [i_2])))) + (arr_3 [i_1] [i_0]))) : (((arr_9 [i_0] [i_1] [16] [i_1 - 1]) ^ (arr_2 [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_20 = (max(var_20, ((max((((!11765) ? ((min(11777, 127))) : -32748)), 0)))));
    #pragma endscop
}
