/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198901
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
    var_17 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) var_4)), (16ULL)))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max(((-(2775676581U))), (((/* implicit */unsigned int) ((int) (_Bool)1)))))) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 + 1]))))) < (((((/* implicit */_Bool) var_9)) ? (-6576156706737541872LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) 4294967278U)))))) : (((max((((/* implicit */unsigned long long int) var_6)), (17287809213829232236ULL))) >> (((((/* implicit */int) (short)-438)) + (448)))))));
        var_21 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) (signed char)-21)))))));
        var_22 ^= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) <= (((((/* implicit */_Bool) 1169637669)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_1 [i_0])))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) (short)-1888)), (arr_1 [i_0 - 1]))) + (max((((/* implicit */long long int) min((var_14), (((/* implicit */int) arr_0 [i_0]))))), ((~(arr_1 [i_0]))))))))));
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))), (18446744073709551613ULL)))) ? (((18446744073709551600ULL) + (((/* implicit */unsigned long long int) max((var_13), (var_5)))))) : (((/* implicit */unsigned long long int) (+(max((var_4), (((/* implicit */unsigned int) arr_4 [i_1 + 3])))))))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((_Bool) (-(arr_2 [i_1 + 2])))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
        arr_7 [i_2] = ((/* implicit */short) arr_0 [i_2]);
    }
}
