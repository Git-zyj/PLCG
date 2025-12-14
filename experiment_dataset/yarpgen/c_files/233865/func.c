/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233865
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
    var_16 = ((/* implicit */short) ((unsigned long long int) (unsigned short)35531));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) arr_5 [i_2 + 1] [i_0 + 2]);
                    var_17 *= ((/* implicit */unsigned short) arr_0 [12ULL]);
                }
            } 
        } 
    } 
}
