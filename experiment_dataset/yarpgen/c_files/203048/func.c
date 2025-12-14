/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203048
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (signed char)47)), ((short)28798)))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_3)))))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(min((var_19), (var_7)))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-28799))))), (((((/* implicit */_Bool) var_13)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))))))))));
    var_22 = ((/* implicit */signed char) 13966864345259550148ULL);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 4224101381U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) (signed char)-67)))) | ((~(((/* implicit */int) ((short) var_12)))))));
                    var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4479879728450001468ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (70865922U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : ((+(4224101379U)))))));
                }
            } 
        } 
    } 
}
