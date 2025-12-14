/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36914
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
    var_17 = ((/* implicit */signed char) var_13);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (((((var_6) >= (var_16))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_12) - (var_12)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2070735075U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned int) var_7))))) - (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2224232249U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20339))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) 2224232196U)) : (var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (1187826594648777372ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_11);
        arr_4 [4] [4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [1ULL])) ? (var_10) : (((/* implicit */int) var_8)))))));
        arr_5 [i_0] = ((/* implicit */long long int) (!(var_14)));
        arr_6 [(signed char)10] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)21))))))) : (arr_1 [i_0] [i_0])));
    }
}
