/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242576
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
    var_17 = ((/* implicit */_Bool) max((min((var_6), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))));
    var_18 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (4747427019861860250LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) << (((((((/* implicit */int) var_7)) + (29))) - (25))))) * (((/* implicit */long long int) ((/* implicit */int) (!((!(var_14)))))))));
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)40)), (var_12)))) % (max((751782139), (((/* implicit */int) (unsigned short)65516)))))) : (((((((/* implicit */_Bool) 240634446)) || (((/* implicit */_Bool) var_6)))) ? (min((-1710747078), (((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 |= ((/* implicit */unsigned char) min(((-(1023LL))), (((/* implicit */long long int) max((min((-1710747078), (-1444207191))), (((/* implicit */int) (short)10729)))))));
        var_21 += ((/* implicit */int) (_Bool)0);
    }
}
