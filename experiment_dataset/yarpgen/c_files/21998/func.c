/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21998
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((~(min((((/* implicit */long long int) (unsigned short)23704)), (-8784365260947950821LL))))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (var_9)))))));
        var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-2486211175518791202LL))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_5 [i_1]))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1])))))));
    }
    var_12 = var_9;
    var_13 = ((/* implicit */unsigned short) ((((var_4) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (var_2))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-13751), (((/* implicit */short) (_Bool)0)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (341134135) : (((/* implicit */int) (signed char)25))))), (min((((/* implicit */unsigned int) (unsigned char)106)), (var_2)))))));
}
