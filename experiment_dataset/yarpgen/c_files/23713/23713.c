/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((19607 ? 19607 : -12338845778017098761)) | ((max(var_10, var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-303383610 & (~1)));
                arr_6 [i_1] |= (arr_3 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
