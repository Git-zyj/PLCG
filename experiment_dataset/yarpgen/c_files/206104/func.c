/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206104
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) & (((/* implicit */int) (_Bool)1)))))));
        arr_2 [(short)9] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) var_14)) : (((unsigned int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) (~(((unsigned int) (unsigned char)218))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2783428274U)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2003031969U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) : (18446744073709551590ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) max((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1] [i_1 - 2])))))));
        arr_7 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_1 - 3]), (arr_1 [i_1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1 + 1])))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 - 4])))));
    }
    var_24 -= ((/* implicit */unsigned char) var_15);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)166)) | (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3199750579U)));
    var_26 |= ((/* implicit */unsigned short) ((min((var_3), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) <= (((/* implicit */unsigned long long int) 2147483643))));
    var_27 |= (~(max((var_5), (((/* implicit */unsigned long long int) var_6)))));
}
