/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237478
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((long long int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_4)))))));
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45631))) : (-453054207636554244LL)))) ? (((/* implicit */long long int) ((int) 251313708U))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -3250326620128315537LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) : (-453054207636554244LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)))) ? (min((((/* implicit */long long int) (unsigned short)43596)), (-453054207636554262LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
