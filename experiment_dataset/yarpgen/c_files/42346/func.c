/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42346
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 |= 18446744073709551596ULL;
        var_11 = ((/* implicit */unsigned short) min((((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))) : (-15LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -4)) - (0LL)))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)0)), (2ULL)));
        arr_2 [i_0] = var_7;
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0])))))) != (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) var_3)) : (var_4)))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_14 += ((/* implicit */int) min((max((((/* implicit */unsigned long long int) 1266008367012698732LL)), (max((var_9), (((/* implicit */unsigned long long int) (unsigned char)231)))))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-27)))) - ((+(((/* implicit */int) var_0))))))) ? (max((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) max(((signed char)-83), (((/* implicit */signed char) (_Bool)0))))))) : (((/* implicit */int) arr_3 [i_1 + 1]))));
        var_17 = max((18198777034762355339ULL), (((/* implicit */unsigned long long int) ((arr_4 [i_1 + 2] [i_1 + 2]) ? (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_1 + 2] [i_1 + 2])), (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))) : (9223372036854775796LL))))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)5367))))))))));
        var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [i_2]) : (var_3)))));
    }
    var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) - (var_4)))))) ? (min((((/* implicit */unsigned int) var_1)), (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)0))))), (min((((/* implicit */unsigned int) var_2)), (var_7)))))));
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
