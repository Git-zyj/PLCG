/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236045
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
    var_15 -= ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8973)) ^ (((/* implicit */int) (unsigned short)54046))))), (max((var_8), (var_2))))) % (((unsigned int) min((var_1), (((/* implicit */int) (unsigned char)246))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) (unsigned short)56563))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_0 - 3])))) : (arr_2 [i_0 - 2])));
        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)8988)) ? (17196242) : (((/* implicit */int) (short)896)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
    }
}
