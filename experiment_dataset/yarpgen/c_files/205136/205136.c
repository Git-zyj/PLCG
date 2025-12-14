/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((~(arr_4 [i_2] [i_2 + 1] [i_1 - 2]))))));
                    var_20 = (((((1590227219 != ((max((arr_5 [i_0]), var_3)))))) > (-127 - 1)));
                    var_21 -= (255 || 207);
                }
            }
        }
    }
    var_22 = (max(var_17, (-9223372036854775807 - 1)));
    var_23 = var_0;
    #pragma endscop
}
