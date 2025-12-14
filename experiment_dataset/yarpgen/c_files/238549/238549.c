/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_0, (max(511, 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 = ((-(((~110) ? ((var_11 ? 0 : 5)) : (var_10 > 19)))));
                    arr_9 [7] [7] [i_2 + 4] |= (((((~(arr_7 [8] [i_1] [i_2 + 4] [i_1])))) ? (arr_1 [i_2]) : ((-445539597 & (((arr_3 [i_0]) & 4294967290))))));
                }
            }
        }
    }
    var_16 = ((var_2 != ((((!(66 == 244)))))));
    #pragma endscop
}
