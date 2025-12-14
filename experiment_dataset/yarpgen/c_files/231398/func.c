/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231398
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (-2388143590621077780LL) : (((/* implicit */long long int) -1314487655))))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)100)))) / (max((var_6), (var_6)))))) >= (max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -777412361849335706LL)) ? (((/* implicit */int) var_14)) : (var_7))))))));
    var_19 = min((((/* implicit */unsigned int) -613892567)), (((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) >> (((var_11) - (2237792324435838731ULL)))))) ? (((var_1) ^ (((/* implicit */unsigned int) 221208476)))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_13)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (2147483647) : (((/* implicit */int) (short)3))))) ? (min((((/* implicit */int) var_5)), (arr_1 [i_0]))) : (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_1 [i_0])))) ? (max((-1635447901), (-613892567))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_1 [i_0])))));
    }
}
