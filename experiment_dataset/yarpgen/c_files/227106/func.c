/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227106
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (-1917191784))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) -1142767474);
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)65)) ? (((arr_1 [i_0]) | (2475562742U))) : (arr_1 [i_0]))))));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))));
        var_12 = ((((((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])) >> (((((/* implicit */int) (unsigned char)239)) - (211))))) * ((~(((/* implicit */int) arr_4 [i_1] [i_1 + 1])))));
    }
    for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((arr_0 [i_2] [i_2]), (((/* implicit */unsigned int) arr_7 [i_2] [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31)) && (((/* implicit */_Bool) arr_1 [i_2])))))))) ? (max((((var_5) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_2])) <= (((/* implicit */int) (unsigned short)26313))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4611686018427387900ULL)))) ? (((unsigned int) arr_7 [i_2 + 2] [i_2 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))));
        var_14 = ((/* implicit */unsigned short) (+((~(min((3201298612U), (((/* implicit */unsigned int) (_Bool)1))))))));
        arr_9 [i_2] = ((/* implicit */short) var_8);
    }
    var_15 = ((/* implicit */unsigned long long int) var_9);
    var_16 -= ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
}
