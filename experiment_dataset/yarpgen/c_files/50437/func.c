/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50437
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
    var_10 = ((/* implicit */short) min((((((/* implicit */_Bool) (((_Bool)0) ? (4798453103709107207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) var_3))))) : (min((var_4), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) var_0))));
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((long long int) var_6)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((var_5), (((/* implicit */unsigned short) (unsigned char)227)))))) ? (((/* implicit */int) ((unsigned char) min((arr_2 [i_0]), (((/* implicit */int) (short)32767)))))) : (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)18888)) : (((/* implicit */int) (unsigned short)46657)))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_12 = min((((((/* implicit */_Bool) var_5)) ? (min((1005420561434946646ULL), (((/* implicit */unsigned long long int) (signed char)77)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)12476)))))))), (((/* implicit */unsigned long long int) max((max((arr_2 [i_0]), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)208)), ((unsigned short)18892))))))));
        arr_4 [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (unsigned char)249)), (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) : (2305843009213693951ULL))))), (max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (unsigned short)27649))))), (min((2305843009213693951ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
    }
}
