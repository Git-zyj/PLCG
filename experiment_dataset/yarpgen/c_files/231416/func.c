/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231416
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
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), ((unsigned short)54354)))) ? ((+(((/* implicit */int) (unsigned short)54354)))) : (var_1))) >> (((((/* implicit */int) var_11)) - (25507)))));
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned short)11181), (((/* implicit */unsigned short) (short)-23072))))) ? ((~(var_1))) : (((/* implicit */int) ((_Bool) (unsigned short)11182))))) == (((((((/* implicit */int) (unsigned short)11181)) == (492228399))) ? (((int) var_1)) : (((/* implicit */int) ((unsigned char) (short)10896)))))));
    var_14 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)54350)) : (((/* implicit */int) (unsigned short)11182))))));
    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [7LL])) ? (((/* implicit */unsigned int) ((arr_1 [i_0 - 1] [i_0 - 1]) % ((+(((/* implicit */int) (unsigned short)49665))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15648)) + (((/* implicit */int) (short)-23072))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) (unsigned short)25422)), (1187574984U)))))));
        var_17 -= ((/* implicit */short) (+(min((-5868380138568821093LL), (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        var_18 = ((/* implicit */signed char) min((((long long int) ((short) (_Bool)1))), (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)11184), (((/* implicit */unsigned short) (_Bool)1))))) > (((/* implicit */int) max(((unsigned short)15648), ((unsigned short)11189)))))))));
    }
}
