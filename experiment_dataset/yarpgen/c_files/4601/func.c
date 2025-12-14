/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4601
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)248)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-1)))))), (((((((min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)224)))) + (2147483647))) + (2147483647))) >> (((((((/* implicit */int) (short)19546)) | (((/* implicit */int) (unsigned char)199)))) - (19677)))))));
    var_21 = ((((var_14) ^ ((-(18446744073709551615ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 11150663353260300988ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (arr_4 [i_1] [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_4 [i_1] [i_0]))) > (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((1404259976663639838LL), (((/* implicit */long long int) (unsigned short)1920))))) ? (min((arr_1 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((var_15), (var_15)))))), (((/* implicit */unsigned long long int) var_19)))))));
                var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) (unsigned short)1927))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (2791535725202671686ULL) : (arr_5 [17ULL] [17ULL] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) & (min((((arr_4 [i_0] [(short)13]) ^ (((/* implicit */unsigned long long int) -703129936726324214LL)))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))));
                var_24 *= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((491634329) / (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (min((((/* implicit */unsigned int) var_19)), (var_3)))))) : (((5196859167298644414ULL) >> (((10674598715129778588ULL) - (10674598715129778558ULL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_25 -= ((/* implicit */int) (((!(((/* implicit */_Bool) ((int) 18446744073709551615ULL))))) || (((/* implicit */_Bool) ((short) ((int) arr_3 [(signed char)6] [i_2]))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2])))) + ((+(((/* implicit */int) arr_2 [i_2]))))));
    }
}
