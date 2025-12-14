/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] = 8514614486175094985;
                    arr_11 [i_0] [i_1 - 4] [i_1] [i_2] = -126;
                    arr_12 [i_0] [i_2] [i_1] [i_0] = (((arr_4 [i_0] [i_1 - 4] [i_2]) ? 126 : (((((18446744073709551615 ? 6 : (arr_4 [i_0] [i_0] [i_0])))) ? (arr_2 [i_1 - 1] [i_0] [i_1 - 1]) : 36479))));
                    arr_13 [i_2] [i_0] [i_0] = var_10;
                }
            }
        }
    }
    var_11 = (max(var_11, (((min(((18446744073709551601 ? var_8 : 3249135983), var_8)))))));
    #pragma endscop
}
