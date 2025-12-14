/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231760
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((arr_1 [10LL] [10LL]), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_15)) + (((/* implicit */int) arr_0 [i_0])))))))));
        var_19 ^= ((/* implicit */signed char) var_12);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_20 = arr_1 [i_1] [i_1];
        var_21 &= ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) ^ (arr_1 [i_1] [i_2 + 1])))) ? (((((/* implicit */_Bool) min((arr_6 [i_2 + 2] [i_1]), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_17))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (3376633781550182539ULL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_9)) << (((11834809802272890660ULL) - (11834809802272890657ULL))))))))));
            var_22 ^= ((/* implicit */unsigned char) arr_4 [i_1]);
        }
    }
    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 4) 
    {
        var_23 = ((/* implicit */_Bool) (unsigned char)54);
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), ((-(775700140U)))));
            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1807))) & (arr_4 [i_4 + 3]))), (arr_11 [i_4 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-1808)), ((unsigned short)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)22701)), ((-9223372036854775807LL - 1LL))))) : (max((arr_12 [i_3]), (((/* implicit */unsigned long long int) var_9))))))));
        }
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1811)))))), (min((1902510406426536152ULL), (576460752303421440ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
}
