/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42672
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [(signed char)9] [i_0] = ((/* implicit */unsigned int) ((int) ((-699899779) ^ (((/* implicit */int) var_7)))));
                arr_7 [i_1] = ((/* implicit */short) (((((((_Bool)1) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) var_1)))) * (((/* implicit */int) (((!(((/* implicit */_Bool) 4294967281U)))) && (((/* implicit */_Bool) (((_Bool)1) ? (-699899758) : (((/* implicit */int) var_10))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) -1674944632)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (_Bool)1))));
}
