/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200141
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_0]);
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) (short)-23514)) / (((/* implicit */int) (short)23517))));
                    var_20 = ((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_21 = var_6;
}
