/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31005
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 -= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1884396198)), (3177639321U)))) && (((/* implicit */_Bool) min((17715537522140814330ULL), (((/* implicit */unsigned long long int) var_5)))))))), ((unsigned char)254)));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) var_13))), (((((/* implicit */_Bool) 2087479219U)) ? (min((0ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_9)))))))));
    }
    var_17 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)103)) - (var_2)))) ? (max((((/* implicit */int) (signed char)73)), ((-2147483647 - 1)))) : (var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_1 - 1] = (!(((/* implicit */_Bool) ((unsigned char) (-2147483647 - 1)))));
    }
    var_19 = (((~(max((var_14), (0ULL))))) * (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -84594017)))), (((/* implicit */long long int) 1492585662))))));
}
