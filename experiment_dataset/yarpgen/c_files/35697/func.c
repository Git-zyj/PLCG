/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35697
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
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (short)27608)) : (((/* implicit */int) (unsigned short)65535)))), ((~(((/* implicit */int) (short)573)))))), (((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-574)))) + (2147483647))) >> (((((unsigned int) 651920109926294304ULL)) - (3457622802U)))))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_4)))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))) : (12497105075288720298ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)8] [i_0 - 2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_5 [(unsigned char)11] = ((/* implicit */_Bool) arr_2 [i_0] [i_0 - 4]);
        var_14 = ((/* implicit */unsigned short) min((arr_0 [i_0 - 3] [i_0 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)9)), ((unsigned short)34599)))), (((((/* implicit */_Bool) (short)574)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)236)))))))));
        arr_6 [i_0] = ((/* implicit */short) 3869614457U);
    }
    var_15 ^= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (2124391140) : (((/* implicit */int) (_Bool)1))))), (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)225)), (var_7)));
}
