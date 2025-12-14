/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(((3255113141 ? ((min(1, 2147483647))) : 3421731723)), 1039854144));
    var_15 = min(((((max(1, -462839129))) ? var_9 : ((var_2 ? var_11 : 94601176)))), var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = 1;
                    var_16 = ((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] = (((~var_2) ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_7 [i_0] [i_1] [i_2]) ? var_2 : (arr_7 [i_0] [i_1] [i_2])))));
                    arr_10 [i_0] [i_1] [i_0] = 0;
                }
            }
        }
    }
    #pragma endscop
}
