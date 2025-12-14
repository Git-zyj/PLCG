/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245100
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
    var_20 -= ((/* implicit */unsigned char) ((var_16) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_19)) ? (6955873920486190306LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) : (min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))))));
    var_21 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) - (var_12)))) >= (((6955873920486190306LL) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (var_11)))) ? ((-(-6955873920486190306LL))) : (((/* implicit */long long int) var_10))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6955873920486190325LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6955873920486190300LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_5 [i_0] [(short)8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (short)21437)))));
        arr_6 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    var_23 = var_13;
}
