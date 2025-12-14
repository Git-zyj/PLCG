/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47411
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
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = max(((~(1642858633U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) arr_3 [i_1] [i_0])))))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) 514769038))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_1 [(unsigned short)0]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_0);
    var_17 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)61)))), (((/* implicit */int) var_2))));
    var_18 ^= (~(((/* implicit */int) (_Bool)0)));
}
