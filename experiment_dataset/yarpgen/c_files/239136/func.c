/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239136
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [14LL]))) ? (((arr_0 [i_0] [i_0]) & (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (short)-32759))))))) ? (((/* implicit */unsigned long long int) max((((unsigned int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)144)), (var_2)))) | (max((arr_1 [(signed char)14]), (((/* implicit */unsigned long long int) var_3))))))));
        var_11 = ((/* implicit */signed char) ((unsigned char) ((int) arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [6LL])), (var_2)))) < ((-(arr_1 [i_0]))))))) < (var_2)));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) ((arr_1 [i_1]) + (((/* implicit */unsigned long long int) var_7))))));
        var_14 = ((/* implicit */long long int) min((((arr_1 [i_1]) * (arr_1 [i_1]))), (((/* implicit */unsigned long long int) var_2))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_2)))))) ? (max((((unsigned long long int) (_Bool)0)), (((/* implicit */unsigned long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((((/* implicit */_Bool) 4294967295U)) ? (7081299718890458327LL) : (((/* implicit */long long int) arr_0 [i_1] [i_1]))))))) >= (arr_3 [i_1])));
        var_15 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_0 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_0)) >> (((var_5) - (4241793062U))))), (((/* implicit */int) (_Bool)1))))) >= (4294967279U)));
        arr_9 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_2]))))), (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (2220228709776963487ULL)));
        var_17 &= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_3 [i_2])))));
        var_18 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_2])))) ? (((int) ((var_8) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65530)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) -7081299718890458305LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37264))) : (var_2)))))));
    var_20 = ((/* implicit */signed char) ((int) var_5));
}
