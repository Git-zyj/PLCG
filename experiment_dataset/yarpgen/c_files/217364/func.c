/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217364
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)-15997)) ? (min((((((/* implicit */_Bool) (short)13478)) ? (((/* implicit */unsigned long long int) -694215059535093415LL)) : (7436447750369318877ULL))), (((/* implicit */unsigned long long int) min((15), (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11810)))));
        var_17 &= ((/* implicit */signed char) max(((short)15218), (((/* implicit */short) (signed char)31))));
        arr_2 [i_0] = ((/* implicit */_Bool) -15);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)32256)))) >= (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_5 [(_Bool)1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ ((~(((((/* implicit */_Bool) (short)15218)) ? (10043886527473668688ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53714))))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((6857650644198409228LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)32256)) : (600854796)))));
        arr_6 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((2407972764U) ^ (((/* implicit */unsigned int) var_13))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (15) : (((/* implicit */int) (unsigned short)22))));
    }
    var_20 = ((/* implicit */short) (+(614978526)));
}
