/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247121
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (short)32767)), (17639398053827109462ULL))) / (max((var_6), (((/* implicit */unsigned long long int) var_13))))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (unsigned short)7)) + (((/* implicit */int) (unsigned short)65528))))));
    var_16 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((((318303134798880400ULL) ^ (807346019882442153ULL))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_2)))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)24007))))))));
        var_19 = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_10)) : (((681445049) << (((2147483647) - (2147483647)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_8))) >= (arr_3 [i_0 + 1] [i_0]))))) : ((~(((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) var_3))))))));
        var_21 = ((/* implicit */unsigned long long int) ((var_5) + (((/* implicit */int) ((signed char) var_13)))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) (signed char)-38))))) > (((((/* implicit */_Bool) (unsigned short)65529)) ? (var_6) : (18446744073709551615ULL)))))) / (min((((/* implicit */int) var_9)), (max((var_5), (197154401))))))))));
    var_23 &= ((/* implicit */unsigned short) 1160721238);
}
