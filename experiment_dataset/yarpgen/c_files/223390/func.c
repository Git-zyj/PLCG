/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223390
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_16)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)));
    var_20 = (((!(((/* implicit */_Bool) ((((var_15) + (9223372036854775807LL))) << (((var_9) - (240715531)))))))) ? (((((/* implicit */int) ((var_9) > (((/* implicit */int) var_14))))) >> (((var_5) - (3171190213U))))) : (((/* implicit */int) var_2)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) << (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0] [i_0])), (var_2))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (min((min((((/* implicit */unsigned long long int) var_10)), (2959169157714107616ULL))), (((/* implicit */unsigned long long int) (+(var_9))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((long long int) (unsigned char)98))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((long long int) arr_2 [i_1])), (((/* implicit */long long int) var_9))))) % (var_4)));
        var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_1])), (arr_6 [i_1] [i_1])))) >= ((-(((/* implicit */int) (_Bool)1)))))));
    }
}
