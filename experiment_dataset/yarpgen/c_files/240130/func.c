/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240130
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1118610468)) ? (var_3) : (arr_1 [i_0])))) ? (((var_5) >> (((((/* implicit */int) var_6)) + (27836))))) : (((/* implicit */int) ((unsigned short) 203745155))))), (min(((~(((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) var_14))))));
        var_16 += ((/* implicit */long long int) min((var_11), (((/* implicit */short) (unsigned char)12))));
    }
    var_17 += ((/* implicit */unsigned short) ((min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_5)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((min((((/* implicit */int) var_11)), (var_12))) != (var_3))) ? ((~(((((/* implicit */_Bool) 7763509056720091404ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)46502), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)239)))))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((var_15) ? (-75994232) : (((int) (!(((/* implicit */_Bool) var_11)))))));
    }
    for (int i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_2])), (var_9)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_0))) : (((arr_11 [i_2]) << (((((12278604509364082141ULL) / (((/* implicit */unsigned long long int) var_4)))) - (11783344924ULL)))))));
        arr_14 [14LL] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(arr_2 [i_2 + 4] [i_2 + 4])))), (((min((15545513131777060413ULL), (((/* implicit */unsigned long long int) (unsigned short)43982)))) - (((unsigned long long int) 18446744073709551604ULL))))));
        var_18 ^= ((((/* implicit */_Bool) 536870911ULL)) ? (((/* implicit */int) (short)9968)) : (((/* implicit */int) (unsigned char)13)));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) -7902111472698074188LL);
    }
    var_19 -= min((((((/* implicit */_Bool) 7902111472698074187LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12278604509364082141ULL)))))) : (0ULL))), (((/* implicit */unsigned long long int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
}
