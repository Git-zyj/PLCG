/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214437
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
    var_14 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))) : (7597114805994802996ULL)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)-112)))))) : ((((_Bool)0) ? (min((((/* implicit */long long int) (_Bool)1)), (var_5))) : (((/* implicit */long long int) ((arr_0 [(_Bool)1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(var_1)))), ((~((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_1])), (3856520111U)))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_4 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */int) arr_6 [i_1] [i_1]))));
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_0))))))), ((-(((arr_5 [i_1] [i_1]) ? (1399184499U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (((max((((/* implicit */long long int) var_0)), (var_10))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))))));
}
