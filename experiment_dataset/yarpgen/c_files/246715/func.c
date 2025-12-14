/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246715
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
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21934)) ? (((/* implicit */int) (short)507)) : (((/* implicit */int) (short)-21935))))) ? (((/* implicit */int) (short)-21923)) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_0))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))) ? ((((!(((/* implicit */_Bool) (signed char)16)))) ? (((/* implicit */int) (short)-507)) : (((/* implicit */int) var_7)))) : (max((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32767)) - (32754))))), ((-(((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
        var_17 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned char) arr_3 [i_1]))))), (arr_4 [i_1 + 1])))) : (((/* implicit */int) arr_3 [i_1]))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_19 += ((/* implicit */signed char) (((((+(((/* implicit */int) (short)-507)))) + (2147483647))) << (max((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) (_Bool)1))))))));
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-21934)))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((_Bool) ((unsigned short) (short)21913))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(arr_10 [i_3] [i_1])))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) | (4294967295U))))))));
            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (arr_11 [i_1] [i_1 - 1] [i_1 + 1]))) : (((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
        }
        for (signed char i_4 = 4; i_4 < 17; i_4 += 3) 
        {
            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 1406047370)) || (((/* implicit */_Bool) -2313743691716053971LL))))), ((unsigned char)8)));
            var_22 -= ((/* implicit */short) (~(((/* implicit */int) ((signed char) 13001178077522420013ULL)))));
            arr_15 [i_1] [12U] = (i_1 % 2 == zero) ? (((arr_6 [i_1]) * (((min((arr_6 [i_1]), (((/* implicit */int) (short)0)))) * ((-(((/* implicit */int) (short)-32767)))))))) : (((arr_6 [i_1]) / (((min((arr_6 [i_1]), (((/* implicit */int) (short)0)))) / ((-(((/* implicit */int) (short)-32767))))))));
        }
        arr_16 [4LL] &= ((/* implicit */unsigned short) arr_9 [i_1]);
    }
    var_23 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) & (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15946))) : (max((9223372036854775807LL), (((/* implicit */long long int) var_11)))))))));
}
