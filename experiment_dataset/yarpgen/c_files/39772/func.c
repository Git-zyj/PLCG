/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39772
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
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((var_13) << (((131071U) - (131040U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-36)) + (40))))))))));
    var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_15)))))) + (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))))) ? (((((/* implicit */int) ((((/* implicit */int) (short)-16250)) >= (((/* implicit */int) (short)-25636))))) | (((((/* implicit */int) (unsigned short)65531)) & (((/* implicit */int) (short)-1)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)14725))))) ? (((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_6)) + (11609))) - (21))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-54)) + (2147483647))) >> (((/* implicit */int) (unsigned short)21))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1284450380U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))))) : (15409475920214000450ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61054)))))))));
        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) || (((/* implicit */_Bool) arr_0 [i_0])))))) <= (((var_16) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_18)) & (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)17860)))) : ((+(((/* implicit */int) (unsigned char)229)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (short)-1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((var_8) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_0])))) / (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)11))))))) >> (((((((((/* implicit */int) (unsigned char)128)) > (((/* implicit */int) arr_1 [4U])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_11)))))) + (3)))));
    }
}
