/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52107
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
    var_14 -= ((((/* implicit */int) var_0)) * (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned char)99))) <= (((/* implicit */int) var_1))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)22)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (var_8)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */int) arr_0 [i_0 + 1])) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (149))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))))))));
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_10)) / (((/* implicit */int) arr_5 [i_2])))) << (((/* implicit */int) min((arr_4 [4U] [4U]), (arr_1 [i_1] [i_0 + 1])))))) * (min((((((/* implicit */int) var_6)) % (((/* implicit */int) (unsigned char)61)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [(signed char)5] [i_1])) <= (((/* implicit */int) var_7)))))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1]))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (((((/* implicit */_Bool) (short)-29853)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (1307258928)))) : (((/* implicit */int) ((_Bool) (signed char)-18))))) : (((/* implicit */int) var_7))));
}
