/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222309
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
    var_18 = ((/* implicit */short) ((min((min((7365319649166783836LL), (((/* implicit */long long int) (signed char)-64)))), (((/* implicit */long long int) max((var_4), (((/* implicit */int) (unsigned short)65535))))))) > (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-((((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
    }
    var_20 = ((/* implicit */int) var_9);
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (2147483647)))) ? (((((/* implicit */unsigned int) var_6)) & (var_14))) : (((/* implicit */unsigned int) ((int) var_5)))))) == (min((((/* implicit */long long int) (_Bool)0)), (max((-7365319649166783836LL), (((/* implicit */long long int) var_15))))))));
}
