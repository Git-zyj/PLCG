/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26288
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
    var_20 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (~(var_7)))) ? (((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((int) var_16))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 62914560ULL)) ? (var_17) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
    var_22 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))) & (((/* implicit */unsigned long long int) (~(min((var_7), (((/* implicit */unsigned int) var_5)))))))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 134217664U))))), (var_18))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)114)) ? (62914554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_1 - 2] [i_0 - 3] [6U]), (arr_2 [i_1 + 2] [i_0 + 2] [i_2])))))));
                    arr_10 [(_Bool)1] [(short)0] [10ULL] = ((/* implicit */unsigned long long int) (~((-(((-1890312343) / (((/* implicit */int) (short)8422))))))));
                }
            } 
        } 
    } 
}
