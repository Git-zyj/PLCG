/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52073
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)-10)))) : (((/* implicit */int) var_1))))))))));
    var_14 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2810619889U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12750)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_2)))))))) : (var_4)));
    var_15 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_11)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_11))))), (min((223057329U), (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))))))))));
        var_17 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_12)))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
}
