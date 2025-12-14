/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204957
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
    var_18 = var_14;
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (var_10))))))), (((short) max((((/* implicit */unsigned short) var_11)), (var_13))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (signed char)105);
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)100))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)13])) | (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5736))) : (arr_2 [i_0]))))))));
    }
}
