/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223130
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
    var_11 *= ((/* implicit */short) var_2);
    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (max((((var_2) ? (((/* implicit */int) (short)27216)) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2016876699)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37372))) : (4084637878U)))), (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) 210329417U))))))) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)198)), ((short)-27231))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    var_14 = min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_10)) != (((((/* implicit */_Bool) -2016876699)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))))), ((signed char)-17));
}
