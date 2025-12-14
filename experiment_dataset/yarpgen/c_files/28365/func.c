/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28365
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
    var_16 = ((/* implicit */int) max((var_16), ((~(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = var_4;
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (signed char)-106))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min(((_Bool)1), (((_Bool) ((((arr_4 [i_1] [i_1]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)34286)) - (34282)))))))))));
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)22))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (_Bool)1);
        var_21 = ((/* implicit */unsigned short) (signed char)48);
    }
    var_22 ^= ((/* implicit */unsigned short) max((max((max((var_10), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)-6759))))))), (((/* implicit */long long int) (signed char)-16))));
    var_23 = ((var_8) / (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_6))))), (max((var_4), (32767LL))))));
}
