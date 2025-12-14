/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200841
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
    var_20 = ((/* implicit */signed char) ((1338403882U) << (((/* implicit */int) ((((((/* implicit */_Bool) (short)21617)) ? (((/* implicit */unsigned long long int) -7325759336223116871LL)) : (0ULL))) != (((var_10) >> (((((/* implicit */int) (signed char)115)) - (68))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((arr_1 [i_0]), ((short)1))))));
        arr_4 [8ULL] &= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) < (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_2))))) ? (((((/* implicit */int) (unsigned char)48)) + (((/* implicit */int) arr_1 [i_0])))) : (var_18)))));
    }
    var_22 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) <= (1149577677246793213ULL)))) / (min((var_18), (((/* implicit */int) (unsigned char)10)))))))));
}
