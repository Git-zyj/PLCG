/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51537
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
    var_17 = var_1;
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -4450116401248102583LL)) && (((/* implicit */_Bool) (unsigned char)233)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-32765)))))) && (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)32761)))) && (((((/* implicit */_Bool) (unsigned short)65521)) && (((/* implicit */_Bool) var_3)))))))))));
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_14)) | (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) (_Bool)0)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) * (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((var_14) * (((/* implicit */unsigned int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */long long int) max((arr_2 [i_0]), (((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) arr_2 [17LL])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)32758)))))))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)219))))));
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_6)) | (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)-32753))))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (arr_6 [6])))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)32787)) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) var_9)))), (arr_5 [i_1 - 1])))) ? (((/* implicit */int) ((unsigned char) min((var_14), (((/* implicit */unsigned int) (unsigned char)0)))))) : ((+(((/* implicit */int) var_5))))));
        var_23 += ((/* implicit */unsigned short) arr_6 [5]);
        var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28606))) ^ (arr_6 [i_1])))) ? (arr_6 [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (arr_5 [i_1])))))), (((/* implicit */unsigned int) var_10))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (var_16) : (((/* implicit */unsigned long long int) var_2))));
}
