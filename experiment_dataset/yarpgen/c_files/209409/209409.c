/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= 816908275;
    var_16 &= 3478059005;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_17 = ((1192781149 ? var_13 : (arr_1 [i_2 - 1])));
                    var_18 = ((~(arr_1 [i_2 - 1])));
                }
                arr_9 [i_0] [i_0] = (((arr_2 [i_0] [i_1]) ? (arr_8 [i_0] [i_0]) : (!var_10)));
                arr_10 [i_1] [i_0] = ((17 == 1653027814) * (~var_7));
                var_19 = (max(var_19, (arr_4 [8] [6] [i_0])));
            }
        }
    }
    #pragma endscop
}
