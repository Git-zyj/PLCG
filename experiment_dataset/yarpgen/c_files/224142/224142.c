/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((18066881283016247848 != 24) && 28)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((!(~246)));
                    var_19 = (max(var_19, (((-(((((-24 ? 42 : 2388221250))) ? (2388221250 <= 1) : ((379862790693303752 >> (67108863 - 67108844))))))))));
                    arr_8 [i_0] [0] [0] [i_1] &= ((2388221250 / (((3179975151 | 18066881283016247864) - (~1)))));
                }
            }
        }
    }
    #pragma endscop
}
