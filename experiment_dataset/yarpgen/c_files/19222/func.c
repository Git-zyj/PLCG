/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19222
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)62134)) : (((/* implicit */int) (unsigned short)16383))));
        var_10 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((var_9), (((/* implicit */unsigned int) (signed char)(-127 - 1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (unsigned short)3402)) % (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)115))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) | (((/* implicit */int) (signed char)-111)))))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) max((4294967277U), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) (+(-1994423150)))) : (min((383556395U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
    }
    var_12 -= ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */short) ((min((((((/* implicit */_Bool) (short)8917)) ? (var_1) : (var_1))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))))) % (((/* implicit */unsigned long long int) ((var_8) % (var_2))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((var_9), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4870390035086566931LL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)62128), ((unsigned short)62133))))) : (var_3))))))));
    var_15 = ((((((((/* implicit */_Bool) var_7)) ? (7U) : (((/* implicit */unsigned int) -651716455)))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62116)) - (((/* implicit */int) var_6))))))) << (((var_0) - (4522074919689040427LL))));
}
