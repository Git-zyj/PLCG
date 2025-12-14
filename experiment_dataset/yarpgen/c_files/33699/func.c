/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33699
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9697)) ? (((/* implicit */int) (unsigned short)2912)) : (((/* implicit */int) (unsigned short)25955))))) ? (((/* implicit */int) max(((unsigned short)41527), ((unsigned short)41527)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-32766)), ((unsigned short)62643))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned short) max(((_Bool)1), ((_Bool)1)))))));
    }
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (signed char)53)), ((short)-32766)))) <= (((((/* implicit */int) (unsigned short)28395)) << (((((/* implicit */int) var_3)) - (86)))))))) : ((((+(((/* implicit */int) (unsigned short)39580)))) | (((((/* implicit */_Bool) 1383699038U)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned short)28401))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_13)) & (((((/* implicit */_Bool) (unsigned short)39581)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)37135)))))))))));
}
