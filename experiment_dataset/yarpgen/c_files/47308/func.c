/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47308
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -769814791107265289LL)))) && (((/* implicit */_Bool) var_4))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (-8663713658957092275LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) || (((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (signed char)-86))))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((-1152507156) <= (((/* implicit */int) (_Bool)0)))))));
        var_13 += ((/* implicit */unsigned int) ((unsigned char) max((((unsigned long long int) (signed char)-108)), (((/* implicit */unsigned long long int) ((short) var_7))))));
        var_14 = ((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)255)))))));
    }
    for (long long int i_2 = 4; i_2 < 23; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) min((((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) arr_7 [i_2]))))) & (min((var_0), (((/* implicit */long long int) 352082827)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [2ULL])) ? (((/* implicit */int) ((signed char) var_0))) : (((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) arr_6 [i_2] [i_2])))))))));
        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned int) arr_7 [i_2]));
    }
    var_15 = ((/* implicit */signed char) var_7);
    var_16 &= ((/* implicit */unsigned long long int) var_6);
}
