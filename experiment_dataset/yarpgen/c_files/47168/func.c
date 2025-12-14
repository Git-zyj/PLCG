/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47168
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_1 [i_0])))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)-124)))))))));
        var_18 = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
        var_19 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37726))) : (-2511931347326740459LL)))) ? (26LL) : (33LL)))));
        arr_4 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 2511931347326740459LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (signed char)114);
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (min((((/* implicit */unsigned int) ((short) 853277550348629896ULL))), (((unsigned int) var_0))))));
    var_21 = ((/* implicit */unsigned long long int) var_4);
}
