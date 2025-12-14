/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239375
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) (_Bool)1)), (33423360U))))))));
    var_17 = ((var_11) & (((/* implicit */unsigned int) var_8)));
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)193));
                var_20 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) >= (var_0)))), (max((4294967295U), (((/* implicit */unsigned int) var_13))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5931265062732754921LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (2357068802U)))) ? (((((/* implicit */_Bool) (unsigned short)45118)) ? (33423360U) : (4261543936U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-8420439015285648788LL) <= (1584470676551380004LL))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22276)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_1])))))));
                var_21 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) + (min((((/* implicit */long long int) 1057512250)), (arr_3 [i_0] [i_0] [i_0]))));
                var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (short)29128)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (arr_1 [i_0]))))))), (((((/* implicit */_Bool) -5931265062732754922LL)) ? (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))))));
            }
        } 
    } 
}
