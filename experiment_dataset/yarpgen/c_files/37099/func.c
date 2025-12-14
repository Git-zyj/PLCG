/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37099
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
    var_12 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) (+(1225899711)))) : (min((((/* implicit */long long int) var_10)), (var_0)))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)7270)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7266)))))))) ? ((-(arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-7280))))) ? ((~(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (short)7270)))))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7270)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7250))) : ((((_Bool)0) ? (9815064025575141374ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7270))))) ? (((((/* implicit */_Bool) 9815064025575141375ULL)) ? (((/* implicit */int) arr_4 [i_1])) : (arr_2 [i_1]))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_4 [i_1]))))))) : ((+(((((/* implicit */_Bool) 8631680048134410247ULL)) ? (arr_0 [i_1] [9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */unsigned char) arr_3 [i_1])))))))), (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (max((9815064025575141374ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_1]))));
    }
}
