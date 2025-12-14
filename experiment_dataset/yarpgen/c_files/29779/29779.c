/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1 + 1] [i_0] [i_2] = (((arr_9 [i_0] [i_2]) ? (arr_3 [i_0] [i_1]) : (max((arr_8 [i_0 + 1] [i_0 - 1]), (arr_1 [i_1 + 1] [i_0 - 3])))));
                    arr_11 [i_0] = ((-((var_6 ? (1766243227 | 3489103683) : (max((arr_0 [i_0] [i_1]), var_10))))));
                }
            }
        }
    }
    var_15 = ((((var_0 || ((min(805863616, var_6))))) ? -8753201900197848533 : var_4));
    #pragma endscop
}
