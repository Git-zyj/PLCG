/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213649
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)3)) + (((/* implicit */int) (short)0))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) (short)19)))) : (((/* implicit */int) ((short) (unsigned short)0))))), (((((((/* implicit */int) (unsigned short)21378)) << (((-1) + (5))))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (5)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5))))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41746)) && (((/* implicit */_Bool) (unsigned short)23789)))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-27018)), ((unsigned short)41747)))), (var_7)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)12)))))), (((var_14) >> (((((((/* implicit */int) (signed char)102)) >> (((/* implicit */int) (unsigned short)0)))) - (77)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20)) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (short)2))))) / (min((((((/* implicit */_Bool) 3965700780U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))))), (((/* implicit */unsigned long long int) 3965700784U))))));
        var_19 = ((/* implicit */signed char) ((_Bool) ((((((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) var_1)))) + (2147483647))) << (((((unsigned long long int) (unsigned char)255)) - (255ULL))))));
    }
    var_20 = ((/* implicit */short) ((_Bool) var_2));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min(((~(6127663038411806599ULL))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)27))))))))));
    var_22 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned int) ((short) (short)1023)))));
}
