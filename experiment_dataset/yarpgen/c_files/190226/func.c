/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190226
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
    var_16 = var_1;
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)41200)) % (((/* implicit */int) (unsigned char)65))));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)191), ((unsigned char)28))))) : (((long long int) (unsigned char)228)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            var_19 += ((/* implicit */unsigned short) ((arr_1 [i_0 + 3] [i_0 + 2]) + (((/* implicit */unsigned long long int) arr_3 [4U] [i_1 - 2]))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) * (arr_0 [i_1 - 2] [i_1])));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1693207155192859530LL)) ? (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)6])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) ((562902263884036373ULL) < (arr_0 [(short)11] [i_1 - 1]))))));
        }
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58012))) - (arr_3 [i_0] [i_0]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)86)) : (-10)));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) / ((-(-3771830276030295818LL))))))))));
        arr_8 [i_2] = max((((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2])))))), (((((/* implicit */_Bool) 16879660477136442495ULL)) ? (((/* implicit */int) arr_5 [i_2] [3LL])) : (((/* implicit */int) arr_5 [i_2] [i_2])))));
    }
}
