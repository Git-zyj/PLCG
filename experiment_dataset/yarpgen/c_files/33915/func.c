/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33915
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = var_8;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = -3194376785419102022LL;
                    arr_10 [i_0] [12LL] [i_2] = ((/* implicit */short) arr_0 [i_1]);
                    arr_11 [i_0 - 1] [(short)0] [i_0] |= ((/* implicit */unsigned int) ((-3327799966359114501LL) > ((~(3196234823975032546LL)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_8);
}
