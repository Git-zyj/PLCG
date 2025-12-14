/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 *= 0;
    var_17 *= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 -= (max(97, (9769 / -1316766148)));
                    var_19 += (((arr_0 [i_0]) ? (max((arr_3 [i_0]), ((var_3 ? var_10 : (arr_3 [i_2]))))) : 11401));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = (((arr_0 [i_2]) ? (((!(arr_3 [i_0])))) : 1));
                }
            }
        }
    }
    #pragma endscop
}
