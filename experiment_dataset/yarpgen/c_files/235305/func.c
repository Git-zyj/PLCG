/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235305
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2825126476U)) ? (((/* implicit */int) arr_1 [9ULL])) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_2)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) (unsigned short)58141)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)7394)))) : (((((/* implicit */_Bool) 602739778U)) ? (arr_0 [i_0]) : (var_17)))));
    }
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (var_9))))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (var_14))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((unsigned char)97), (((/* implicit */unsigned char) var_18))))), (((((/* implicit */_Bool) var_9)) ? (3776495744363657167LL) : (((/* implicit */long long int) 3692227535U)))))))));
}
