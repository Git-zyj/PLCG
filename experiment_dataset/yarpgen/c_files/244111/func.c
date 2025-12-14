/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244111
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
    var_16 = ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)15972)), (9578526668288674557ULL)))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_13) : (-1156077273220472762LL)))) ? (min((var_13), (var_12))) : (max((-7589278985558267559LL), (((/* implicit */long long int) var_9)))))))));
        arr_4 [(short)13] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)38))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 99222920U))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)20473))))) : (min((-1156077273220472747LL), (((/* implicit */long long int) arr_0 [i_0])))))));
    }
}
