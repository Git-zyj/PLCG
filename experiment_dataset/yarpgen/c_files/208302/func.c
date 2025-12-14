/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208302
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 *= ((/* implicit */signed char) ((unsigned long long int) ((137438953472LL) >> (0LL))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(1281733066564540220ULL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((max((var_11), (((/* implicit */long long int) var_14)))), (((((/* implicit */_Bool) var_11)) ? ((+(var_4))) : (max((var_1), (9223372036854775807LL)))))));
    var_18 &= ((/* implicit */long long int) ((((((/* implicit */int) ((-1576148710) == (((/* implicit */int) var_6))))) << (((((((/* implicit */_Bool) 2632891866097635271LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) - (106))))) * (((/* implicit */int) ((((((/* implicit */_Bool) (short)11404)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) == (((/* implicit */int) var_14)))))));
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65535)))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1576148709) : (((/* implicit */int) var_5))))) : (var_11))));
    var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((351649383772281583ULL) > (1985571701518354834ULL)))) / (((/* implicit */int) (!(var_13)))))));
}
