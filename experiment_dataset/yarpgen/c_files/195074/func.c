/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195074
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)309))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-306))) / (((((((/* implicit */_Bool) (short)8191)) ? (arr_5 [i_2] [i_2] [i_1] [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) var_0);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) (short)19043));
    var_18 = ((/* implicit */unsigned int) var_5);
}
