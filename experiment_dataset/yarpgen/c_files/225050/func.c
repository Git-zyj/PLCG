/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225050
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
    var_20 = ((/* implicit */unsigned short) ((((max(((_Bool)1), (var_8))) ? ((+(var_16))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (var_18)))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_15)))))))), ((+(((((/* implicit */_Bool) (short)-21297)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_18), (((/* implicit */int) var_10))))) ? (var_7) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_17))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) (unsigned char)43)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_8)))))) != (arr_1 [i_1 - 2] [i_1 + 1]))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((arr_1 [i_1 - 2] [(short)15]) >> (((var_16) - (1311629089U))))), (((/* implicit */unsigned long long int) (-(var_18)))))))));
            }
        } 
    } 
}
