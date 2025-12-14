/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198579
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -384752199)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (var_8)))))) ? (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) var_13)), (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -128582699)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
        var_17 ^= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_2) % (var_11)))) || (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (unsigned short)34784)))) : (((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-1195150561)))))))));
    var_19 = ((/* implicit */signed char) var_2);
}
