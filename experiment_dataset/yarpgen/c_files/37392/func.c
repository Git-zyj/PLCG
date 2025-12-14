/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37392
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13)))))))) : (var_0)));
        arr_4 [i_0] [i_0 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))))) : (((unsigned long long int) var_11))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_8))))) + (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) < (var_10))))) : (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */int) var_2)) >> (((var_10) / (((/* implicit */unsigned long long int) var_17)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
            arr_8 [i_0 - 3] [i_1] [i_0 - 3] = ((/* implicit */unsigned char) var_10);
        }
        arr_9 [i_0 + 2] &= ((/* implicit */unsigned int) ((var_0) >> (((((var_6) ^ (var_11))) - (1124209024U)))));
    }
    var_20 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_7)))) : (((int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) << (((var_8) - (3425591948U)))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))))));
}
