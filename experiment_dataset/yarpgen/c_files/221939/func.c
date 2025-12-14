/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221939
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(-4455707653686911081LL)))), (min((((/* implicit */unsigned long long int) (unsigned char)116)), (((unsigned long long int) (unsigned char)255))))));
    var_13 += var_5;
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)1), ((unsigned char)101)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)154))));
        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_1 [i_0]))))) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_18 *= min(((signed char)17), ((signed char)17));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
        var_20 += ((/* implicit */long long int) (unsigned char)255);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1])))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), ((unsigned char)255)));
    }
    var_23 = ((/* implicit */long long int) (~(max((15ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (var_3))))))));
}
