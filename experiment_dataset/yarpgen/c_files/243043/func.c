/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243043
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
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) var_4)) ? (65534) : (65534))) : (max((65534), (((/* implicit */int) (unsigned char)15))))))), (max((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) var_13)), (-392131166013411998LL)))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (_Bool)0);
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((arr_1 [i_0]) <= (((((/* implicit */_Bool) 1352516966U)) ? (min((arr_1 [i_0 - 2]), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) > (((/* implicit */int) var_8))))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [0U] = ((/* implicit */short) ((((/* implicit */long long int) min((var_15), (1252224073)))) > (max((arr_1 [i_1]), (arr_1 [i_1])))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25843))) <= (18446744073709551608ULL))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)11]))) < (2942450318U)))) : (((/* implicit */int) (unsigned char)207))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)207)))), (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))))))) : (((((/* implicit */_Bool) ((-9223372036854775806LL) + (((/* implicit */long long int) 2942450318U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (short)-1287))))) : (341368642752657593ULL)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (max((((/* implicit */long long int) 1252224089)), (min((arr_1 [i_2]), (((/* implicit */long long int) 1252224062)))))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-115))))) & (((/* implicit */int) var_6)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) arr_5 [i_2]);
        var_20 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) > (((/* implicit */int) (unsigned short)48424))))), (min((var_0), (((/* implicit */unsigned long long int) var_5)))))) >> (((/* implicit */int) (unsigned char)32))));
        arr_12 [6U] &= 18105375430956894022ULL;
    }
}
