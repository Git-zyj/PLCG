/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35020
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
    var_14 = (unsigned short)4095;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = max((max((arr_6 [i_0 + 1]), ((unsigned short)65535))), ((unsigned short)480));
                    var_16 = (unsigned short)11474;
                }
            } 
        } 
    } 
    var_17 = min((((unsigned short) min((var_7), (var_4)))), (min((var_3), ((unsigned short)55329))));
}
