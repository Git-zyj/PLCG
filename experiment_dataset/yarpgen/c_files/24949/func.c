/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24949
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (max((var_5), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_7)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned long long int) var_1);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_1)))), (((unsigned long long int) arr_2 [i_0])))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45015))))), (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43149))) : (arr_6 [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27496))) : (var_10)))))) : ((((_Bool)1) ? (((var_7) << (((arr_6 [2ULL] [i_1]) + (5851799008913540599LL))))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_3))))));
        var_18 += ((var_4) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (arr_4 [i_1 - 3]))));
        arr_9 [i_1] = ((/* implicit */short) var_3);
    }
    for (int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) ^ ((-(((/* implicit */int) var_12))))));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((10796437204649376959ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [5]))))), (var_12))))) >= (((long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_1 [(signed char)1] [7ULL])) : (((/* implicit */int) arr_12 [i_2])))))));
    }
    var_21 += ((/* implicit */unsigned long long int) var_14);
}
