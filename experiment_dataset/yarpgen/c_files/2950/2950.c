/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max(var_18, (((((min(var_8, var_11))) ? (86 + 768801836) : (((var_3 ? var_9 : var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((((max((((var_0 > (arr_2 [i_1] [i_2 + 2])))), (max((arr_4 [i_2] [11]), 1))))) ? -2097152 : (arr_0 [i_0])));
                    var_22 ^= (((((((1 & (arr_5 [i_2] [5] [5] [1]))) * ((((arr_4 [i_0] [i_1]) > (arr_4 [i_0] [i_1]))))))) ? ((1 ? (var_13 << 0) : (arr_6 [i_2] [0] [4]))) : var_11));
                }
            }
        }
    }
    #pragma endscop
}
