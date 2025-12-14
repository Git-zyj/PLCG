/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228864
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)251)) / (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [11ULL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_1 [i_0]))))) ? (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [(signed char)10])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)5454))))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1)))))))), (max((max((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned short)60081)))), (((/* implicit */unsigned int) var_1))))));
    }
    var_16 = ((/* implicit */unsigned char) min((var_16), (var_3)));
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    var_18 = ((/* implicit */int) var_12);
}
