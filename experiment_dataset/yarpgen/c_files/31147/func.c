/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31147
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
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))) : (((var_12) & (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_13))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) max((min((1097714049706690856LL), (((/* implicit */long long int) (unsigned char)151)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_16))))));
        var_20 = ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)252)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_13)))) ? ((-(var_4))) : (((unsigned int) var_16))))) : ((~(((((/* implicit */long long int) 0)) & (var_12))))));
        var_21 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (1013192282U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)50700)))) << (((((arr_6 [i_1] [i_1]) + (306326414))) - (23))))) < (((/* implicit */int) max((((var_15) > (637381263U))), (arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)16);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) -1097714049706690857LL);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((arr_2 [i_2]) << (((((/* implicit */int) arr_9 [i_2])) - (1))))))));
    }
}
