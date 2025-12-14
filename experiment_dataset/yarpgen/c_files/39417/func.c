/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39417
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), (((var_8) << (((max((11942021638180837687ULL), (((/* implicit */unsigned long long int) 8U)))) - (11942021638180837671ULL))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_14 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_0) && (((/* implicit */_Bool) var_7))))), (max((var_7), (10275029033832662527ULL)))));
                    var_15 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (16388974103331213296ULL) : (((/* implicit */unsigned long long int) 2102781422)))), (max((((/* implicit */unsigned long long int) (unsigned short)64454)), (var_7)))));
                    var_16 = max((max((max((13267789025963440810ULL), (((/* implicit */unsigned long long int) (signed char)15)))), (((/* implicit */unsigned long long int) (unsigned char)80)))), (var_10));
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) var_3)) ? (max((var_7), (((((/* implicit */_Bool) (signed char)-16)) ? (9679715256640393213ULL) : (((/* implicit */unsigned long long int) -623584546)))))) : (((/* implicit */unsigned long long int) var_5)));
    var_18 = ((/* implicit */signed char) min((var_5), (((/* implicit */long long int) (_Bool)1))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_6))));
}
