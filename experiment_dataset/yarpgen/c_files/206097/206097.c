/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (--1);
                    arr_8 [i_1] = (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    var_14 = ((var_13 != ((-(max(319702355, 14677397359778458801))))));
    #pragma endscop
}
