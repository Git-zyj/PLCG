/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219640
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))));
    var_19 = ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_9)))) != (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) 0ULL)) ? (((3LL) ^ (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_11))));
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0])))) ^ ((~(((/* implicit */int) arr_0 [i_0])))))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))))) - (10815)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0])))) ^ ((~(((/* implicit */int) arr_0 [i_0])))))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))))) - (10815))) - (17656))))));
        var_21 |= ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) var_6)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_22 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned char)55)))), (((/* implicit */int) min((arr_1 [(unsigned char)8]), (((/* implicit */unsigned short) var_7)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_17), (((/* implicit */short) var_15)))))))) ? ((-(((/* implicit */int) arr_7 [i_1])))) : ((-(((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */unsigned char) (signed char)-49)))))))));
        var_24 = ((/* implicit */long long int) max((((/* implicit */int) var_15)), ((+(((/* implicit */int) arr_7 [i_1]))))));
        var_25 = ((/* implicit */unsigned int) (((~((~(var_5))))) << (((/* implicit */int) var_15))));
    }
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
}
