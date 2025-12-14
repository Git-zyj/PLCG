/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225290
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((int) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)50249)) : (((/* implicit */int) (unsigned char)14)))))));
        arr_2 [(unsigned char)1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(short)6]);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
        arr_8 [i_1] = (!(((/* implicit */_Bool) (+(arr_4 [i_1])))));
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)24488))))) : (max(((~(arr_4 [i_1]))), (((/* implicit */long long int) max((arr_6 [i_1] [(short)18]), (arr_5 [i_1] [i_1]))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) max((min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) arr_6 [19ULL] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)15299)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)211))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_15 [i_2] [i_2] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))), (max((((((/* implicit */_Bool) 5602984070859905013ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2]))) : (var_17))))));
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_16);
        arr_17 [(short)7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((arr_11 [i_2]) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_1)) : (var_14))))), (((/* implicit */unsigned long long int) var_13))));
}
