/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224544
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) min(((+(((unsigned int) var_17)))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_19 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_16), (max((arr_1 [i_0]), (((/* implicit */int) (signed char)121))))))), (max((((18345428370926597576ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)0)), (var_14))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 101315702782954028ULL))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) arr_3 [i_0])), (1039647227U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((short) arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_22 += ((/* implicit */short) ((-2132998401) / (-1832045247)));
        var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) (signed char)-113))), ((+(((((/* implicit */_Bool) 908128708U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15587))) : (3801942084U)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((short) var_6)));
    }
    var_24 &= ((/* implicit */short) var_10);
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (101315702782954020ULL)));
    var_26 = ((/* implicit */unsigned int) (short)(-32767 - 1));
}
