/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218068
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
    var_13 = ((/* implicit */unsigned short) ((long long int) var_9));
    var_14 -= ((/* implicit */unsigned long long int) var_6);
    var_15 -= min((max((((/* implicit */unsigned short) (unsigned char)31)), ((unsigned short)11478))), ((unsigned short)54927));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((max((((((-578829952) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0])) - (19878))))), (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0])))))));
        var_17 *= ((/* implicit */short) min((((/* implicit */unsigned short) var_11)), (max((arr_3 [i_0]), (arr_3 [i_0])))));
        var_18 = min((((/* implicit */unsigned long long int) (+(arr_0 [i_0])))), (min((((((/* implicit */_Bool) 578829952)) ? (12099054753994642763ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (signed char)-64)))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) & (3488494033282206300ULL))))));
        var_20 ^= min((((/* implicit */long long int) min((22407664), (((/* implicit */int) ((short) (short)(-32767 - 1))))))), (max((min((arr_0 [i_0]), (-7424580321869284141LL))), (arr_0 [i_0]))));
    }
}
