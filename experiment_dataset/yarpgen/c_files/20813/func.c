/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20813
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        var_19 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) > (8638823979928855200LL)));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 2558183568U))));
                        var_21 = ((var_12) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1736783727U)))));
                    }
                    var_22 = (((+(-1574427988587792995LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)113))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (((((/* implicit */int) var_5)) & (((/* implicit */int) var_16))))));
    var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_13)), (((long long int) var_17))));
}
