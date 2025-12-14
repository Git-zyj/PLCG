/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236060
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min(((unsigned short)35395), (((/* implicit */unsigned short) (unsigned char)14))))) ? (min((5570291518993270924LL), (((/* implicit */long long int) arr_1 [0ULL] [i_0])))) : (234883680620367654LL)))))));
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_2 [4ULL] [i_0 - 1])) ? (arr_2 [(_Bool)1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1]))))))));
        var_19 &= min((((/* implicit */unsigned long long int) (-(arr_0 [i_0 - 1])))), (arr_2 [2U] [2U]));
        var_20 -= ((/* implicit */unsigned int) min((arr_2 [(unsigned char)10] [(unsigned char)10]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 293389326U)) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (signed char)69)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) : (max((((/* implicit */unsigned long long int) (signed char)28)), (11ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_13)) : (-2147483645)))) - (arr_5 [i_1] [i_1])))) : (min((234883680620367654LL), (((/* implicit */long long int) 4001577958U))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21057))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((arr_4 [i_1] [i_1]) | (arr_4 [i_1] [i_1])))));
        arr_7 [(short)5] = ((/* implicit */_Bool) max(((-(arr_5 [i_1] [i_1]))), (((/* implicit */unsigned int) min((((arr_4 [i_1] [i_1]) > (arr_4 [i_1] [i_1]))), ((!(((/* implicit */_Bool) var_9)))))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) (signed char)-96)) ? (2117794212) : (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_11))));
    var_23 = var_9;
}
