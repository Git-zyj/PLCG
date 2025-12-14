/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231564
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_0 [(signed char)9])) : (var_4)))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
        arr_3 [i_0] [6U] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 1])));
        arr_4 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)159))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    var_14 = (-(max(((-(var_4))), (((/* implicit */long long int) (-(456994647)))))));
    var_15 += (((!(((/* implicit */_Bool) ((((/* implicit */long long int) -2147483646)) ^ (var_0)))))) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_11)));
    var_16 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)98))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))) : (var_0))))));
}
