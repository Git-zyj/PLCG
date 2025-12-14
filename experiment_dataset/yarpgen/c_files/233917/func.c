/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233917
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (short)255)), (16824304461584668581ULL))), (1622439612124883038ULL)))) ? (max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16824304461584668581ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-23688))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
    var_16 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1399491544043757077LL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_17 = 1649217809U;
        arr_2 [i_0] = ((((/* implicit */_Bool) 1399491544043757077LL)) || (((/* implicit */_Bool) 1622439612124883056ULL)));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned char) arr_3 [i_1])))))));
        arr_5 [18U] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)192)) || (((/* implicit */_Bool) var_10)))))) > (var_8))))));
        var_19 = min((min((arr_4 [3U] [3U]), (((/* implicit */unsigned char) (signed char)-79)))), (((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned short) arr_4 [i_1] [(_Bool)1])), ((unsigned short)20948))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (signed char)119);
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)130))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 1]))) : (1399491544043757079LL)));
    }
    for (short i_3 = 3; i_3 < 10; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) min(((unsigned char)166), (((/* implicit */unsigned char) (signed char)-117))))), (min((((/* implicit */unsigned int) (_Bool)0)), (var_12))))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)101))))))));
        arr_14 [i_3] [i_3 + 1] = ((/* implicit */unsigned int) var_1);
    }
    var_22 -= ((/* implicit */signed char) ((short) var_5));
}
