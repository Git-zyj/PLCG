/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207546
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_0)), (((1377505366253937803ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) min((arr_3 [i_0]), ((~(arr_3 [i_0])))))) ? ((-(min((((/* implicit */unsigned int) var_9)), (126823449U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-32))))) / (max((((/* implicit */unsigned long long int) (_Bool)0)), (17069238707455613814ULL))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_2), (arr_2 [i_1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 17069238707455613814ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))), (288230376151711743LL)));
    }
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((short) var_4))))));
    var_17 = var_9;
}
