/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((-12254 ? 43907 : 29211));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 ^= (((arr_4 [i_0] [i_0]) >= ((((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_5 [i_0] [i_1])))) ? (21628 && 126) : 98))));
                    var_13 ^= (((arr_0 [i_0] [i_2]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
