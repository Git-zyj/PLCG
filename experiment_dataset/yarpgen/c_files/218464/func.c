/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218464
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3700551982U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1702302894U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (594415313U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) -1069206707)) : (arr_3 [i_0])))) : (var_10))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) min((-1910880400), (((/* implicit */int) (unsigned short)8983))))))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned int) -724701640);
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_0 [i_1] [i_1]))))))));
        var_19 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 12U)) : (arr_0 [i_2] [i_2]))) == (arr_6 [i_2]))) || (((/* implicit */_Bool) ((arr_6 [5]) + (arr_0 [i_2] [i_2]))))));
        var_20 = ((/* implicit */unsigned short) max(((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) 3700551981U)))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [10LL] [i_2])) >> (((arr_6 [i_2]) - (2657755087591834609LL))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_3]), (arr_3 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-73)), ((unsigned short)53478))))) : ((~(arr_12 [i_3] [i_3]))))))));
        arr_13 [i_3] [i_3] |= (+(((/* implicit */int) (_Bool)0)));
    }
    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))));
}
