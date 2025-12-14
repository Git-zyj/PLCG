/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215747
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
    var_15 = ((/* implicit */unsigned char) var_9);
    var_16 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) (unsigned short)9235)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))), ((-(((((/* implicit */int) var_4)) | (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22326))) : (arr_8 [i_0] [i_1] [i_2])))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22326)))))) ? (((/* implicit */int) var_8)) : (((int) var_0))))) ? (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (var_14))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) (unsigned short)43200)))))) - (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 4103074624U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9223372036854775801LL)))))));
}
