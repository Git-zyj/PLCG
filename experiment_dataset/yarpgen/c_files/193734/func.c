/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193734
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
    var_14 -= ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) ((unsigned int) (unsigned short)65535))), (((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    var_15 = (+(((long long int) ((((/* implicit */_Bool) 403415469U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (9669060765352062137ULL)))));
    var_16 = ((/* implicit */short) ((var_9) < (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) var_5);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0 - 4]))));
    }
    var_18 = ((/* implicit */short) ((signed char) max((var_8), (((/* implicit */unsigned short) var_1)))));
}
