/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32298
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_1), ((short)23606)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (11620556572923214496ULL) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)185))))) / (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(arr_2 [i_0]))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11538515920096004120ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)24))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [(_Bool)1])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) var_13))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))), ((-(0ULL)))))));
        var_23 = ((/* implicit */_Bool) ((long long int) min(((short)-23632), (((/* implicit */short) (unsigned char)172)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(unsigned short)24] [i_2 + 1])) ? (arr_4 [(short)4] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_25 = var_16;
    }
    var_26 = ((/* implicit */unsigned short) var_15);
    var_27 = ((/* implicit */_Bool) var_16);
    var_28 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23628))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_13))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_19)))) && ((!(((/* implicit */_Bool) var_8))))))))));
}
