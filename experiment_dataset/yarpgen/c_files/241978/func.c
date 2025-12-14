/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241978
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
    var_17 = max(((_Bool)1), ((_Bool)1));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_18 |= ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)192))));
    }
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)72))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_16))))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            {
                var_21 ^= (unsigned char)0;
                var_22 -= ((/* implicit */int) (short)10);
                var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) (short)32743)) ? (-1090631600444032573LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) (signed char)99))));
            }
        } 
    } 
}
