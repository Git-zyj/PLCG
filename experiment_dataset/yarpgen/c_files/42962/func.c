/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42962
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_10))))))))) : ((+(((((/* implicit */_Bool) var_14)) ? (-1) : (var_6)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : (((arr_0 [i_0] [i_0 - 2]) % (1054760081)))));
        var_18 = ((int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (var_0) : (((/* implicit */int) var_15)))) : (((int) var_8))));
        arr_2 [6LL] [4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)14))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] [i_1] = ((int) arr_5 [i_1]);
            arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned char)241))) || ((((~(((/* implicit */int) arr_3 [i_2])))) >= (min((((/* implicit */int) arr_3 [i_1])), (-487412609)))))));
            var_19 = ((/* implicit */unsigned char) ((arr_6 [i_2] [i_2] [2]) << (((max((((/* implicit */int) (unsigned char)14)), (1280259172))) - (1280259149)))));
            arr_9 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) arr_5 [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned char)249))))))));
            arr_12 [i_3] [i_3] = ((/* implicit */int) 3231498821U);
        }
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_1])), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))) : (((unsigned int) (unsigned char)253))))) ? (min((((((/* implicit */_Bool) 576524415)) ? (var_3) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_13 [i_1] [i_1])) >> (((arr_1 [(unsigned char)0]) - (1601958528)))))))))))));
            var_22 = ((/* implicit */int) var_3);
        }
        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)32))));
    }
    var_24 ^= 576524415;
    var_25 = ((var_1) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((int) var_15)) : (((var_6) / (-7)))))));
}
