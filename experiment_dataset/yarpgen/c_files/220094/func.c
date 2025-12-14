/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220094
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)-18))));
        var_11 *= ((/* implicit */unsigned long long int) (unsigned char)221);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_1);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (18446744073709551603ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))), (min((((/* implicit */unsigned long long int) (unsigned char)46)), (10275898720005931244ULL)))));
        arr_7 [6ULL] = max((803918269U), (488361018U));
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_1]))));
    }
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_7))))) ? (min((((/* implicit */long long int) -1)), (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52145)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) 4015357393995485274LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)164))))), ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))))));
}
