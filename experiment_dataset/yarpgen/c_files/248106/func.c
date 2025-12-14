/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248106
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
    var_15 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-5655970397992731726LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0 - 1])) ? (((/* implicit */int) arr_2 [8U] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) != (((3032216756805675649LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2])))));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (short)15937)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))), (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23603))) : (10U)))))) : (-5655970397992731710LL)));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((+(((/* implicit */int) (unsigned short)38207)))) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_1 [9LL])))))))), (min(((-(arr_4 [i_1] [i_1]))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))))));
        var_18 = 5569589969564331048ULL;
        arr_6 [0U] [0U] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [(short)2]))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -5655970397992731740LL)) ? (3547687538U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))) : (((unsigned int) arr_4 [i_1] [i_1]))));
    }
    for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_8 [i_2 - 1]) <= (arr_8 [i_2 - 1]))))));
        var_21 *= ((/* implicit */unsigned char) arr_7 [i_2]);
    }
    var_22 = ((/* implicit */unsigned int) var_4);
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -4655658142794726460LL)) != (var_9)))), ((-(9855902310236829395ULL))))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)15917)) ? (17052679187509562372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((min((-6226297759053246141LL), (((/* implicit */long long int) 4294967276U)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))))))));
}
