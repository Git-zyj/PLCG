/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217350
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
    var_14 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) max(((short)1439), (((/* implicit */short) var_11))))))));
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */long long int) -1232443795)) > (var_4)))))), (((((/* implicit */int) ((14992663975466119394ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1435)))))) + (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) (+(((arr_5 [i_1 - 3]) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (142)))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)33), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_1 - 4]), (arr_2 [i_0]))))) : (max((((/* implicit */long long int) -1953598126)), (var_4)))))) ? ((+(max((var_8), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0]))))))));
                arr_6 [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)26005))))) && (((((((/* implicit */int) (signed char)112)) / (((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) (unsigned char)112))))));
                var_19 = ((/* implicit */signed char) min(((~(-1798289834471305648LL))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-17930))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) >= (max((((((/* implicit */_Bool) var_6)) ? (var_12) : (var_12))), (((/* implicit */long long int) var_6))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) var_12)))) ? (var_13) : (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_6) : (var_13))) > (((var_2) ? (((/* implicit */int) (short)-17919)) : (var_9)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-20538)), (14906777763398988820ULL)))) ? (((/* implicit */int) max(((unsigned char)83), (((/* implicit */unsigned char) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) 16569422359587453086ULL)) || (((/* implicit */_Bool) var_4)))))))));
}
