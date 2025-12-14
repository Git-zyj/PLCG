/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218897
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
    var_16 = ((/* implicit */unsigned short) min(((-((~(((/* implicit */int) var_11)))))), ((-(((/* implicit */int) var_3))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((min((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)13288)))), ((+(((/* implicit */int) (unsigned char)13)))))), ((+(((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) var_11)))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((short) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))), (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) (signed char)22))), (((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) | (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
    }
}
