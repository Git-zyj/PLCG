/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((-4962208927431860602 < 4294967295), var_10));
    var_14 = var_9;
    var_15 ^= (min(13489, ((((1 & 21) > (~17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(-1765727553081902300, 4962208927431860602));
                var_16 = (max((((!-18) & (min(1765727553081902299, 120)))), (((((min(159, 0))) ^ ((min(0, 32764))))))));
            }
        }
    }
    #pragma endscop
}
