/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195264
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7205))))) ? (((/* implicit */int) arr_0 [i_0] [(signed char)2])) : ((-(((/* implicit */int) (unsigned short)21035))))))) * ((+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44501))) : (var_14))))))))));
        var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (14305717256272741316ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) 1101085996)))))));
        var_18 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
    }
    var_19 &= ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) (unsigned short)21035)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34801))) - (1817798370U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
}
