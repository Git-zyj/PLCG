/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203693
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
    var_18 -= ((/* implicit */unsigned short) (((!(var_17))) ? (((((((/* implicit */_Bool) var_1)) ? (2141651249) : (((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) var_15)))) : (((/* implicit */int) var_15))));
    var_19 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)21507)), (var_5)));
    var_20 += ((/* implicit */unsigned short) var_12);
    var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)21508))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21508))) : (((((/* implicit */_Bool) -1214575121)) ? (1896145503717695532ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_22 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)107))));
                var_23 *= ((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */signed char) var_17)), (var_3)))), (var_6)));
            }
        } 
    } 
}
