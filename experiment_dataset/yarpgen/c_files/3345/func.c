/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3345
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)9044)) : (((/* implicit */int) (signed char)107))));
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned long long int) 1810836981U);
    }
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)107)), ((short)-11495)))) ? (((/* implicit */int) max(((signed char)116), ((signed char)-118)))) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */long long int) max((var_4), (((/* implicit */int) var_5))))) : (max((var_8), (((/* implicit */long long int) (short)11482))))));
}
